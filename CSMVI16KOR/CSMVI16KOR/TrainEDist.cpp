#include <string>
#include "TrainFolder.h"
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
#include "TrainEDist.h"

using namespace cv;
using namespace std;

double ES;
float EThresh;
int ECT;
int Ex1, Ex2, Ey1, Ey2;

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
void readImages(string dirName, vector<Mat> & images, std::string Type) {
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
					cout << "image " << path << " not read properly" << endl;
				}
				else
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
						img = img * EThresh;

						//Resize
						double Ss = ES / 100;
						cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

						cv::blur(img, detected_edges, cv::Size(3, 3));

						/// Canny detector
						cv::Canny(detected_edges, detected_edges, ECT, ECT*ratio, kernel_size);

						/// Using Canny's output as a mask, we display our result
						dst = cv::Scalar::all(0);

						img.copyTo(dst, detected_edges);
						//Crop
						cv::Mat ROI(dst, cv::Rect(Ex1, Ey1, Ex2, Ey2));
						ROI.convertTo(ROI, CV_32F);

						images.push_back(ROI);
					}
					else {
						//Resize
						double Ss = ES / 100;
						cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);
						cv::Mat ROI(img, cv::Rect(Ex1, Ey1, Ex2, Ey2));
						ROI.convertTo(ROI, CV_32F);

						images.push_back(ROI);
					}
					
				
			}
		}
		closedir(dir);
	}

	// Exit program if no images are found
	if (images.empty())exit(EXIT_FAILURE);

	cout << "... " << images.size() << " files read" << endl;
}

TrainEDist::TrainEDist(std::string path, std::string label, std::string Trainpath, std::string type)
{
	//Load Image Processing Settings
	std::string fileName = Trainpath + "/ImageProc.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);

	fs["brightness"] >> EThresh;
	fs["resolution"] >> ES;
	fs["canny"] >> ECT;
	fs["x1"] >> Ex1;
	fs["x2"] >> Ex2;
	fs["y1"] >> Ey1;
	fs["y2"] >> Ey2;
	fs.release();
	vector<Mat> images;
	readImages(path, images,type);
	int numRows = images.size();
	Mat data = createDataMatrix(images);
	data.convertTo(data, CV_32F);
	Mat mean;
	reduce(data, mean, 0, REDUCE_AVG);
	mean.convertTo(mean, CV_32F);
	images.clear();
	//Save the File

	fileName = path + "/" + label + ".dat";
	fs.open(fileName, FileStorage::WRITE);
	fs << "mean" << mean;
	fs.release();
}

