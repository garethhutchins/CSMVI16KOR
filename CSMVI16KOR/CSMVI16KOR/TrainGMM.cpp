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
#include "TrainGMM.h"

using namespace cv;
using namespace std;
static Mat createCoVar(cv::Mat data, cv::Mat mean) {
	cv::Mat dt = data;
	for (int r = 0; r < dt.rows; ++r) {
		dt.row(r) = abs(dt.row(r) - mean);
	}
	Mat td = dt.t();
	data.convertTo(dt, CV_32F);
	td.convertTo(td, CV_32F);
	//Now Calculate the Cov
	Mat cov;
	//cov = data * td;
	cov = td * data;
	cov = cov / (dt.rows - 1);
	return cov;

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
void readImages(string dirName, vector<Mat> & images) {
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
					images.push_back(img);
				
			}
		}
		closedir(dir);
	}

	// Exit program if no images are found
	if (images.empty())exit(EXIT_FAILURE);

	cout << "... " << images.size() << " files read" << endl;
}

TrainGMM::TrainGMM(std::string path, std::string label)
{
	vector<Mat> images;
	readImages(path, images);
	int numRows = images.size();
	Size sz = images[0].size();
	Mat data = createDataMatrix(images);
	data.convertTo(data, CV_32F);
	Mat mean;
	reduce(data, mean, 0, REDUCE_AVG);
	mean.convertTo(mean, CV_32F);
	images.clear();
	//Save the File

	std::string fileName = path + "/" + label + ".dat";
	FileStorage fs(fileName, FileStorage::WRITE);
	fs << "mean" << mean;
	fs.release();
	
	//The data matrix is too large to calculate the Cov
	//Perform SVD to reduce the number of columns
	//cv::SVD svd = SVD::SVD(data);
	//cv::Mat A = svd.u.colRange(1, 5) * svd.w.colRange(1, 5) * svd.vt.colRange(1, 5);
	
	//Calculate the mean and Covariance Matrix for the GMM
	
	//reduce(A, mean, 0, REDUCE_AVG);
	//cov = createCoVar(A, mean);
	
	//Calc Covar
	//cv::calcCovarMatrix(data, cov, mean, COVAR_ROWS | COVAR_SCRAMBLED, CV_32F);
	//Divide by number of Rows
	//save the GMM
	

}

