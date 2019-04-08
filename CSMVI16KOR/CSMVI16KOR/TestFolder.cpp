#include <iostream>
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
#include "EDistance.h"

#pragma comment(lib, "shell32")

TestFolder::TestFolder(std::string path, std::string temp)
{
	//Load all of the mus into memory
	//Android
	std::string fileName = temp + "/Android/Android.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);

	cv::Mat Android_mu;
	fs["mean"] >> Android_mu;
	fs.release();
	//Convert them to the saved format
	Android_mu.convertTo(Android_mu, CV_8U);

	//Baby
	fileName = temp + "/Baby/Baby.dat";

	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Baby;
	fs["mean"] >> Baby;
	fs.release();
	//Convert them to the saved format
	Baby.convertTo(Baby, CV_8U);

	//Blackberry
	fileName = temp + "/Blackberry/Blackberry.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Blackberry;
	fs["mean"] >> Blackberry;
	fs.release();
	//Convert them to the saved format
	Blackberry.convertTo(Blackberry, CV_8U);

	//Camera
	fileName = temp + "/Camera/Camera.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Camera;
	fs["mean"] >> Camera;
	fs.release();
	//Convert them to the saved format
	Camera.convertTo(Camera, CV_8U);

	//Car
	fileName = temp + "/Car/Car.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Car;
	fs["mean"] >> Car;
	fs.release();
	//Convert them to the saved format
	Car.convertTo(Car, CV_8U);

	//Coffe Tin
	fileName = temp + "/Coffe Tin/Coffe Tin.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat CoffeeTin;
	fs["mean"] >> CoffeeTin;
	fs.release();
	//Convert them to the saved format
	CoffeeTin.convertTo(CoffeeTin, CV_8U);

	//Diet Coke
	fileName = temp + "/Diet Coke/Diet Coke.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat DietCoke;
	fs["mean"] >> DietCoke;
	fs.release();
	//Convert them to the saved format
	DietCoke.convertTo(DietCoke, CV_8U);

	//Dinosaur
	fileName = temp + "/Dinosaur/Dinosaur.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dinosaur;
	fs["mean"] >> Dinosaur;
	fs.release();
	//Convert them to the saved format
	Dinosaur.convertTo(Dinosaur, CV_8U);

	//Dog
	fileName = temp + "/Dog/Dog.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dog;
	fs["mean"] >> Dog;
	fs.release();
	//Convert them to the saved format
	Dog.convertTo(Dog, CV_8U);

	//Dragon
	fileName = temp + "/Dragon/Dragon.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dragon;
	fs["mean"] >> Dragon;
	fs.release();
	//Convert them to the saved format
	Dragon.convertTo(Dragon, CV_8U);

	//Duck
	fileName = temp + "/Duck/Duck.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Duck;
	fs["mean"] >> Duck;
	fs.release();
	//Convert them to the saved format
	Duck.convertTo(Duck, CV_8U);

	//Keyboard
	fileName = temp + "/Keyboard/Keyboard.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Keyboard;
	fs["mean"] >> Keyboard;
	fs.release();
	//Convert them to the saved format
	Keyboard.convertTo(Keyboard, CV_8U);

	//Koala
	fileName = temp + "/Koala/Koala.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Koala;
	fs["mean"] >> Koala;
	fs.release();
	//Convert them to the saved format
	Koala.convertTo(Koala, CV_8U);

	//Mug
	fileName = temp + "/Mug/Mug.dat";
	fs.open(fileName, cv::FileStorage::READ);
	cv::Mat Mug;
	fs["mean"] >> Mug;
	fs.release();
	//Convert them to the saved format
	Mug.convertTo(Mug, CV_8U);


	//Unlabelled
	fileName = temp + "/unlabelled/unlabelled.dat";
	fs.open(fileName, cv::FileStorage::READ);
	cv::Mat unlabelled;
	fs["mean"] >> unlabelled;
	fs.release();
	//Convert them to the saved format
	Mug.convertTo(unlabelled, CV_8U);



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
		Grey.convertTo(Grey, CV_8U);

		EDistance E;

		double Distance = E.GetDistance(currentDepth, Android_mu);
		std::string D = std::to_string(Distance);
		std::cout << "Android Distance " << D << std::endl;

		Distance = E.GetDistance(currentDepth, Camera);
		D = std::to_string(Distance);
		std::cout << "Camera Distance " << D << std::endl;

		Distance = E.GetDistance(currentDepth, unlabelled);
		D = std::to_string(Distance);
		std::cout << "unlabelled Distance " << D << std::endl;

		// Check for keyboard input
		key = cv::waitKey(10);
	}

}


