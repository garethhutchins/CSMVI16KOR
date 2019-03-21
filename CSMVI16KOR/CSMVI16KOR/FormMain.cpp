#include "FormMain.h"
#include "freenect-playback-wrapper.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSMVI16KOR::FormMain form;
	Application::Run(%form);
	return 0;
}


