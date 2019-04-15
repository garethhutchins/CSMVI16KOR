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
double TES;
float TEThresh;
int TECT;
int TERx1, TERx2, TERy1, TERy2;
TestFolder::TestFolder(std::string path, std::string temp, std::string Type, System::Windows::Forms::DataVisualization::Charting::Chart^  chart1, System::Windows::Forms::Label^ IL)
{
	//Set the graph
	array <System::String ^>^ obj = { "Android", "Baby", "Blackberry", "Camera","Car", "Coffee Tin","Diet Coke","Dinosaur","Dog","Dragon","Duck","Keyboard","Koala","Mug","Nothing" };
	double val[] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
	

	//Load the Image Processing steps to Memory
	std::string fileName = temp + "/ImageProc.dat";
	cv::FileStorage fs(fileName, cv::FileStorage::READ);

	fs["brightness"] >> TEThresh;
	fs["resolution"] >> TES;
	fs["canny"] >> TECT;
	fs["x1"] >> TERx1;
	fs["x2"] >> TERx2;
	fs["y1"] >> TERy1;
	fs["y2"] >> TERy2;
	fs.release();


	//Load all of the mus into memory
	//Android
	fileName = temp + "/Android/Android.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Android_mu;
	fs["mean"] >> Android_mu;
	fs.release();
	//Convert them to the saved format
	Android_mu.convertTo(Android_mu, CV_32F);

	//Baby
	fileName = temp + "/Baby/Baby.dat";

	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Baby;
	fs["mean"] >> Baby;
	fs.release();
	//Convert them to the saved format
	Baby.convertTo(Baby, CV_32F);

	//Blackberry
	fileName = temp + "/Blackberry/Blackberry.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Blackberry;
	fs["mean"] >> Blackberry;
	fs.release();
	//Convert them to the saved format
	Blackberry.convertTo(Blackberry, CV_32F);

	//Camera
	fileName = temp + "/Camera/Camera.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Camera;
	fs["mean"] >> Camera;
	fs.release();
	//Convert them to the saved format
	Camera.convertTo(Camera, CV_32F);

	//Car
	fileName = temp + "/Car/Car.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Car;
	fs["mean"] >> Car;
	fs.release();
	//Convert them to the saved format
	Car.convertTo(Car, CV_32F);

	//Coffe Tin
	fileName = temp + "/Coffee Tin/Coffee Tin.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat CoffeeTin;
	fs["mean"] >> CoffeeTin;
	fs.release();
	//Convert them to the saved format
	CoffeeTin.convertTo(CoffeeTin, CV_32F);

	//Diet Coke
	fileName = temp + "/Diet Coke/Diet Coke.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat DietCoke;
	fs["mean"] >> DietCoke;
	fs.release();
	//Convert them to the saved format
	DietCoke.convertTo(DietCoke, CV_32F);

	//Dinosaur
	fileName = temp + "/Dinosaur/Dinosaur.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dinosaur;
	fs["mean"] >> Dinosaur;
	fs.release();
	//Convert them to the saved format
	Dinosaur.convertTo(Dinosaur, CV_32F);

	//Dog
	fileName = temp + "/Dog/Dog.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dog;
	fs["mean"] >> Dog;
	fs.release();
	//Convert them to the saved format
	Dog.convertTo(Dog, CV_32F);

	//Dragon
	fileName = temp + "/Dragon/Dragon.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Dragon;
	fs["mean"] >> Dragon;
	fs.release();
	//Convert them to the saved format
	Dragon.convertTo(Dragon, CV_32F);

	//Duck
	fileName = temp + "/Duck/Duck.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Duck;
	fs["mean"] >> Duck;
	fs.release();
	//Convert them to the saved format
	Duck.convertTo(Duck, CV_32F);

	//Keyboard
	fileName = temp + "/Keyboard/Keyboard.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Keyboard;
	fs["mean"] >> Keyboard;
	fs.release();
	//Convert them to the saved format
	Keyboard.convertTo(Keyboard, CV_32F);

	//Koala
	fileName = temp + "/Koala/Koala.dat";
	fs.open(fileName, cv::FileStorage::READ);

	cv::Mat Koala;
	fs["mean"] >> Koala;
	fs.release();
	//Convert them to the saved format
	Koala.convertTo(Koala, CV_32F);

	//Mug
	fileName = temp + "/Mug/Mug.dat";
	fs.open(fileName, cv::FileStorage::READ);
	cv::Mat Mug;
	fs["mean"] >> Mug;
	fs.release();
	//Convert them to the saved format
	Mug.convertTo(Mug, CV_32F);


	//Unlabelled
	fileName = temp + "/unlabelled/unlabelled.dat";
	fs.open(fileName, cv::FileStorage::READ);
	cv::Mat unlabelled;
	fs["mean"] >> unlabelled;
	fs.release();
	//Convert them to the saved format
	unlabelled.convertTo(unlabelled, CV_32F);



	int Frame = 0;
	FreenectPlaybackWrapper wrap(path);

	cv::Mat currentRGB;
	cv::Mat currentDepth;

	// Create the RGB and Depth Windows
	if (Type == "images") {
		cv::namedWindow("RGB", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
		cv::moveWindow("RGB", 1000, 0);
	}
	else
	{
		cv::namedWindow("Depth", cv::WindowFlags::WINDOW_AUTOSIZE | cv::WindowFlags::WINDOW_GUI_EXPANDED);
		cv::moveWindow("Depth", 1000, 0);
	}
	
	

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
		if (Type == "images") {
			cv::imshow("RGB", currentRGB);
		}
		else {
			cv::imshow("Depth", currentDepth);
		}
		
		cv::Mat Grey;
		cv::cvtColor(currentRGB, Grey, cv::COLOR_BGR2GRAY);
		
		//Get the Probability for Depths
		

		//Apply the Image Processing
		//Apply Edge Detection
		cv::Mat src, src_gray;
		cv::Mat dst, detected_edges;

		int edgeThresh = 1;
		int const max_lowThreshold = 100;
		int ratio = 3;
		int kernel_size = 3;
		char* window_name = "Edge Map";
		//Images
		//Threshold
		cv::Mat img;
		if (Type == "images") {
			Grey = Grey * TEThresh;

			//Resize
			double Ss = TES / 100;
			cv::resize(Grey, Grey, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

			cv::blur(Grey, detected_edges, cv::Size(3, 3));

			/// Canny detector
			cv::Canny(detected_edges, detected_edges, TECT, TECT*ratio, kernel_size);

			/// Using Canny's output as a mask, we display our result
			dst = cv::Scalar::all(0);
			Grey.copyTo(dst, detected_edges);
		}
		else {
			//Type is depth
			img = currentDepth * TEThresh;
			//Resize
			double Ss = TES / 100;
			cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

			cv::blur(img, detected_edges, cv::Size(3, 3));

			/// Canny detector
			cv::Canny(detected_edges, detected_edges, TECT, TECT*ratio, kernel_size);

			/// Using Canny's output as a mask, we display our result
			dst = cv::Scalar::all(0);
			img.copyTo(dst, detected_edges);
		}
		
		
		
		cv::Mat ROI(dst, cv::Rect(TERx1, TERy1, TERx2, TERy2));
		ROI.convertTo(ROI, CV_32F);

		EDistance E;
		double Tot = 0;

		double DAndroid = E.GetDistance(ROI, Android_mu);
		Tot = Tot + DAndroid;
		std::string D = std::to_string(DAndroid);
		std::cout << "Android " << Type << " " << D << std::endl;

		double DBaby = E.GetDistance(ROI, Baby);
		Tot = Tot + DBaby;
		D = std::to_string(DBaby);
		std::cout << "Baby " << Type << " " << D << std::endl;

		double DBlackberry = E.GetDistance(ROI, Blackberry);
		Tot = Tot + DBlackberry;
		D = std::to_string(DBlackberry);
		std::cout << "Blackberry " << Type << " " << D << std::endl;

		double DCamera = E.GetDistance(ROI, Camera);
		Tot = Tot + DCamera;
		D = std::to_string(DCamera);
		std::cout << "Camera " << Type << " " << D << std::endl;

		double Dcar = E.GetDistance(ROI, Car);
		Tot = Tot + Dcar;
		D = std::to_string(Dcar);
		std::cout << "Car " << Type << " " << D << std::endl;

		double DCof = E.GetDistance(ROI, CoffeeTin);
		Tot = Tot + DCof;
		D = std::to_string(DCof);
		std::cout << "Coffee Tin " << Type << " " << D << std::endl;

		double DDiet = E.GetDistance(ROI, DietCoke);
		Tot = Tot + DDiet;
		D = std::to_string(DDiet);
		std::cout << "Diet Coke " << Type << " " << D << std::endl;

		double DDino = E.GetDistance(ROI, Dinosaur);
		Tot = Tot + DDino;
		D = std::to_string(DDino);
		std::cout << "Dinosaur " << Type << " " << D << std::endl;

		double DDog = E.GetDistance(ROI, Dog);
		Tot = Tot + DDog;
		D = std::to_string(DDog);
		std::cout << "Dog " << Type << " " << D << std::endl;

		double DDragon = E.GetDistance(ROI, Dragon);
		Tot = Tot + DDragon;
		D = std::to_string(DDragon);
		std::cout << "Dragon " << Type << " " << D << std::endl;

		double DDuck = E.GetDistance(ROI, Duck);
		Tot = Tot + DDuck;
		D = std::to_string(DDuck);
		std::cout << "Duck " << Type << " " << D << std::endl;

		double DKey = E.GetDistance(ROI, Keyboard);
		Tot = Tot + DKey;
		D = std::to_string(DKey);
		std::cout << "Keyboard " << Type << " " << D << std::endl;

		double DKoala = E.GetDistance(ROI, Koala);
		Tot = Tot + DKoala;
		D = std::to_string(DKoala);
		std::cout << "Koala " << Type << " " << D << std::endl;

		double DMug = E.GetDistance(ROI, Mug);
		Tot = Tot + DMug;
		D = std::to_string(DMug);
		std::cout << "Mug " << Type << " " << D << std::endl;

		double DUL = E.GetDistance(ROI, unlabelled);
		Tot = Tot + DUL;
		D = std::to_string(DUL);
		std::cout << "Nothing " << Type << " " << D << std::endl;
		//
		//Now calculate the percentages
		val[0] = (1 - (DAndroid / Tot))-.8;
		val[1] = (1 - (DBaby / Tot))-.8;
		val[2] = (1 - (DBlackberry / Tot))-.8;
		val[3] = (1 - (DCamera / Tot))-.8;
		val[4] = (1 - (Dcar / Tot))-.8;
		val[5] = (1 - (DCof / Tot))-.8;
		val[6] = (1 - (DDiet / Tot))-.8;
		val[7] = (1 - (DDino / Tot))-.8;
		val[8] = (1 - (DDog / Tot))-.8;
		val[9] = (1 - (DDragon / Tot))-.8;
		val[10] = (1 - (DDuck / Tot))-.8;
		val[11] = (1 - (DKey / Tot))-.8;
		val[12] = (1 - (DKoala / Tot))-.8;
		val[13] = (1 - (DMug / Tot))-.8;
		val[14] = (1 - (DUL / Tot))-.8;

		//Plot the graph
		chart1->Series["Depth"]->Points->Clear();
		
		chart1->Series["Depth"]->Points->AddXY(obj[0], val[0]);
		chart1->Series["Depth"]->Points->AddXY(obj[1], val[1]);
		chart1->Series["Depth"]->Points->AddXY(obj[2], val[2]);
		chart1->Series["Depth"]->Points->AddXY(obj[3], val[3]);
		chart1->Series["Depth"]->Points->AddXY(obj[4], val[4]);
		chart1->Series["Depth"]->Points->AddXY(obj[5], val[5]);
		chart1->Series["Depth"]->Points->AddXY(obj[6], val[6]);
		chart1->Series["Depth"]->Points->AddXY(obj[7], val[7]);
		chart1->Series["Depth"]->Points->AddXY(obj[8], val[8]);
		chart1->Series["Depth"]->Points->AddXY(obj[9], val[9]);
		chart1->Series["Depth"]->Points->AddXY(obj[10], val[10]);
		chart1->Series["Depth"]->Points->AddXY(obj[11], val[11]);
		chart1->Series["Depth"]->Points->AddXY(obj[12], val[12]);
		chart1->Series["Depth"]->Points->AddXY(obj[13], val[13]);
		chart1->Series["Depth"]->Points->AddXY(obj[14], val[14]);
		// Check for keyboard input

		
		
		System::String ^ High = "";
		IL->Text = High;
		double highest = val[0];
		for (int i = 0; i < 15; i++) {
			if (val[i] > highest) {
				highest = val[i];
				High = obj[i];
			}
		}
		IL->Text = High;
		key = cv::waitKey(10);
	}

}


