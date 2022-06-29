#include "ButtonFactory.h"

ButtonFactory::ButtonFactory(Calculator* _main)
{
	calculator = _main;
}
ButtonFactory::~ButtonFactory()
{

}

wxTextCtrl* ButtonFactory::CreatetextBox()
{
	wxTextCtrl* textbox = new wxTextCtrl(calculator, 100, "", wxPoint(30, 26), wxSize(250, 35));
	return textbox;
}

wxButton* ButtonFactory::CreateButton0()
{
	wxButton* button0 = new wxButton(calculator, 0, "0", wxPoint(30, 200), wxSize(50, 50));
	return button0;
}


wxButton* ButtonFactory::CreateButton1()
{
	wxButton* button1 = new wxButton(calculator, 1, "1", wxPoint(80, 200), wxSize(50, 50));
	return button1;
}

wxButton* ButtonFactory::CreateButton2()
{
	wxButton* button2 = new wxButton(calculator, 2, "2", wxPoint(130, 200), wxSize(50, 50));
	return button2;
}

wxButton* ButtonFactory::CreateButton3()
{
	wxButton* button3 = new wxButton(calculator, 3, "3", wxPoint(180, 200), wxSize(50, 50));
	return button3;
}

wxButton* ButtonFactory::CreateButton4()
{
	wxButton* button4 = new wxButton(calculator, 4, "4", wxPoint(80, 150), wxSize(50, 50));
	return button4;

}

wxButton* ButtonFactory::CreateButton5()
{
	wxButton* button5 = new wxButton(calculator, 5, "5", wxPoint(130, 150), wxSize(50, 50));
	return button5;
}

wxButton* ButtonFactory::CreateButton6()
{
	wxButton* button6 = new wxButton(calculator, 6, "6", wxPoint(180, 150), wxSize(50, 50));
	return button6;
}

wxButton* ButtonFactory::CreateButton7()
{
	wxButton* button7 = new wxButton(calculator, 7, "7", wxPoint(80, 100), wxSize(50, 50));
	return button7;
}

wxButton* ButtonFactory::CreateButton8()
{
	wxButton* button8 = new wxButton(calculator, 8, "8", wxPoint(130, 100), wxSize(50, 50));
	return button8;
}

wxButton* ButtonFactory::CreateButton9()
{
	wxButton* button9 = new wxButton(calculator, 9, "9", wxPoint(180, 100), wxSize(50, 50));
	return button9;
}

wxButton* ButtonFactory::CreateBinButton()
{
	wxButton* binBtn = new wxButton(calculator, 10, "bin", wxPoint(30, 50), wxSize(50, 50));
	return binBtn;
}

wxButton* ButtonFactory::CreateHexButton()
{
	wxButton* hexBtn = new wxButton(calculator, 11, "hex", wxPoint(30, 100), wxSize(50, 50));
	return hexBtn;
}

wxButton* ButtonFactory::CreateDecButton()
{
	wxButton* decBtn = new wxButton(calculator, 12, "dec", wxPoint(30, 150), wxSize(50, 50));
	return decBtn;
}


wxButton* ButtonFactory::CreateDivideBtn()
{
	wxButton* divideBtn = new wxButton(calculator, 13, "/", wxPoint(230, 50), wxSize(50, 50));
	return divideBtn;

}

wxButton* ButtonFactory::CreateMutliplyBtn()
{
	wxButton* mutliplyBtn = new wxButton(calculator, 14, "*", wxPoint(230, 100), wxSize(50, 50));
	return mutliplyBtn;
}


wxButton* ButtonFactory::CreateSubstractButton()
{
	wxButton* substractBtn = new wxButton(calculator, 15, "-", wxPoint(230, 150), wxSize(50, 50));
	return substractBtn;
}

wxButton* ButtonFactory::CreateAddButton()
{
	wxButton* addBtn = new wxButton(calculator, 16, "+", wxPoint(230, 200), wxSize(50, 50));
	return addBtn;
}

wxButton* ButtonFactory::CreateEqualButton()
{
	wxButton* equalBtn = new wxButton(calculator, 17, "=", wxPoint(180, 50), wxSize(50, 50));
	return equalBtn;
}

wxButton* ButtonFactory::CreateModButton()
{
	wxButton* modBtn = new wxButton(calculator, 18, "mod", wxPoint(130, 50), wxSize(50, 50));
	return modBtn;
}

wxButton* ButtonFactory::CreateNegButton()
{
	wxButton* negBtn = new wxButton(calculator, 19, "(-)", wxPoint(80, 50), wxSize(50, 50));
	return negBtn;
}

wxButton* ButtonFactory::CreateClearBtn()
{
	wxButton* clearBtn = new wxButton(calculator, 20, "clear", wxPoint(30, 250), wxSize(250, 30));
	return clearBtn;
}
