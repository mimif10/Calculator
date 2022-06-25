#include "CalculatorProcessor.h"
#include "Calculator.h"

CalculatorProcessor::~CalculatorProcessor()
{
}

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_processor == nullptr) // double check to see if it is a nullptr (at the beginning)
	{
		_processor = new CalculatorProcessor(); // then create a new Processor 
	}
	return _processor;
}

void CalculatorProcessor::Addition()
{
	std::string result = "";
	double Addition = leftOperand + rightOperand;
	result = std::to_string(Addition);
}

void CalculatorProcessor::Substraction()
{
	std::string result = "";
	double Substraction = leftOperand - rightOperand;
	result = std::to_string(Substraction);
}

void CalculatorProcessor::Multiply()
{
	std::string result = "";
	double Multiply = leftOperand * rightOperand;
	result = std::to_string(Multiply);
}

void CalculatorProcessor::Divide()
{
	std::string result = "";
	if (rightOperand == 0 )
	{
		result = "Error";
	}
	else
	{
		double Divide = leftOperand * rightOperand;
		result = std::to_string(Divide);
	}
}

void CalculatorProcessor::GetCalcOperand(Calculator* calc)
{
	std::string calcEquation = "";
	int currentOp = CurrOperation(calc); // find current operation on textbox 
	int equalsOperand = calcEquation.find("="); // locate equal sign
	std::string result = "";

	if (result != "" && calcEquation == "") // line 37
	{
		result = result;
	}
	else if (currentOp == 0 || equalsOperand == 0 || calcEquation == "")
	{
		result = "";
	}
	else
	{
		calcEquation = setEquation[currentOp];
		if (currentOp + 1 == equalsOperand)
		{
			leftOperand = std::stoi(calcEquation.substr(0, currentOp));
			calcEquation = "";
			result = std::to_string(leftOperand);
		}
		else
		{
			leftOperand = std::stoi(setEquation.substr(0, currentOp));
			rightOperand = std::stoi(setEquation.substr(currentOp + 1, currentOp));
		}
	}
}

std::string CalculatorProcessor::EqualsOperand(Calculator* calc)
{
	std::string result = "";
	
	// find current operation on textbox 
	GetCalcOperand(calc);
	if (calcEquation == "+")
	{
		Addition();
	}
	else if (calcEquation == "-")
	{
		Substraction();
	}
	else if (calcEquation == "*")
	{
		Multiply();
	}
	else if (calcEquation == "/")
	{
		Divide();
	}
	else if (calcEquation == "%")
	{
		ModOperation();
	}
	// Clear the textbox
	calc->textBox->Clear();

	if (result == "Error")
	{
		calcEquation = "";
		return result;
	}
	if (result != "")
	{
		leftOperand = std::stoi(result);
		rightOperand = NULL;
	}
	calcEquation = "";
	return result;
}


void CalculatorProcessor::ModOperation()
{
	double answer = std::fmod(leftOperand, rightOperand);
	std::string result = std::to_string(answer); // convert to string
}


int CalculatorProcessor::CurrOperation(Calculator* calc)
{
	// get current equation on calculator
	calcEquation = calc->textBox->GetLineText(0).ToStdString();
	int operation = -1;
	for (int i = 1; i < calcEquation.size(); i++)
	{
		if (calcEquation[i] == '+' || calcEquation[i] == '-' || calcEquation[i] == '*' || calcEquation[i] == '/' || calcEquation[i] == '%')
		{
			setOperand = calcEquation[i]; // operation = equation (+,-,*,/,%)
			operation = i;
			break;
		}
	}
	return operation;
}

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;