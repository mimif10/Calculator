#include "Calculator.h"
#include "ButtonFactory.h"

// implement Event Table (begin and end)
wxBEGIN_EVENT_TABLE(Calculator, wxFrame) // takes name of the class for the event and the base class)
// Declare the event button  macroe event button - takes in the first button's windows ID, 
EVT_BUTTON(200, Calculator::OnButtonClicked) // and link each button eith the ID being clicked to the function we want to call 

// 1st row
EVT_BUTTON(0, Calculator::OnButtonClicked)
EVT_BUTTON(1, Calculator::OnButtonClicked)
EVT_BUTTON(2, Calculator::OnButtonClicked)
EVT_BUTTON(3, Calculator::OnButtonClicked)
EVT_BUTTON(1200, Calculator::OnButtonClicked) // Add button

// 2nd row
EVT_BUTTON(300, Calculator::OnButtonClicked) // dec button
EVT_BUTTON(4, Calculator::OnButtonClicked)
EVT_BUTTON(5, Calculator::OnButtonClicked)
EVT_BUTTON(6, Calculator::OnButtonClicked)
EVT_BUTTON(1100, Calculator::OnButtonClicked) // substract button

//3rd row
EVT_BUTTON(400, Calculator::OnButtonClicked) // hex button
EVT_BUTTON(7, Calculator::OnButtonClicked)
EVT_BUTTON(8, Calculator::OnButtonClicked)
EVT_BUTTON(9, Calculator::OnButtonClicked)
EVT_BUTTON(1000, Calculator::OnButtonClicked) // multiply

// 4th row
EVT_BUTTON(500, Calculator::OnButtonClicked) // bin
EVT_BUTTON(600, Calculator::OnButtonClicked) // (-)
EVT_BUTTON(700, Calculator::OnButtonClicked) // mod
EVT_BUTTON(800, Calculator::OnButtonClicked) // equal
EVT_BUTTON(900, Calculator::OnButtonClicked) // divide

wxEND_EVENT_TABLE()

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 340))
{
//	// 1st row buttons
//	ButtonFactory factory;
//
//	// create a textbox at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
//	textBox = factory.CreatetextBox(this);

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size

	//clearBtn = factory.CreateClearBtn(this);

	//// 1st row buttons
	//button0 = factory.CreateButton0(this);
	//button1 = factory.CreateButton1(this);
	//button2 = factory.CreateButton2(this);
	//button3 = factory.CreateButton3(this);
	//addBtn = factory.CreateAddButton(this);

	//// 2nd row buttons
	//decBtn = factory.CreateDecButton(this);
	//button4 = factory.CreateButton4(this);
	//button5 = factory.CreateButton5(this);
	//button6 = factory.CreateButton6(this);
	//substractBtn = factory.CreateSubstractButton(this);

	//// 3rd row buttons
	//hexBtn = factory.CreateHexButton(this);
	//button7 = factory.CreateButton7(this);
	//button8 = factory.CreateButton8(this);
	//button9 = factory.CreateButton9(this);
	//mutliplyBtn = factory.CreateMutliplyBtn(this);

	//// 4th row buttons
	//binBtn = factory.CreateBinButton(this);
	//negBtn = factory.CreateNegButton(this);
	//modBtn = factory.CreateModButton(this);
	//equalBtn = factory.CreateEqualButton(this);
	//divideBtn = factory.CreateDivideBtn(this);

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	textBox = new wxTextCtrl(this, 100, "", wxPoint(30, 26), wxSize(250, 35));
// 4th row buttons

binBtn = new wxButton(this, 500, "bin", wxPoint(30, 50), wxSize(50, 50));
negBtn = new wxButton(this, 600, "(-)", wxPoint(80, 50), wxSize(50, 50));
modBtn = new wxButton(this, 700, "mod", wxPoint(130, 50), wxSize(50, 50));
equalBtn = new wxButton(this, 800, "=", wxPoint(180, 50), wxSize(50, 50));
divideBtn = new wxButton(this, 900, "/", wxPoint(230, 50), wxSize(50, 50));

// 3rd row buttons
hexBtn = new wxButton(this, 400, "hex", wxPoint(30, 100), wxSize(50, 50));
button7 = new wxButton(this, 7, "7", wxPoint(80, 100), wxSize(50, 50));
button8 = new wxButton(this, 8, "8", wxPoint(130, 100), wxSize(50, 50));
button9 = new wxButton(this, 9, "9", wxPoint(180, 100), wxSize(50, 50));
mutliplyBtn = new wxButton(this, 1000, "*", wxPoint(230, 100), wxSize(50, 50));


// 2nd row buttons
decBtn = new wxButton(this, 300, "dec", wxPoint(30, 150), wxSize(50, 50));
button4 = new wxButton(this, 4, "4", wxPoint(80, 150), wxSize(50, 50));
button5 = new wxButton(this, 5, "5", wxPoint(130, 150), wxSize(50, 50));
button6 = new wxButton(this, 6, "6", wxPoint(180, 150), wxSize(50, 50));
substractBtn = new wxButton(this, 1100, "-", wxPoint(230, 150), wxSize(50, 50));

// 1st row buttons
button0 = new wxButton(this, 0, "0", wxPoint(30, 200), wxSize(50, 50));
button1 = new wxButton(this, 1, "1", wxPoint(80, 200), wxSize(50, 50));
button2 = new wxButton(this, 2, "2", wxPoint(130, 200), wxSize(50, 50));
button3 = new wxButton(this, 3, "3", wxPoint(180, 200), wxSize(50, 50));
addBtn = new wxButton(this, 1200, "+", wxPoint(230, 200), wxSize(50, 50));

// 5th row buttons
clearBtn = new wxButton(this, 200, "clear", wxPoint(30, 250), wxSize(250, 30));

}

Calculator::~Calculator()
{
	
	
}

// button Click event - function that handles the button 
void Calculator::OnButtonClicked(wxCommandEvent& event)
{
	int id = event.GetId();

	// Use a Switch Statement for each button
	switch (id)
	{
	case 200: // clear button
	{
		textBox->SetValue("0");
		break;
	}
	case 0:
	{
		/*if (textBox->GetValue() == "0")
		{*/
		textBox->SetValue(button0->GetLabel());
		/*}
		else
		{
			textBox->AppendText("0");
		}*/
		break;
	}
	case 1:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button1->GetLabel());
		}
		else
		{
			textBox->AppendText("1");
		}
		break;
	}
	case 2:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button2->GetLabel());
		}
		else
		{
			textBox->AppendText("2");
		}
		break;
	}
	case 3:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button3->GetLabel());
		}
		else
		{
			textBox->AppendText("3");
		}
		break;
	}
	case 1200: // plus button
	{
		textBox->AppendText(" + ");
		break;
	}
	case 300: // dec button
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(decBtn->GetLabel());
		}
		else
		{
			textBox->AppendText("dec ");
		}
		break;
	}
	case 4:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button4->GetLabel());
		}
		else
		{
			textBox->AppendText("4");
		}
		break;
	}
	case 5:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button5->GetLabel());
		}
		else
		{
			textBox->AppendText("5");
		}
		break;
	}
	case 6:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button6->GetLabel());
		}
		else
		{
			textBox->AppendText("6");
		}
		break;
	}
	case 1100: // substract button
	{
		/*if (textBox->GetValue() == "0")
		{
			textBox->SetValue(negBtn->GetLabel());
		}
		else
		{*/
		textBox->AppendText(" - ");
		break;
	}
	case 400: // hex button
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(hexBtn->GetLabel());
		}
		else
		{
			textBox->AppendText("hex ");
		}
		break;
	}
	case 7:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button7->GetLabel());
		}
		else
		{
			textBox->AppendText("7");
		}
		break;
	}
	case 8:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button8->GetLabel());
		}
		else
		{
			textBox->AppendText("8");
		}
		break;
	}
	case 9:
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(button9->GetLabel());
		}
		else
		{
			textBox->AppendText("9");
		}
		break;
	}
	case 1000: // multiply button
	{
		textBox->AppendText(" * ");
		break;
	}
	case 500: // bin button
	{
		if (textBox->GetValue() == "0")
		{
			textBox->SetValue(binBtn->GetLabel());
		}
		else
		{
			textBox->AppendText("bin ");
		}
		break;
	}
	case 600: // neg button
	{
		textBox->AppendText("-");
		break;
	}
	case 700: // mod button
	{
		textBox->AppendText(" mod ");
		break;
	}
	case 800: // equal button
	{
		textBox->AppendText(" = ");
		break;
	}
	case 900: // divide button
	{
		textBox->AppendText(" / ");
		break;
	}

	}
}


