#pragma once
#include "Calculator.h"
#include <cstring>
#include <vector>
//#include "IBaseCommand.h"

class CalculatorProcessor //: public IBaseCommand
{
private:
	CalculatorProcessor()//empty constructor because we don't want anyone to use this
	{
	}
	static CalculatorProcessor* _processor;
	double baseNumber = 0;
	double num1 = 0;
	double num2 = 0;
	double answer = 0;
	std::string success;

public:

	wxTextCtrl* textBox;
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	// Set baseNumber
	void setBaseNumber(double inputNum)
	{
		baseNumber = inputNum;
	}

	double Execute(std::string inputNum)
	{
		return MathCalc(inputNum);
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete; //copy constructor deletes because we don't want anyone to use this
	void operator =(const CalculatorProcessor& other) = delete;//assignment constructor deletes because we don't want anyone to use this

	double MathCalc(std::string toCalculate)//for now only does 2 operands
	{
		std::string left = "";
		std::string right = "";
		std::string operand = "";

		//creating the char array to figure out calculations
		std::vector<char> calculate;

		//getting the operand
		for (int i = 0; i < toCalculate.length(); i++)
		{
			calculate.push_back(toCalculate[i]); // add it to the vector
		}
		toCalculate.pop_back(); // remove it and fi
		for (int i = 0; i < calculate.size(); i++)
		{
			if (calculate[i] == '+')
			{
				operand = "+";
			}
			else if (calculate[i] == '-')
			{
				operand = "-";
			}
			else if (calculate[i] == '*')
			{
				operand = "*";
			}
			else if (calculate[i] == '/')
			{
				operand = "/";
			}
			else if (calculate[i] == '%')
			{
				operand = "%";
			}
			else if (calculate[i] == '(-)')
			{
				operand = "(-)";
			}
		}
		if (operand == "")//have to do this first to check for no operand
		{
			return answer = 1.5;//need something to say the operation failed
		}
		//splitting out the 2 numbers
		left = toCalculate.substr(0, toCalculate.find(operand));
		right = toCalculate.substr(toCalculate.find(operand) + 1, toCalculate.length());
		num1 = std::stoi(left);
		num2 = std::stoi(right);

		if (operand == "+")
		{
			answer = num1 + num2;
		}
		else if (operand == "-")
		{
			answer = num1 - num2;
		}
		else if (operand == "*")
		{
			answer = num1 * num2;
		}
		else if (operand == "/")
		{
			answer = num1 / num2;
		}
		else if (operand == "%")
		{
			answer = std::fmod(num1, num2);
		}
		else if (operand == "(-)")
		{
			answer = answer * -1;
			answer = answer;
		}

		return answer;
	}

	std::string GetDecimal()
	{
		// displays a decimal which we use the base number
		return std::to_string(baseNumber);
	}


	std::string getBinary()
	{
		std::string results = "";

		// convert base number to binary
		int number = baseNumber;//just a copy so we don't modify base number

		for (int i = 0; i < 32; i++) // start with a basenumber of 32 bit
		{
			if (number % 2 == 0) // if number is divisiable by 2
			{
				results = "0" + results; // even / ends with 0
			}
			else//if odd
			{
				results = "1" + results; // odd
			}
			// update the number in order to process the next number
			number = number / 2; // Divide it by 2
		}
		// process the number 
		return results;
	}

	std::string getHexadecimal()
	{
		// convert base number to hexadecimal
		std::string calcAnswer = "";
		int num = baseNumber;

		while (num > 0)
		{
			int mod = num % 16; // some # btween 0 and 16
			if (mod < 10) // if the number is less than 10
			{
				calcAnswer = std::to_string(mod) + calcAnswer; // number + results
			}
			else if (mod == 10) // if num is 10 = A
			{
				calcAnswer = "A" + calcAnswer;
			}
			else if (mod == 11) // if number is 11 = B
			{
				calcAnswer = "B" + calcAnswer;
			}
			else if (mod == 12)  // if number is 12 = C
			{
				calcAnswer = "C" + calcAnswer;
			}
			else if (mod == 13)  // if number is 13 = D
			{
				calcAnswer = "D" + calcAnswer;
			}
			else if (mod == 14)  // if number is 14 = E
			{
				calcAnswer = "E" + calcAnswer;
			}
			else if (mod == 15)  // if number is 15 = F
			{
				calcAnswer = "F" + calcAnswer;
			}
			// update the number in order to process the next number
			num = num / 16; // Divide the number by 16
		}
		calcAnswer = "0x" + calcAnswer; // hexidecimal 
		return calcAnswer;
	}


};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;
