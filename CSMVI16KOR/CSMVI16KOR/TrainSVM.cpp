//TrainSVM.cpp
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
using namespace System::Windows::Forms;

double S;
float Thresh;
int CT;
int Rx1, Rx2, Ry1, Ry2;



void readImages(string dirName, vector<Mat> & images, vector<Mat> & labels,int CurrentLabel, std::string Type) {
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

					//Apply Edge Detection if image
					if (Type == "images") {
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
						Mat tIMG;
						img.copyTo(tIMG);
						cv::resize(tIMG, tIMG, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

						cv::blur(tIMG, detected_edges, cv::Size(3, 3));

						/// Canny detector
						cv::Canny(detected_edges, detected_edges, CT, CT*ratio, kernel_size);

						/// Using Canny's output as a mask, we display our result
						dst = cv::Scalar::all(0);

						tIMG.copyTo(dst, detected_edges);
						//Crop
						cv::Mat ROI(dst, cv::Rect(Rx1, Ry1, Rx2, Ry2));
						ROI.convertTo(ROI, CV_32F);

						images.push_back(ROI);
						cv::Mat ROI2(dst, cv::Rect(Rx1 - 5, Ry1, Rx2, Ry2));
						ROI2.convertTo(ROI2, CV_32F);
						images.push_back(ROI2);
						cv::Mat ROI3(dst, cv::Rect(Rx1, Ry1 + 5, Rx2, Ry2));
						ROI3.convertTo(ROI3, CV_32F);
						images.push_back(ROI3);
						cv::Mat ROI4(dst, cv::Rect(Rx1 - 5, Ry1 + 5, Rx2, Ry2));
						ROI4.convertTo(ROI4, CV_32F);
						images.push_back(ROI4);
						cv::Mat ROI5(dst, cv::Rect(Rx1 - 10, Ry1, Rx2, Ry2));
						ROI5.convertTo(ROI5, CV_32F);
						images.push_back(ROI5);
						cv::Mat ROI6(dst, cv::Rect(Rx1, Ry1 + 10, Rx2, Ry2));
						ROI6.convertTo(ROI6, CV_32F);
						images.push_back(ROI6);
						cv::Mat ROI7(dst, cv::Rect(Rx1 - 10, Ry1 + 10, Rx2, Ry2));
						ROI7.convertTo(ROI7, CV_32F);
						images.push_back(ROI7);
						cv::Mat ROI8(dst, cv::Rect(Rx1 - 15, Ry1, Rx2, Ry2));
						ROI8.convertTo(ROI8, CV_32F);
						images.push_back(ROI8);
						cv::Mat ROI9(dst, cv::Rect(Rx1, Ry1 + 15, Rx2, Ry2));
						ROI9.convertTo(ROI9, CV_32F);
						images.push_back(ROI9);
						cv::Mat ROI10(dst, cv::Rect(Rx1 - 15, Ry1 + 15, Rx2, Ry2));
						ROI10.convertTo(ROI10, CV_32F);
						images.push_back(ROI10);
					}
					else {
						//Resize
						double Ss = S / 100;
						cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);
						cv::Mat ROI(img, cv::Rect(Rx1, Ry1, Rx2, Ry2));
						ROI.convertTo(ROI, CV_32F);
						images.push_back(ROI);
						cv::Mat ROI2(img, cv::Rect(Rx1 - 5, Ry1, Rx2, Ry2));
						ROI2.convertTo(ROI2, CV_32F);
						images.push_back(ROI2);
						cv::Mat ROI3(img, cv::Rect(Rx1, Ry1 + 5, Rx2, Ry2));
						ROI3.convertTo(ROI3, CV_32F);
						images.push_back(ROI3);
						cv::Mat ROI4(img, cv::Rect(Rx1 - 5, Ry1 + 5, Rx2, Ry2));
						ROI4.convertTo(ROI4, CV_32F);
						images.push_back(ROI4);
						cv::Mat ROI5(img, cv::Rect(Rx1 - 10, Ry1, Rx2, Ry2));
						ROI5.convertTo(ROI5, CV_32F);
						images.push_back(ROI5);
						cv::Mat ROI6(img, cv::Rect(Rx1, Ry1 + 10, Rx2, Ry2));
						ROI6.convertTo(ROI6, CV_32F);
						images.push_back(ROI6);
						cv::Mat ROI7(img, cv::Rect(Rx1 - 10, Ry1 + 10, Rx2, Ry2));
						ROI7.convertTo(ROI7, CV_32F);
						images.push_back(ROI7);
						cv::Mat ROI8(img, cv::Rect(Rx1 - 15, Ry1, Rx2, Ry2));
						ROI8.convertTo(ROI8, CV_32F);
						images.push_back(ROI8);
						cv::Mat ROI9(img, cv::Rect(Rx1, Ry1 + 15, Rx2, Ry2));
						ROI9.convertTo(ROI9, CV_32F);
						images.push_back(ROI9);
						cv::Mat ROI10(img, cv::Rect(Rx1 - 15, Ry1 + 15, Rx2, Ry2));
						ROI10.convertTo(ROI10, CV_32F);
						images.push_back(ROI10);

					}
					
					
				}
					
				
				cv::Mat Labs = cv::Mat(1, 1, CV_32SC1, CurrentLabel);
				//Push back an equal number for the image windows
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
				labels.push_back(Labs);
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

TrainSVM::TrainSVM(std::string path, System::Windows::Forms::Label^ LS, std::string Type) {
	vector<Mat> images;
	vector<Mat> labels;
	//Load the Image Processing Settings
	LS->Text = "Loading Image Processing Settings";
	LS->Refresh();
	std::string fileName = path + "/ImageProc.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);
	
	fs["brightness"] >> Thresh;
	fs["resolution"] >> S;
	fs["canny"] >> CT;
	fs["x1"] >> Rx1;
	fs["x2"] >> Rx2;
	fs["y1"] >> Ry1;
	fs["y2"] >> Ry2;
	fs.release();
	//Add all of the Images
	LS->Text = "Reading Android Images";
	LS->Refresh();
	readImages(path + "/Android", images, labels, 1, Type);
	LS->Text = "Reading Baby Images";
	LS->Refresh();
	readImages(path + "/Baby", images, labels, 2, Type);
	LS->Text = "Reading Blackberry Images";
	LS->Refresh();
	readImages(path + "/Blackberry", images, labels, 3, Type);
	LS->Text = "Reading Camera Images";
	LS->Refresh();
	readImages(path + "/Camera", images, labels, 4, Type);
	LS->Text = "Reading Car Images";
	LS->Refresh();
	readImages(path + "/Car", images, labels, 5, Type);
	LS->Text = "Reading Coffee Tin Images";
	LS->Refresh();
	readImages(path + "/Coffee Tin", images, labels, 6, Type);
	LS->Text = "Reading Diet Coke Images";
	LS->Refresh();
	readImages(path + "/Diet Coke", images, labels, 7, Type);
	LS->Text = "Reading Dinosaur Images";
	LS->Refresh();
	readImages(path + "/Dinosaur", images, labels, 8, Type);
	LS->Text = "Reading Dog Images";
	LS->Refresh();
	readImages(path + "/Dog", images, labels, 9, Type);
	LS->Text = "Reading Dragon Images";
	LS->Refresh();
	readImages(path + "/Dragon", images, labels, 10, Type);
	LS->Text = "Reading Duck Images";
	LS->Refresh();
	readImages(path + "/Duck", images, labels, 11, Type);
	LS->Text = "Reading Keyboard Images";
	LS->Refresh();
	readImages(path + "/Keyboard", images, labels, 12, Type);
	LS->Text = "Reading Koala Images";
	LS->Refresh();
	readImages(path + "/Koala", images, labels, 13, Type);
	LS->Text = "Reading Mug Images";
	LS->Refresh();
	readImages(path + "/Mug", images, labels, 14, Type);
	LS->Text = "Reading Nothing Images";
	LS->Refresh();
	readImages(path + "/Nothing", images, labels, 15, Type);
	int numRows = images.size();
	Size sz = images[0].size();
	LS->Text = "Creating Data Matrix";
	LS->Refresh();
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
	LS->Text = "Performing PCA";
	LS->Refresh();
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
	LS->Text = "Creating SVM";
	LS->Refresh();
	cout << "Creating SVM" << endl;
	svm->train(reduced, ml::ROW_SAMPLE, Dlabels);
	//Save the SVM
	cout << "Saving SVM" << endl;
	svm->save(path + "svm.xml");
	LS->Refresh();
}
	