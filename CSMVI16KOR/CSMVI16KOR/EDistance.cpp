#include "EDistance.h"

EDistance::EDistance()
{

}

double EDistance::GetDistance(cv::Mat CurrentImage, cv::Mat mu)
{
	//Flattern the Input Image
	cv::Mat image;
	
	CurrentImage.copyTo(image);
	image = image.reshape(1, 1);
	image.convertTo(image, CV_32F);
	double dist = cv::norm(image, mu);
	return dist;
}
