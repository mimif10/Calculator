#include "App.h"


wxIMPLEMENT_APP(App); // tells wxWidget to generate a main for the class

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
	return true;
}
