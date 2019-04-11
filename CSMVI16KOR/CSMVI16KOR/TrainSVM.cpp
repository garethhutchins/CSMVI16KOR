#include "TrainSVM.h"
#include "freenect-playback-wrapper.h"
#include <Unknwn.h>    
#include <windows.h>
#include <objidl.h>
#include <shellapi.h>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <sstream>
#include <dirent.h>
using namespace cv;
using namespace std;

double S;
float Thresh;
int CT;




void readImages(string dirName, vector<Mat> & images, vector<Mat> & labels,int CurrentLabel) {
	cout << "Reading images from " << dirName;

	// Add slash to directory name if missing
	if (!dirName.empty() && dirName.back() != '/')
		dirName += '/';

	DIR *dir;
	struct dirent *ent;
	int count = 0;
	
	//image extensions
	string imgExt = "png";
	vector<string> files;
	

	if ((dir = opendir(dirName.c_str())) != NULL)
	{
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL)
		{
			if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
			{
				continue;
			}
			string fname = ent->d_name;

			if (fname.find(imgExt, (fname.length() - imgExt.length())) != std::string::npos)
			{
				string path = dirName + fname;

				Mat img = imread(path, cv::IMREAD_GRAYSCALE);
				if (!img.data)
				{
					//cout << "image " << path << " not read properly" << endl;
				}
				else {
					//Apply Edge Detection
					Mat src, src_gray;
					Mat dst, detected_edges;

					int edgeThresh = 1;
					int const max_lowThreshold = 100;
					int ratio = 3;
					int kernel_size = 3;
					char* window_name = "Edge Map";
					//Threshold
					img = img * Thresh;

					//Resize
					double Ss = S / 100;
					cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

					cv::blur(img, detected_edges, cv::Size(3, 3));

					/// Canny detector
					cv::Canny(detected_edges, detected_edges, CT, CT*ratio, kernel_size);

					/// Using Canny's output as a mask, we display our result
					dst = cv::Scalar::all(0);

					img.copyTo(dst, detected_edges);

					//HOGDescriptor hog;
					//vector<float> descriptors_train;
					//cv::imwrite(dirName +"/t.png", dst);
					//Mat imgR = imread(dirName + "/t.png", cv::IMREAD_GRAYSCALE);
					//imgR.convertTo(imgR, CV_32F);
					//hog.compute(imgR, descriptors_train,Size(8, 8), Size(0, 0));
					//Mat HogMat;
					
					//for (int i = 0; i < descriptors_train.size(); i++) {
						//Mat TMat = Mat(1,1, CV_32F, descriptors_train.at(i));
						//HogMat.push_back(TMat);
					//}
						
					images.push_back(dst);
				}
					
				
				cv::Mat Labs = cv::Mat(1, 1, CV_32SC1, CurrentLabel);
				labels.push_back(Labs);

			}
		}
		closedir(dir);
	}

	// Exit program if no images are found
	if (images.empty())exit(EXIT_FAILURE);

	cout << "... " << images.size() << " files read" << endl;
}

static  Mat createDataMatrix(const vector<Mat> &images)
{
	cout << "Creating data matrix from images ...";

	Mat data;

	// Turn an image into one row vector in the data matrix
	for (unsigned int i = 0; i < images.size(); i++)
	{
		// Extract image as one long vector of size w x h 
		Mat image = images[i].reshape(1, 1);

		// Copy the long vector into one row of the destm
		data.push_back(image);
	}

	cout << " DONE" << endl;
	return data;
}
static Mat createLabelMatrix(const vector<Mat> & labels) {
	Mat data;
	for (unsigned int i = 0; i < labels.size(); i++)
	{
		// Extract image as one long vector of size w x h 
		Mat image = labels[i].reshape(1, 1);

		// Copy the long vector into one row of the destm
		data.push_back(image);
	}

	cout << " DONE" << endl;
	return data;

}

TrainSVM::TrainSVM(std::string path) {
	vector<Mat> images;
	vector<Mat> labels;
	//Load the Image Processing Settings
	std::string fileName = path + "/ImageProc.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);
	
	fs["brightness"] >> Thresh;
	fs["resolution"] >> S;
	fs["canny"] >> CT;
	fs.release();
	//Add all of the Images
	readImages(path + "/Android", images, labels, 1);
	readImages(path + "/Baby", images, labels, 2);
	readImages(path + "/Blackberry", images, labels, 3);
	readImages(path + "/Camera", images, labels, 4);
	readImages(path + "/Car", images, labels, 5);
	readImages(path + "/Coffee Tin", images, labels, 6);
	readImages(path + "/Diet Coke", images, labels, 7);
	readImages(path + "/Dinosaur", images, labels, 8);
	readImages(path + "/Dog", images, labels, 9);
	readImages(path + "/Dragon", images, labels, 10);
	readImages(path + "/Duck", images, labels, 11);
	readImages(path + "/Keyboard", images, labels, 12);
	readImages(path + "/Koala", images, labels, 13);
	readImages(path + "/Mug", images, labels, 14);
	readImages(path + "/Nothing", images, labels, 15);
	int numRows = images.size();
	Size sz = images[0].size();
	Mat data = createDataMatrix(images);
	Mat Dlabels = createLabelMatrix(labels);
	


	//Now Setup the SVM Parameters
	

	Ptr<ml::SVM> svm = ml::SVM::create();
	// edit: the params struct got removed,
	// we use setter/getter now:
	svm->setType(ml::SVM::C_SVC);
	svm->setKernel(ml::SVM::LINEAR);
	svm->setGamma(3);
	svm->setDegree(3);

	//Now perform PCA on the HOG Matrix
	// do the PCA, and retain only 50 eigenvecs:
	cout << "Perform PCA" << endl;
	PCA pca(data, Mat(), PCA::DATA_AS_ROW, 50);
	fs.open(path + "pca.dat", FileStorage::WRITE);
	fs << "mean" << pca.mean;
	fs << "e_vectors" << pca.eigenvectors;
	fs << "e_values" << pca.eigenvalues;
	fs.release();

	Mat reduced = pca.project(data);
	reduced.convertTo(reduced, CV_32F);

	Dlabels.convertTo(Dlabels, CV_32SC1);
	cout << "Creating SVM" << endl;
	svm->train(reduced, ml::ROW_SAMPLE, Dlabels);
	//Save the SVM
	cout << "Saving SVM" << endl;
	svm->save(path + "svm.xml");
	
}
	