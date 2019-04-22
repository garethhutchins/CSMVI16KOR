//ClassTest.cpp
#include "ClassTest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <Unknwn.h>    
#include <windows.h>
#include <objidl.h>
#include <shellapi.h>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <sstream>
#include <dirent.h>
int ClassL[14];
void GetLabel(float Code) {
	//Get the label for the classification
	
	int c = static_cast<int>(Code);
	switch (c) {
	case 1: {
		ClassL[0] = ClassL[0]++;
		break;
	}
	case 2: {
		ClassL[1] = ClassL[1]++;
		break;
	}
	case 3: {
		ClassL[2] = ClassL[2]++;
		break;
	}
	case 4: {
		ClassL[3] = ClassL[3]++;
		break;
	}
	case 5: {
		ClassL[4] = ClassL[4]++;
		break;
	}
	case 6: {
		ClassL[5] = ClassL[5]++;
		break;
	}
	case 7: {
		ClassL[6] = ClassL[6]++;
		break;
	}
	case 8: {
		ClassL[7] = ClassL[7]++;
		break;
	}
	case 9: {
		ClassL[8] = ClassL[8]++;
		break;
	}
	case 10: {
		ClassL[9] = ClassL[9]++;
		break;
	}
	case 11: {
		ClassL[10] = ClassL[10]++;
		break;
	}
	case 12: {
		ClassL[11] = ClassL[11]++;
		break;
	}
	case 13: {
		ClassL[12] = ClassL[12]++;
		break;
	}
	case 14: {
		ClassL[13] = ClassL[13]++;
		break;
	}
	case 15: {
		ClassL[14] = ClassL[14]++;
		break;
	}
	}
}
ClassTest::ClassTest(std::string path, std::string Type, System::Windows::Forms::DataVisualization::Charting::Chart^  chart) {
	using namespace cv;
	//Update the X axis on the Chart
	array <System::String ^>^ obj = { "Android", "Baby", "Blackberry", "Camera","Car", "Coffee Tin","Diet Coke","Dinosaur","Dog","Dragon","Duck","Keyboard","Koala","Mug","Nothing" };

	
	
	double S;
	float Thresh;
	int CT;
	int Rx1, Rx2, Ry1, Ry2;
	std::string fileName = path + "/images" + "/ImageProc.dat";
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
	
	cv::PCA ImagePCA;

	std::cout << "Loading Image PCA" << std::endl;
	
	

	FileStorage fsI(path + "/imagespca.dat", FileStorage::READ);
	fsI["mean"] >> ImagePCA.mean;
	fsI["e_vectors"] >> ImagePCA.eigenvectors;
	fsI["e_values"] >> ImagePCA.eigenvalues;
	fsI.release();


	//Load the SVM
	
	std::cout << "Loading Image SVM" << std::endl;
	std::string svmFile = path + "/imagessvm.xml";
	Ptr<ml::SVM> svmI = Algorithm::load<ml::SVM>(svmFile);
	std::string dirName = path + "/images/" + Type;
	//Now loop through all images in the directory
	std::cout << "Reading images from " << dirName;

	// Add slash to directory name if missing
	if (!dirName.empty() && dirName.back() != '/')
		dirName += '/';

	DIR *dir;
	struct dirent *ent;
	int count = 0;

	//image extensions
	std::string imgExt = "png";
	std::vector<std::string> files;


	if ((dir = opendir(dirName.c_str())) != NULL)
	{
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL)
		{
			if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
			{
				continue;
			}
			std::string fname = ent->d_name;

			if (fname.find(imgExt, (fname.length() - imgExt.length())) != std::string::npos)
			{
				std::string path = dirName + fname;

				Mat img = imread(path, cv::IMREAD_GRAYSCALE);
				if (!img.data)
				{
					//cout << "image " << path << " not read properly" << endl;
				}
				else {
					//Apply Edge Detection
					Mat src, src_gray;
					Mat dst, detected_edges;

					int edgeThresh = 1;
					int const max_lowThreshold = 100;
					int ratio = 3;
					int kernel_size = 3;
					char* window_name = "Edge Map";
					//Threshold
					img = img * Thresh;

					//Resize
					double Ss = S / 100;
					cv::resize(img, img, cv::Size(), Ss, Ss, cv::INTER_LINEAR);

					cv::blur(img, detected_edges, cv::Size(3, 3));

					/// Canny detector
					cv::Canny(detected_edges, detected_edges, CT, CT*ratio, kernel_size);

					/// Using Canny's output as a mask, we display our result
					dst = cv::Scalar::all(0);

					img.copyTo(dst, detected_edges);
					cv::Mat ROI(dst, cv::Rect(Rx1, Ry1, Rx2, Ry2));


					//Now predict the CVM
					ROI.convertTo(ROI, CV_32F);
					Mat RSD = ROI.reshape(1, 1);
					RSD.convertTo(RSD, CV_32F);
					//Now reduce with with the PCA Projetions

					Mat IRed = ImagePCA.project(RSD);
					IRed.convertTo(IRed, CV_32F);
					Mat Ires;
					float Iresponse = svmI->predict(IRed, Ires, 0);
					std::cout << "SVM Image Output = " << Ires.at<float>(0) << std::endl;
					GetLabel(Ires.at<float>(0));

				}
			}
		}
		closedir(dir);
		//Update the Chart
		chart->Series[0]->Points->Clear();
		chart->Series[0]->Points->AddXY(obj[0], ClassL[0]);
		chart->Series[0]->Points->AddXY(obj[1], ClassL[1]);
		chart->Series[0]->Points->AddXY(obj[2], ClassL[2]);
		chart->Series[0]->Points->AddXY(obj[3], ClassL[3]);
		chart->Series[0]->Points->AddXY(obj[4], ClassL[4]);
		chart->Series[0]->Points->AddXY(obj[5], ClassL[5]);
		chart->Series[0]->Points->AddXY(obj[6], ClassL[6]);
		chart->Series[0]->Points->AddXY(obj[7], ClassL[7]);
		chart->Series[0]->Points->AddXY(obj[8], ClassL[8]);
		chart->Series[0]->Points->AddXY(obj[9], ClassL[9]);
		chart->Series[0]->Points->AddXY(obj[10], ClassL[10]);
		chart->Series[0]->Points->AddXY(obj[11], ClassL[11]);
		chart->Series[0]->Points->AddXY(obj[12], ClassL[12]);
		chart->Series[0]->Points->AddXY(obj[13], ClassL[13]);
		chart->Series[0]->Points->AddXY(obj[14], ClassL[14]);
		//Reset Array
		ClassL[0] = 0;
		ClassL[1] = 0;
		ClassL[2] = 0;
		ClassL[3] = 0;
		ClassL[4] = 0;
		ClassL[5] = 0;
		ClassL[6] = 0;
		ClassL[7] = 0;
		ClassL[8] = 0;
		ClassL[9] = 0;
		ClassL[10] = 0;
		ClassL[11] = 0;
		ClassL[12] = 0;
		ClassL[13] = 0;
		ClassL[14] = 0;
		chart->Refresh();
	}
}