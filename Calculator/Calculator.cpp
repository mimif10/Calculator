#include "Calculator.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

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

	//clearBtn = factory.CreateClearBtn(this);

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
	std::string temp = ""; // to convert number to string at the end

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
	}
	case 1200: // Add button
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
		_processor->setBaseNumber(answer);
		convertedNumber = _processor->getBianary();
		textBox->AppendText(convertedNumber);
		break;

	case hex:										//hexadecimal
		_processor->setBaseNumber(answer);
		convertedNumber = _processor->getHexadecimal();
		textBox->AppendText(convertedNumber);
		break;

	case dec:										//decimal
		_processor->setBaseNumber(answer);
		convertedNumber = _processor->getDecimal();
		textBox->AppendText(convertedNumber);
		break;

	case 30:										//negative
		textBox->AppendText("-");
		toCalculate.append("--");//double minus to show that an item is negative in calc
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
		
		answer = _processor->doMath(toCalculate); // calculation
		result == (int)answer;
		temp = std::to_string(answer);// convert answer (double) to a string
		toCalculate.append(temp); // add the calculated string to temp (string)
		textBox->AppendText(toCalculate); // shows answer on the same screen
		toCalculate = "";
		answer = answer;
		/*double prevAnswer;
		prevAnswer = answer;*/
		answer = 0;

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



