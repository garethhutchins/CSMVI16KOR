//LabelFolder.cpp
#include "LabelFolder.h"
#include <string>
#include "windows.h"
#include "Winbase.h"

LabelFolder::LabelFolder(std::string path, std::string label, int sFrame,int eFrame){
	std::string t = path + "/" + label;
	std::wstring stemp = std::wstring(t.begin(), t.end());
	LPCWSTR sw = stemp.c_str();
	CreateDirectory(sw, NULL);
	int start = sFrame;
	int end = eFrame + 1;
	while (start < end) {
		//Set the new file name
		std::string newFile = t + "/" + std::to_string(start) + ".png";
		//Get the old file name
		std::string oldFile = path + "/" + std::to_string(start) + ".png";
		//Convert the String formats
		std::wstring of = std::wstring(oldFile.begin(), oldFile.end());
		LPCTSTR lpold = of.c_str();
		std::wstring nf = std::wstring(newFile.begin(), newFile.end());
		LPCTSTR lpnew = nf.c_str();
		//Move the files
		MoveFile(lpold, lpnew);
		//Add to the counter and move on
		start++;
	}

	}
