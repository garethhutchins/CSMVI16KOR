#pragma once
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "opencv2/opencv.hpp"
class ClassTest
{
public:
	ClassTest();
	int * CheckFolder(std::string, cv::PCA, cv::ml::SVM);
};

