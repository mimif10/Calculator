#include "Calculator.h"

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

wxEND_EVENT_TABLE()

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)
Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 340))
{
	// create a textbox at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	textBox = new wxTextCtrl(this, 100, "", wxPoint(30, 26), wxSize(250, 35));

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size
	
	clearBtn = new wxButton(this, 200, "clear", wxPoint(30, 250), wxSize(250, 30));

	// 1st row buttons
	button0 = new wxButton(this, 0, "0", wxPoint(30, 200), wxSize(50, 50));
	button1 = new wxButton(this, 1, "1", wxPoint(80, 200), wxSize(50, 50));
	button2 = new wxButton(this, 2, "2", wxPoint(130, 200), wxSize(50, 50));
	button3 = new wxButton(this, 3, "3", wxPoint(180, 200), wxSize(50, 50));
	addBtn = new wxButton(this, 1200, "+", wxPoint(230, 200), wxSize(50, 50));

	// 2nd row buttons
	decBtn = new wxButton(this, 300, "dec", wxPoint(30, 150), wxSize(50, 50));
	button4 = new wxButton(this, 4, "4", wxPoint(80, 150), wxSize(50, 50));
	button5 = new wxButton(this, 5, "5", wxPoint(130, 150), wxSize(50, 50));
	button6 = new wxButton(this, 6, "6", wxPoint(180, 150), wxSize(50, 50));
	substractBtn = new wxButton(this, 1100, "-", wxPoint(230, 150), wxSize(50, 50));

	// 3rd row buttons
	hexBtn = new wxButton(this, 400, "hex", wxPoint(30, 100), wxSize(50, 50));
	button7 = new wxButton(this, 7, "7", wxPoint(80, 100), wxSize(50, 50));
	button8 = new wxButton(this, 8, "8", wxPoint(130, 100), wxSize(50, 50));
	button9 = new wxButton(this, 9, "9", wxPoint(180, 100), wxSize(50, 50));
	mutliplyBtn = new wxButton(this, 1000, "*", wxPoint(230, 100), wxSize(50, 50));

	// 4th row buttons
	binBtn = new wxButton(this, 500, "bin", wxPoint(30, 50), wxSize(50, 50));
	negBtn = new wxButton(this, 600, "(-)", wxPoint(80, 50), wxSize(50, 50));
	modBtn = new wxButton(this, 700, "mod", wxPoint(130, 50), wxSize(50, 50));
	equalBtn = new wxButton(this, 800, "=", wxPoint(180, 50), wxSize(50, 50));
	divideBtn = new wxButton(this, 900, "/", wxPoint(230, 50), wxSize(50, 50));

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
			{
			//textBox->SetValue(button0->GetLabel());
			else
			{*/
				textBox->AppendText("0");
			//}
			break;
		}
		case 1:
		{
				textBox->AppendText("1");
			break;
		}
		case 2:
		{
				textBox->AppendText("2");
			break;
		}
		case 3:
		{
				textBox->AppendText("3");
			
			break;
		}
		case 1200: // Add button
		{
			textBox->AppendText(" + ");
			break;
		}
		case 300: // dec button
		{
				textBox->AppendText("dec ");
			
			break;
		}
		case 4:
		{
				textBox->AppendText("4");
			
			break;
		}
		case 5:
		{
				textBox->AppendText("5");
			
			break;
		}
		case 6:
		{
				textBox->AppendText("6");
			
			break;
		}
		case 1100: // substract button
		{

			textBox->AppendText(" - ");
			break;
		}
		case 400: // hex button
		{
			textBox->AppendText("hex ");
			break;
		}
		case 7:
		{
			textBox->AppendText("7");

			break;
		}
		case 8:
		{
			textBox->AppendText("8");

			break;
		}
		case 9:
		{
			textBox->AppendText("9");

			break;
		}
		case 1000: // multiply button
		{
			textBox->AppendText(" * ");
			break;
		}
	}
}
