#pragma once
#include "Calculator.h"
//#include "CalculatorProcessor.h"
#include "wx/wx.h"


class Calculator;
class ButtonFactory 
{
public:
	Calculator* calculator;

public:
	ButtonFactory(Calculator* _main);
	~ButtonFactory();

	wxTextCtrl* CreatetextBox();
	wxButton* CreateButton0();
	wxButton* CreateButton1();
	wxButton* CreateButton2();
	wxButton* CreateButton3();
	wxButton* CreateAddButton();
	wxButton* CreateDecButton();
	wxButton* CreateButton4();
	wxButton* CreateButton5();
	wxButton* CreateButton6();
	wxButton* CreateSubstractButton();
	wxButton* CreateHexButton();
	wxButton* CreateButton7();
	wxButton* CreateButton8();
	wxButton* CreateButton9();
	wxButton* CreateMutliplyBtn();
	wxButton* CreateBinButton();
	wxButton* CreateNegButton();
	wxButton* CreateModButton();
	wxButton* CreateEqualButton();
	wxButton* CreateDivideBtn();
	wxButton* CreateClearBtn();


};

