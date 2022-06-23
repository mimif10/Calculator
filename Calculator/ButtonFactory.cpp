#include "Calculator.h"
#include "ButtonFactory.h"


wxTextCtrl* ButtonFactory::CreatetextBox(Calculator* calc)
{
	wxTextCtrl* textbox = new wxTextCtrl(this, 100, "", wxPoint(30, 26), wxSize(250, 35));
	return textbox;
}


// 1st row buttons
wxButton* ButtonFactory::CreateButton0(Calculator* calc)
{
	//Calculator calc;
	wxButton* button0 = new wxButton(this, 0, "0", wxPoint(30, 150), wxSize(50, 50));
	return button0;
}

wxButton* ButtonFactory::CreateButton1(Calculator* calc)
{
	//Calculator* calculator = new Calculator();

	wxButton* button1 = new wxButton(this, 1, "1", wxPoint(80, 200), wxSize(50, 50));
	return button1;
}

wxButton* ButtonFactory::CreateButton2(Calculator* calc)
{
	wxButton* button2 = new wxButton(this, 2, "2", wxPoint(130, 200), wxSize(50, 50));
	return button2;
}

wxButton* ButtonFactory::CreateButton3(Calculator* calc)
{
	wxButton* button3 = new wxButton(this, 3, "3", wxPoint(180, 200), wxSize(50, 50));
	return button3;
}

wxButton* ButtonFactory::CreateAddButton(Calculator* calc)
{
	wxButton* addBtn = new wxButton(this, 1200, "+", wxPoint(230, 200), wxSize(50, 50));

	return addBtn;
}

// 2nd row buttons
wxButton* ButtonFactory::CreateDecButton(Calculator* calc)
{
	wxButton* decBtn = new wxButton(this, 300, "dec", wxPoint(30, 150), wxSize(50, 50));
	return decBtn;
}

wxButton* ButtonFactory::CreateButton4(Calculator* calc)
{
	wxButton* button4 = new wxButton(this, 4, "4", wxPoint(80, 150), wxSize(50, 50));
	return button4;
}

wxButton* ButtonFactory::CreateButton5(Calculator* calc)
{
	wxButton* button5 = new wxButton(this, 5, "5", wxPoint(130, 150), wxSize(50, 50));
	return button5;
}

wxButton* ButtonFactory::CreateButton6(Calculator* calc)
{
	wxButton* button6 = new wxButton(this, 6, "6", wxPoint(180, 150), wxSize(50, 50));
	return button6;
}

wxButton* ButtonFactory::CreateSubstractButton(Calculator* calc)
{
	wxButton* substractBtn = new wxButton(this, 1100, "-", wxPoint(230, 150), wxSize(50, 50));
	return substractBtn;
}

// 3rd row buttons
wxButton* ButtonFactory::CreateHexButton(Calculator* calc)
{
	wxButton* hexBtn = new wxButton(this, 400, "hex", wxPoint(30, 100), wxSize(50, 50));
	return hexBtn;
}

wxButton* ButtonFactory::CreateButton7(Calculator* calc)
{
	wxButton* button7 = new wxButton(this, 7, "7", wxPoint(80, 100), wxSize(50, 50));
	return button7;
}

wxButton* ButtonFactory::CreateButton8(Calculator* calc)
{
	wxButton* button8 = new wxButton(this, 8, "8", wxPoint(130, 100), wxSize(50, 50));
	return button8;
}

wxButton* ButtonFactory::CreateButton9(Calculator* calc)
{
	wxButton* button9 = new wxButton(this, 9, "9", wxPoint(180, 100), wxSize(50, 50));
	return button9;
}

wxButton* ButtonFactory::CreateMutliplyBtn(Calculator* calc)
{
	wxButton* mutliplyBtn = new wxButton(this, 1000, "*", wxPoint(230, 100), wxSize(50, 50));
	return mutliplyBtn;
}

// 4th row buttons
wxButton* ButtonFactory::CreateBinButton(Calculator* calc)
{
	wxButton* binBtn = new wxButton(this, 500, "bin", wxPoint(30, 50), wxSize(50, 50));
	return binBtn;
}

wxButton* ButtonFactory::CreateNegButton(Calculator* calc)
{
	wxButton* negBtn = new wxButton(this, 600, "(-)", wxPoint(80, 50), wxSize(50, 50));
	return negBtn;
}

wxButton* ButtonFactory::CreateModButton(Calculator* calc)
{
	wxButton* modBtn = new wxButton(this, 700, "mod", wxPoint(130, 50), wxSize(50, 50));
	return modBtn;
}

wxButton* ButtonFactory::CreateEqualButton(Calculator* calc)
{
	wxButton* equalBtn = new wxButton(this, 800, "=", wxPoint(180, 50), wxSize(50, 50));
	return equalBtn;
}

wxButton* ButtonFactory::CreateDivideBtn(Calculator* calc)
{
	wxButton* divideBtn = new wxButton(this, 900, "/", wxPoint(230, 50), wxSize(50, 50));
	return divideBtn;
}

wxTextCtrl* ButtonFactory::CreateClearBtn(Calculator* calc)
{
	wxTextCtrl* clearBtn = new wxTextCtrl(this, 200, "clear", wxPoint(30, 250), wxSize(250, 30));
	return clearBtn;
}


