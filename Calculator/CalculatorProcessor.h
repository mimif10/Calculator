#pragma once
#include <vector>
#include "IBaseCommand.h"

class CalculatorProcessor
{
private:
	CalculatorProcessor() {};
	~CalculatorProcessor();

	static CalculatorProcessor* _processor;

	double leftOperand = 0;
	double rightOperand = 0;
	std::string calcEquation = "";
	std::string setEquation = "";
	std::string setOperand = "";
public:
	static CalculatorProcessor* GetInstance();

	// copy constructor
	CalculatorProcessor(CalculatorProcessor& other) = delete; // so that you won't able to call it / no instance

	// assignment operator
	 void operator=(const CalculatorProcessor& other) = delete;

	 void Addition();

	 void Substraction();

	 void Multiply();

	 void Divide();

	 std::string EqualsOperand(Calculator* calc);

		for (int i = 0; i < 32; i++)//having a 32 bit number for our bianary
		{
			if (number % 2 == 0)//if even
			{
				results = "0" + results;
			}
			else//if odd
			{
				results = "1" + results;
			}
			number = number / 2;
		}

		return results;
	}
	std::string getDecimal()
	{
		return std::to_string(baseNumber);
	}

	double doMath(std::string toDo)//for now only does 2 operands
	{
		double answer = 0;
		int num1 = 0;
		int num2 = 0;
		std::string num1S = "";
		std::string num2S = "";
		std::string operand = "";
		//creating the char array to figure out calculations
		std::vector<char> calculate;

		//getting the operand
		for (int i = 0; i < toDo.length(); i++)
		{
			calculate.push_back(toDo[i]);
		}
		toDo.pop_back();
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
		}
		if (operand == "")//have to do this first to check for no operand
		{
			return answer = 1.5;//need something to say the operation failed
		}
		//splitting out the 2 numbers
		num1S = toDo.substr(0, toDo.find(operand));
		num2S = toDo.substr(toDo.find(operand) + 1, toDo.length());
		num1 = std::stoi(num1S);
		num2 = std::stoi(num2S);

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
			answer = fmod(num1, num2);
		}
		return answer;

	}
};
CalculatorProcessor* CalculatorProcessor::_processor = nullptr;//have to define this else it has an unresolved external symbol error