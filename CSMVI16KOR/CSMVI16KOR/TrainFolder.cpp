#include "TrainFolder.h"
#include "freenect-playback-wrapper.h"
#include <Unknwn.h>    
#include <windows.h>
#include <objidl.h>
#include <shellapi.h>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>
#pragma comment(lib, "shell32")



TrainFolder::TrainFolder(std::string path, std::string temp)
{
	namespace fs = std::experimental::filesystem;
	//Create images Directory
	fs::create_directory(temp +  "/images");
	//Create the depth directory
	fs::create_directory(temp + "/depth");

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
		cv::Mat SCD;
		
		cv::Mat t1, t2;
		//Just the object
		cv::threshold(currentDepth, t1, 80, 255, cv::THRESH_TOZERO);
		//Everything but object
		cv::threshold(currentDepth, t2, 80, 255, cv::THRESH_TOZERO_INV);
		cv::cvtColor(currentRGB, SCD, cv::COLOR_BGR2GRAY);
		//Invert that so that the outline is white
		cv::Mat OM, OM2;
		SCD.copyTo(OM, t1);
		int oldValue = 0;
		int newValue = 255;
		OM.setTo(newValue, OM == oldValue);
		OM.copyTo(OM2, t2);
		// Show the images in the windows
		cv::imshow("RGB", currentRGB);
		cv::imshow("Depth", OM2);
		std::string iFile = temp + "/images/" + std::to_string(Frame) + ".png";
		cv::Mat Grey;
		cv::cvtColor(currentRGB, Grey, cv::COLOR_BGR2GRAY);
		cv::imwrite(iFile, Grey);

		//depth
		std::string dFile = temp + "/depth/" + std::to_string(Frame) + ".png";
		cv::imwrite(dFile, OM2);
		
		// Check for keyboard input
		key = cv::waitKey(10);
	}

	//Open the folder so you can see the frames
	std::string t = temp + "/images";
	std::wstring stemp = std::wstring(t.begin(), t.end());
	LPCWSTR sw = stemp.c_str();
	ShellExecute(NULL, NULL,sw , NULL, NULL, SW_SHOWDEFAULT);
}


