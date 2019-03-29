#include "ObjectPCA.h"
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

using namespace cv;
using namespace std;
static  Mat createDataMatrix(const vector<Mat> &images)
{
	cout << "Creating data matrix from images ...";

	// Allocate space for all images in one data matrix.
	// The size of the data matrix is
	//
	// ( w  * h  * 3, numImages )
	//
	// where,
	//
	// w = width of an image in the dataset.
	// h = height of an image in the dataset.
	// 3 is for the 3 color channels.


	Mat data(static_cast<int>(images.size()), images[0].rows * images[0].cols * 3, CV_32F);

	// Turn an image into one row vector in the data matrix
	for (unsigned int i = 0; i < images.size(); i++)
	{
		// Extract image as one long vector of size w x h x 3
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
	string imgExt = "bmp";
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
				Mat img = imread(path);
				if (!img.data)
				{
					cout << "image " << path << " not read properly" << endl;
				}
				else
				{
					// Convert images to floating point type
					img.convertTo(img, CV_32FC3, 1 / 255.0);
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

ObjectPCA::ObjectPCA(std::string path, std::string label)
{
	vector<Mat> images;
	readImages(path, images);
	Size sz = images[0].size();
	Mat data = createDataMatrix(images);
	
	PCA pca(data, Mat(), PCA::DATA_AS_ROW, 10);
	//save the PCA
	std::string fileName = path + "/" + label + ".dat";
	FileStorage fs(fileName, FileStorage::WRITE);
	fs << "mean" << pca.mean;
	fs << "e_vectors" << pca.eigenvectors;
	fs << "e_values" << pca.eigenvalues;
	fs.release();

}

