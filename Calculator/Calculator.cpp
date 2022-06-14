#include "Calculator.h"

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 340))
{
	// create a textbox at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	textBox = new wxTextCtrl(this, 100, "", wxPoint(30, 26), wxSize(250, 35));
}

Calculator::~Calculator()
{
}
