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
static  Mat createDataMatrix(const vector<Mat> &images)
{
	cout << "Creating data matrix from images ...";

	Mat data(static_cast<int>(images.size()), images[0].rows * images[0].cols, CV_32F);
	// Turn an image into one row vector in the data matrix
	for (unsigned int i = 0; i < images.size(); i++)
	{
		// Extract image as one long vector of size w x h 
		Mat image = images[i].reshape(1, 1);

		// Copy the long vector into one row of the destm
		image.copyTo(data.row(i));
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
				{
					// Convert images to floating point type
					//img.convertTo(img, CV_32F, 1 / 255.0);
					images.push_back(img);
				}
			}
		}
		closedir(dir);
	}

	// Exit program if no images are found
	if (images.empty())exit(EXIT_FAILURE);

	cout << "... " << images.size() / 2 << " files read" << endl;
}

TrainGMM::TrainGMM(std::string path, std::string label)
{
	vector<Mat> images;
	readImages(path, images);
	int numRows = images.size();
	Size sz = images[0].size();
	Mat data = createDataMatrix(images);
	Mat cov, mean;
	//Calculate the mean and Covariance Matrix for the GMM
	cv::calcCovarMatrix(images, cov, mean, COVAR_ROWS);
	//Divide by number of Rows
	cov = cov / (numRows - 1);
	//save the GMM
	std::string fileName = path + "/" + label + ".dat";
	FileStorage fs(fileName, FileStorage::WRITE);
	fs << "mean" << mean;
	fs << "cov" << cov;
	fs.release();

}

