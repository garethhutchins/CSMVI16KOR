#include "LabelFolder.h"
#include <string>
#include "windows.h"


LabelFolder::LabelFolder(std::string path, std::string label, int sFrame,int eFrame){
	std::string t = path + "/" + label;
	std::wstring stemp = std::wstring(t.begin(), t.end());
	LPCWSTR sw = stemp.c_str();
	CreateDirectory(sw, NULL);

	}