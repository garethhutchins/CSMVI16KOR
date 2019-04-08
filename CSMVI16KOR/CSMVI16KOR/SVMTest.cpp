#include "SVMTest.h"
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

SVMTest::SVMTest(std::string TrainingPath, std::string ImagePath) {
	//Load the SVM
	std::cout << "Loading Depth SVM" << std::endl;
	std::string svmFile = TrainingPath + "/depthsvm.xml";
	Ptr<ml::SVM> svmD = Algorithm::load<ml::SVM>(svmFile);
	std::cout << "Loading Image SVM" << std::endl;
	svmFile = TrainingPath + "/imagessvm.xml";
	Ptr<ml::SVM> svmI = Algorithm::load<ml::SVM>(svmFile);

	//Now run the video
	namespace fs = std::experimental::filesystem;
	//Create images Directory
	

	int Frame = 0;
	FreenectPlaybackWrapper wrap(ImagePath);

	cv::Mat currentRGB;
	cv::Mat currentDepth;

	// Create the RGB and Depth Windows
	cv::namedWindow("RGB", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::namedWindow("Depth", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);

	// The key value represents a key pressed on the keyboard,
	// where 27 is the ESCAPE key
	char key = '0';

	// The status represents the current status of the Playback
	// wrapper. 
	//
	// A value of 0 represents that it has finished
	// playback.
	//
	// The status can by bitwise AND to determine if the RGB or
	// Depth image has been updated using the State enum.
	uint8_t status = 255;

	while (key != 27 && status != 0)
	{
		// Loads in the next frame of Kinect data into the
		// wrapper. Also pauses between the frames depending
		// on the time between frames.
		status = wrap.GetNextFrame();
		Frame++;

		// Determine if RGB is updated, and grabs the image
		// if it has been updated
		if (status & State::UPDATED_RGB)
			currentRGB = wrap.RGB;

		// Determine if Depth is updated, and grabs the image
		// if it has been updated
		if (status & State::UPDATED_DEPTH)
			currentDepth = wrap.Depth;

		// Show the images in the windows
		// Show the images in the windows
		cv::imshow("RGB", currentRGB);
		cv::imshow("Depth", currentDepth);
		std::string iFile = TrainingPath + "/image.png";
		cv::Mat Grey;
		cv::cvtColor(currentRGB, Grey, cv::COLOR_BGR2GRAY);
		cv::imwrite(iFile, Grey);



		//depth
		std::string dFile = TrainingPath + "/depth.png";
		cv::imwrite(dFile, currentDepth);
		Mat img = imread(TrainingPath + "/image.png", cv::IMREAD_GRAYSCALE);
		Mat depth = imread(TrainingPath + "/depth.png", cv::IMREAD_GRAYSCALE);
		//Get the Probability for Depths
		//depth
		//Get the Hog
		HOGDescriptor Dhog;
		std::vector<float> descriptors_train_D;
		Dhog.compute(depth, descriptors_train_D, Size(64, 48), Size(0, 0));
		Mat HogMatD;

		for (int i = 0; i < descriptors_train_D.size(); i++) {
			Mat TMat = Mat(1, 1, CV_32F, descriptors_train_D.at(i));
			HogMatD.push_back(TMat);
		}

		Mat Dres;
		HogMatD = HogMatD.t();
		float Dresponse = svmD->predict(HogMatD, Dres, 0);
		std::cout << std::to_string(Dresponse);
		std::cout << "SVM Depth Output = " << Dres.at<float>(0) << std::endl;
	

		// Check for keyboard input
		key = cv::waitKey(10);

		Mat Image;
		Mat Ires;
		HOGDescriptor Ihog;
		std::vector<float> descriptors_train_I;
		Ihog.compute(img, descriptors_train_I, Size(64, 48), Size(0, 0));
		Mat HogMatI;

		for (int i = 0; i < descriptors_train_I.size(); i++) {
			Mat TMat = Mat(1, 1, CV_32F, descriptors_train_I.at(i));
			HogMatI.push_back(TMat);
		}
		HogMatI = HogMatI.t();
		float Iresponse = svmI->predict(HogMatI, Ires, 0);
		std::cout << std::to_string(Iresponse);
		std::cout << "SVM Image Output = " << Ires.at<float>(0) << std::endl;
		
		

		
	}
}