#include "Unlabelled.h"
#include <string>
#include "windows.h"
#include "Winbase.h"

Unlabelled::Unlabelled(std::string path, int endFrame)
{
//This will move all of the files that haven't been labelled
	std::string t = path + "/unlabelled";
	std::wstring stemp = std::wstring(t.begin(), t.end());
	LPCWSTR sw = stemp.c_str();
	CreateDirectory(sw, NULL);
	int start = 1;
	int end = endFrame +1;
	while (start < end) {
		//Set the new file name
		std::string newFile = t + "/" + std::to_string(start) + ".bmp";
		//Get the old file name
		std::string oldFile = path + "/" + std::to_string(start) + ".bmp";
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
