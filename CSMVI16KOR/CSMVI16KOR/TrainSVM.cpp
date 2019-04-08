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
					HOGDescriptor hog;
					vector<float> descriptors_train;
					hog.compute(img, descriptors_train,Size(64, 48), Size(0, 0));
					Mat HogMat;
					
					for (int i = 0; i < descriptors_train.size(); i++) {
						Mat TMat = Mat(1,1, CV_32F, descriptors_train.at(i));
						HogMat.push_back(TMat);
					}
						
					images.push_back(HogMat);
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
	//data.copyTo(data, CV_32F);


	//Now Setup the SVM Parameters
	cout << "Creating SVM" << endl;

	Ptr<ml::SVM> svm = ml::SVM::create();
	// edit: the params struct got removed,
	// we use setter/getter now:
	svm->setType(ml::SVM::C_SVC);
	svm->setKernel(ml::SVM::LINEAR);
	svm->setGamma(3);
	svm->setDegree(3);
	

	Dlabels.convertTo(Dlabels, CV_32SC1);
	svm->train(data, ml::ROW_SAMPLE, Dlabels);
	//Save the SVM
	cout << "Saving SVM" << endl;
	svm->save(path + "svm.xml");
	
}
	