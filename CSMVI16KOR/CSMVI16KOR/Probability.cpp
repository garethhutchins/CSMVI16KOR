#include "Probability.h"
#include "opencv2/opencv.hpp"
#include <stdio.h>      
#include <math.h>


Probability::Probability(cv::Mat Frame, cv::Mat mu, cv::Mat Cov) {
	//Calculate the Probability
	cv::MatExpr p = (-0.5 * (Frame - mu)*Cov.inv() - (Frame - mu).t());
}

