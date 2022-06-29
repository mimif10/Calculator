#include "Calculator.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <string>

// implement Event Table (begin and end)
wxBEGIN_EVENT_TABLE(Calculator, wxFrame) // takes name of the class for the event and the base class)
// Declare the event button  macroe event button - takes in the first button's windows ID, 
EVT_BUTTON(wxID_ANY, OnButtonClicked) // and link each button eith the ID being clicked to the function we want to call 
wxEND_EVENT_TABLE()

enum IDS // changed to enums to make processor easier
{
	zero, one, two, three, four, five, six, seven, eight, nine, bin, hex, dec, divide, multiply, subtract, add, equal, mod, neg, clear
};

// Window Frame requires some information in order to initialize it (parameters: parent, ID, name, location point, size)

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 340))
{
	// instance of ButtonFactory;
	ButtonFactory factory = ButtonFactory(this);

	_processor = CalculatorProcessor::GetInstance();

	// create a textbox at the top of the window (parameters: parent (wxFrame), ID, title, starting point, starting size
	textBox = factory.CreatetextBox();

	// create a button from Calculator.h (parameters: parent (wxFrame), ID, title, starting point, starting size

	// 1st row buttons
	button0 = factory.CreateButton0();
	button1 = factory.CreateButton1();
	button2 = factory.CreateButton2();
	button3 = factory.CreateButton3();
	addBtn = factory.CreateAddButton();

	// 2nd row buttons
	decBtn = factory.CreateDecButton();
	button4 = factory.CreateButton4();
	button5 = factory.CreateButton5();
	button6 = factory.CreateButton6();
	substractBtn = factory.CreateSubstractButton();

	// 3rd row buttons
	hexBtn = factory.CreateHexButton();
	button7 = factory.CreateButton7();
	button8 = factory.CreateButton8();
	button9 = factory.CreateButton9();
	mutliplyBtn = factory.CreateMutliplyBtn();

	// 4th row buttons
	binBtn = factory.CreateBinButton();
	negBtn = factory.CreateNegButton();
	modBtn = factory.CreateModButton();
	equalBtn = factory.CreateEqualButton();
	divideBtn = factory.CreateDivideBtn();

	// clear button
	clearBtn = factory.CreateClearBtn();
}

Calculator::~Calculator()
{
}

void Calculator::OnButtonClicked(wxCommandEvent& evt)
//void cMain::onButtonClicked(wxCommandEvent& evt, wxButton* btnToHandle)
{
	int number = evt.GetId();
	std::string convertedNumber = "";
	std::string convertAnswer = ""; // to convert number to string at the end
	wxString txtValue;

	switch (number)
	{
	case zero://0 button
		textBox->AppendText("0");
		toCalculate.append("0");
		break;

	case one:
		textBox->AppendText("1");
		toCalculate.append("1");
		break;

	case two:
		textBox->AppendText("2");
		toCalculate.append("2");
		break;

	case three:
		textBox->AppendText("3");
		toCalculate.append("3");
		break;

	case four:
		textBox->AppendText("4");
		toCalculate.append("4");
		break;

	case five:
		textBox->AppendText("5");
		toCalculate.append("5");
		break;

	case six:
		textBox->AppendText("6");
		toCalculate.append("6");
		break;

	case seven:
		textBox->AppendText("7");
		toCalculate.append("7");
		break;

	case eight:
		textBox->AppendText("8");
		toCalculate.append("8");
		break;

	case nine:
		textBox->AppendText("9");
		toCalculate.append("9");
		break;

	case bin:										//binary
		txtValue = textBox->GetValue(); // Get Value from textbox
		txtValue.ToDouble(&temp); // convert to string
		textBox->AppendText(" = ");
		_processor->setBaseNumber(temp);
		convertedNumber = _processor->getBinary();
		textBox->AppendText(convertedNumber);
		break;

	case hex:										//hexadecimal
		txtValue = textBox->GetValue(); // Get Value from textbox
		txtValue.ToDouble(&temp); // convert to string
		textBox->AppendText(" = ");
		_processor->setBaseNumber(temp);
		convertedNumber = _processor->getHexadecimal();
		textBox->AppendText(convertedNumber);
		break;

	case dec:										//decimal
		txtValue = textBox->GetValue(); // Get Value from textbox
		txtValue.ToDouble(&temp); // convert to string
		textBox->AppendText(" = ");
		_processor->setBaseNumber(temp);
		convertedNumber = _processor->GetDecimal();
		textBox->AppendText(convertedNumber);
		break;

	case neg:										//negate
		txtValue = textBox->GetValue();
		txtValue.ToDouble(&temp);
		//temp = temp * -1;
		textBox->Clear();
		*textBox << temp;
		//textBox->AppendText("-");
		break;

	case divide:
		textBox->AppendText("/");
		toCalculate.append("/");
		break;

	case multiply:
		textBox->AppendText("*");
		toCalculate.append("*");
		break;

	case subtract:
		textBox->AppendText("-");
		toCalculate.append("-");
		break;

	case add:
		textBox->AppendText("+");
		toCalculate.append("+");
		break;

	case equal:

		//textBox->AppendText("=");
		textBox->Clear();
		toCalculate.append("="); // shows equation on screen

		answer = _processor->MathCalc(toCalculate); // calculation
		result == (int)answer;
		convertAnswer = std::to_string(answer);// convert answer (double) to a string
		toCalculate.append(convertAnswer); // add the calculated string to temp (string)
		textBox->AppendText(toCalculate); // shows answer on the same screen
		toCalculate = "";
		answer = answer;

		/*double prevAnswer;
		prevAnswer = answer;*/
		//answer = 0;
		//next = textBox->SetValue("0");
		//answer = processor->Execute(toCalculate); //decided to just run the excecute function since the other thing doesn't work and doesn't make a lot of sense

		//if (answer == 1.5)//if doMath doesn't find the right operand, it sends this decimal
		//{
		//	textBox->AppendText("Something didn't work. You probably didn't put in an operator");
		//	break;
		//}


	case mod:
		textBox->AppendText("%");
		toCalculate.append("%");
		break;

	case clear:
		textBox->Clear();
		toCalculate = "";
		break;

		break;
	default:

		break;
	}


}