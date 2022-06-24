#pragma once
#include "Calculator.h"
#include "wx/wx.h"

class Calculator;

class ButtonFactory : wxFrame
{
public:

	Calculator* calculator;

	//Calculator* GetCalculator();

	wxTextCtrl* CreatetextBox(Calculator* calc);

	//// 1st row
	////Calculator* CreateButton1(Calculator* calc);

	wxButton* CreateButton0(Calculator* calc);// Will create a button

	wxButton* CreateButton1(Calculator* calc);
	wxButton* CreateButton2(Calculator* calc);
	wxButton* CreateButton3(Calculator* calc);
	wxButton* CreateAddButton(Calculator* calc);

	// 2nd row
	wxButton* CreateDecButton(Calculator* calc);
	wxButton* CreateButton4(Calculator* calc);
	wxButton* CreateButton5(Calculator* calc);
	wxButton* CreateButton6(Calculator* calc);
	wxButton* CreateSubstractButton(Calculator* calc);

	//3rd row
	wxButton* CreateHexButton(Calculator* calc);
	wxButton* CreateButton7(Calculator* calc);
	wxButton* CreateButton8(Calculator* calc);
	wxButton* CreateButton9(Calculator* calc);
	wxButton* CreateMutliplyBtn(Calculator* calc);

	// 4th row buttons
	wxButton* CreateBinButton(Calculator* calc);
	wxButton* CreateNegButton(Calculator* calc);
	wxButton* CreateModButton(Calculator* calc);
	wxButton* CreateEqualButton(Calculator* calc);
	wxButton* CreateDivideBtn(Calculator* calc);

	wxTextCtrl* CreateClearBtn(Calculator* calc);

	
	


};

