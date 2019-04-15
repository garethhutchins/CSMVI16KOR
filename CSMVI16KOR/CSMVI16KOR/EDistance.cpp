#include "EDistance.h"

EDistance::EDistance()
{

}

double EDistance::GetDistance(cv::Mat CurrentImage, cv::Mat mu)
{
	//Flattern the Input Image
	cv::Mat image;
	image.convertTo(image, CV_32F);
	image = CurrentImage.reshape(1, 1);

	double dist = cv::norm(image, mu);
	return dist;
}
