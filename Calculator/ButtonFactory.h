#pragma once
#include "Calculator.h"
#include "wx/wx.h"
#include "IBaseCommand.h"


class ButtonFactory 
{
private:
	Calculator* calculator;

public:
	ButtonFactory(Calculator* calculator);
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



	//	// wxWidgets provides tools to handle events for us: 
	//// include the macro declare event table below
	//wxDECLARE_EVENT_TABLE(); // implement at the top of .cpp file 
	///*const wxEventTable* GetEventTable() const;

	//wxEventHashTable& GetEventHashTable() const;*/


};

