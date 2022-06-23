#include "App.h"

wxIMPLEMENT_APP(App); // tells wxWidget to generate a main for the class

App::App()
{
}

App::~App()
{
}

bool App::OnInit() // tells the App/Launcher to display the window from the wxApp
{
	// create an instance of the window
	windowFrame = new Calculator();
	windowFrame->Show();
	return true;
}
