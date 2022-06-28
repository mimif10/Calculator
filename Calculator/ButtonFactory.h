#pragma once
#include "Calculator.h"
//#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include "IBaseCommand.h"


class Calculator;
class ButtonFactory
{
private:
	Calculator* calculator;

public:
	ButtonFactory(Calculator* _cMain); // pass in calculator
	~ButtonFactory();

	wxTextCtrl* CreatetextBox();

	// 1st row
	wxButton* CreateButton0();// Will create a button
	wxButton* CreateButton1();

	wxButton* CreateButton2();

	wxButton* CreateButton3();

	wxButton* CreateAddButton();

	// 2nd row
	wxButton* CreateDecButton();

	wxButton* CreateButton4();

	wxButton* CreateButton5();

	wxButton* CreateButton6();

	wxButton* CreateSubstractButton();

	//3rd row
	wxButton* CreateHexButton();

	wxButton* CreateButton7();

	wxButton* CreateButton8();

	wxButton* CreateButton9();

	wxButton* CreateMutliplyBtn();

	// 4th row buttons
	wxButton* CreateBinButton();

	wxButton* CreateNegButton();

	wxButton* CreateModButton();

	wxButton* CreateEqualButton();

	wxButton* CreateDivideBtn();
	wxButton* CreateClearBtn();




	//	// wxWidgets provides tools to handle events for us: 
	//// include the macro declare event table below
	//wxDECLARE_EVENT_TABLE(); // implement at the top of .cpp file 
	///*const wxEventTable* GetEventTable() const;

	//wxEventHashTable& GetEventHashTable() const;*/


};

