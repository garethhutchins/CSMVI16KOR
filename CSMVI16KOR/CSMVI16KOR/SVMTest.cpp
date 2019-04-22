//SVMTest.cpp
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

void GetLabel(float Code, System::Windows::Forms::Label^ L ) {
	std::string Lab = "Nothing";
	int c = static_cast<int>(Code);
	switch (c) {
	case 1: {
		L->Text = "Android";
		break;
	}
	case 2: {
		L->Text = "Baby";
		break;
	}
	case 3: {
		L->Text = "Blackberry";
		break;
	}
	case 4: {
		L->Text = "Camera";
		break;
	}
	case 5: {
		L->Text = "Car";
		break;
	}
	case 6: {
		L->Text = "Coffee Tin";
		break;
	}
	case 7: {
		L->Text = "Diet Coke";
		break;
	}
	case 8: {
		L->Text = "Dinosaur";
		break;
	}
	case 9: {
		L->Text = "Dog";
		break;
	}
	case 10: {
		L->Text = "Dragon";
		break;
	}
	case 11: {
		L->Text = "Duck";
		break;
	}
	case 12: {
		L->Text = "Keyboard";
		break;
	}
	case 13: {
		L->Text = "Koala";
		break;
	}
	case 14: {
		L->Text = "Mug";
		break;
	}
	case 15: {
		L->Text = "Nothing";
		break;
	}
	}
}

SVMTest::SVMTest(std::string TrainingPath, std::string ImagePath, System::Windows::Forms::Label^ DL, System::Windows::Forms::Label^ IL, System::Windows::Forms::Label^ LS) {
	using namespace cv;
	LS->Text = "Loading Image Processing Settings";
	LS->Refresh();
	double S;
	float Thresh;
	int CT;
	int Rx1, Rx2, Ry1, Ry2;
	std::string fileName = TrainingPath + "/images/ImageProc.dat";
	cv::FileStorage Ifs(fileName, cv::FileStorage::READ);

	Ifs["brightness"] >> Thresh;
	Ifs["resolution"] >> S;
	Ifs["canny"] >> CT;
	Ifs["x1"] >> Rx1;
	Ifs["x2"] >> Rx2;
	Ifs["y1"] >> Ry1;
	Ifs["y2"] >> Ry2;
	Ifs.release();
	
	//Load the PCA
	LS->Text = "Loading Depth PCA";
	LS->Refresh();
	std::cout << "Loading Depth PCA" << std::endl;
	cv::PCA DepthPCA;
	cv::PCA ImagePCA;
	FileStorage fsD(TrainingPath +"/depthpca.dat", FileStorage::READ);
	fsD["mean"] >> DepthPCA.mean;
	fsD["e_vectors"] >> DepthPCA.eigenvectors;
	fsD["e_values"] >> DepthPCA.eigenvalues;
	fsD.release();

	std::cout << "Loading Image PCA" << std::endl;
	LS->Refresh();
	LS->Text = "Loading Image PCA";

	FileStorage fsI(TrainingPath + "/imagespca.dat", FileStorage::READ);
	fsI["mean"] >> ImagePCA.mean;
	fsI["e_vectors"] >> ImagePCA.eigenvectors;
	fsI["e_values"] >> ImagePCA.eigenvalues;
	fsI.release();

	
	//Load the SVM
	LS->Text = "Loading Depth SVM";
	LS->Refresh();
	std::cout << "Loading Depth SVM" << std::endl;
	std::string svmFile = TrainingPath + "/depthsvm.xml";
	Ptr<ml::SVM> svmD = Algorithm::load<ml::SVM>(svmFile);
	LS->Text = "Loading Image SVM";
	LS->Refresh();
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

	int OneInTwenty = 0;

	// Create the RGB and Depth Windows
	cv::namedWindow("RGB", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::moveWindow("RGB", 1000, 0);
	cv::namedWindow("Depth", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	cv::moveWindow("Depth", 1000, 500);
	cv::namedWindow("Sil", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
	//This is for seeing the Canny Results
	//cv::namedWindow("DepthC", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);

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
		LS->Text = "Analyzing Images";
		LS->Refresh();
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
		//Do the detection for every on in twenty to speed things up
		if (OneInTwenty == 20) {
			OneInTwenty = 0;
		}

		if (OneInTwenty == 0) {
			//std::string iFile = TrainingPath + "/image.png";
			cv::Mat Grey;
			cv::cvtColor(currentRGB, Grey, cv::COLOR_BGR2GRAY);
			//Check the type of stream before applying conversion
			Mat Image;
			Mat Ires;
			Mat dst, detected_edges;

			//Images

			int edgeThresh = 1;
			int const max_lowThreshold = 100;
			int ratio = 3;
			int kernel_size = 3;
			char* window_name = "Edge Map";

			Grey = Grey * Thresh;

			//Resize
			double Ss = S / 100;
			cv::resize(Grey, Grey, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

			cv::blur(Grey, detected_edges, cv::Size(3, 3));

			/// Canny detector
			cv::Canny(detected_edges, detected_edges, CT, CT*ratio, kernel_size);

			/// Using Canny's output as a mask, we display our result
			dst = cv::Scalar::all(0);

			Grey.copyTo(dst, detected_edges);
			cv::Mat ROI(dst, cv::Rect(Rx1, Ry1, Rx2, Ry2));
			ROI.convertTo(ROI, CV_32F);
			Mat RS = ROI.reshape(1, 1);
			//Now reduce the HogMat with the PCA Projetions

			RS.convertTo(RS, CV_32F);
			Mat IRed = ImagePCA.project(RS);
			IRed.convertTo(IRed, CV_32F);
			float Iresponse = svmI->predict(IRed, Ires, 0);
			std::cout << "SVM Image Output = " << Ires.at<float>(0) << std::endl;

			GetLabel(Ires.at<float>(0), IL);
			
			//Depth
			

			//Resize
			Ss = S / 100;

			cv::resize(currentDepth, currentDepth, cv::Size(), Ss, Ss, cv::INTER_LINEAR);
			cv::Mat SCD;

			cv::Mat t1, t2;
			//Just the object
			cv::threshold(currentDepth, t1, 80, 255, cv::THRESH_TOZERO);
			//Everything but object
			cv::threshold(currentDepth, t2, 80, 255, cv::THRESH_TOZERO_INV);
			
			//Invert that so that the outline is white
			cv::Mat OM, OM2;
			currentDepth.copyTo(OM, t1);
			int oldValue = 0;
			int newValue = 255;
			OM.setTo(newValue, OM == oldValue);
			OM.copyTo(OM2, t2);
			cv::imshow("Sil", OM2);

			cv::Mat ROID(OM2, cv::Rect(Rx1, Ry1, Rx2, Ry2));
			ROID.convertTo(ROID, CV_32F);
			Mat RSD = ROID.reshape(1, 1);
			RSD.convertTo(RSD, CV_32F);
			Mat DRed = DepthPCA.project(RSD);
			DRed.convertTo(DRed, CV_32F);
			
			
			Mat Dres;
			float Dresponse = svmD->predict(DRed, Dres, 0);
			std::cout << "SVM Depth Output = " << Dres.at<float>(0) << std::endl;
			GetLabel(Dres.at<float>(0), DL);
		}
		
		OneInTwenty++;
	

		// Check for keyboard input
		key = cv::waitKey(10);
		
	}
	
}
