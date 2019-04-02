#include "TestFolder.h"
#include "freenect-playback-wrapper.h"
#include <Unknwn.h>    
#include <windows.h>
#include <objidl.h>
#include <shellapi.h>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>
#include "Probability.h"
#pragma comment(lib, "shell32")

TestFolder::TestFolder(std::string path, std::string temp)
{
	//Load all of the mus and means into memory
	//Android
	std::string fileName = temp + "/Android/Android.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);

	cv::Mat Andoird_cov;
	cv::Mat Andoird_mu;
	fs["mean"] >> Andoird_mu;
	fs["cov"] >> Andoird_cov;
	fs.release();
	//Convert them to the saved format
	Andoird_mu.convertTo(Andoird_mu, CV_32F);
	Andoird_cov.convertTo(Andoird_cov, CV_32F);
	int Frame = 0;
	FreenectPlaybackWrapper wrap(path);

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
		cv::imshow("RGB", currentRGB);
		cv::Mat Grey;
		cv::cvtColor(currentRGB, Grey, cv::COLOR_BGR2GRAY);
		cv::imshow("Depth", currentDepth);
		//Get the Probability for Depths
		currentDepth.convertTo(currentDepth, CV_32F);

		Probability::Probability(currentDepth, Andoird_mu, Andoird_cov);
		
		
		



		

		// Check for keyboard input
		key = cv::waitKey(10);
	}

	//Open the folder so you can see the frames
	std::string t = temp + "/images";
	std::wstring stemp = std::wstring(t.begin(), t.end());
	LPCWSTR sw = stemp.c_str();
	ShellExecute(NULL, NULL, sw, NULL, NULL, SW_SHOWDEFAULT);
}

