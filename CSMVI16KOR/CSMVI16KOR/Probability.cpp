#include "Probability.h"
#include "opencv2/opencv.hpp"
#include <stdio.h>      
#include <math.h>


Probability::Probability(cv::Mat Frame, cv::Mat mu, cv::Mat Cov) {
	//Calculate the Probability
	//Flatten the Frame
	cv::Mat image = Frame.reshape(1, 1);
	cv::Mat p1 = (-0.5 * (image - mu));
	cv::Mat ci = Cov.inv();
	cv::Mat p2;
	p2.convertTo(p2, CV_32F);
	p2 = p1*ci;
	cv::Mat p3 = (image - mu).t();
	cv::Mat p = p2 - p3;
	std::string ps = "";
}


