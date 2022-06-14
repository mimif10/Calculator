#pragma once
#include "wx/wx.h"

class Calculator : public wxFrame //inherit wxFrame form (a wimdow in wxWidget) so the window/frame to show
{
public:
	Calculator();

	~Calculator();

private:
	// Window Components 
	// Add a Text Box a the top to the window 
	wxTextCtrl* textBox = nullptr;

	// Add buttons to the window 

	wxButton* clearBtn = nullptr;

	// 1st row buttons
	wxButton* button0 = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* addBtn = nullptr;

	// 2nd row buttons
	wxButton* decBtn = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* substractBtn = nullptr;

	// 3rd row buttons
	wxButton* hexBtn = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* mutliplyBtn = nullptr;

	// 4th row buttons
	wxButton* binBtn = nullptr;
	wxButton* negBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* equalBtn = nullptr;
	wxButton* divideBtn = nullptr;

};

