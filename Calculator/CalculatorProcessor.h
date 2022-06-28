#pragma once
#include "Calculator.h"
#include <cstring>
//#include "IBaseCommand.h"
#include <vector>
//#include "Mod.h"
//#include "Divide.h"
//#include "Multiply.h"
//#include "Add.h"
//#include "Subtract.h"

class CalculatorProcessor //: public IBaseCommand
{
private:
	CalculatorProcessor()//empty constructor because we don't want anyone to use this
	{
	}
	static CalculatorProcessor* calc;
	double baseNumber = 0;

public:
	//std::vector<IBaseCommand*> commands;
	//Mod modu;
	//Divide div;
	//Multiply mult;
	//Subtract sub;
	//Add ad;

	//double Execute(std::string inputNum)
	//{
	//	return doMath(inputNum);
	//}

	static CalculatorProcessor* GetInstance()
	{
		if (calc == nullptr)
		{
			calc = new CalculatorProcessor();
		}

		return calc;
	}
	void setBaseNumber(double inputNum)
	{
		baseNumber = inputNum;
	}


	CalculatorProcessor(CalculatorProcessor& otherProcessor) = delete; //copy constructor deletes because we don't want anyone to use this
	void operator =(const CalculatorProcessor& otherProcessor) = delete;//assignment constructor deletes because we don't want anyone to use this

	std::string getHexadecimal()
	{
		std::string results = "";
		int number = baseNumber;

		while (number > 0)
		{
			int mod = number % 16;
			if (mod < 10)
			{
				results = std::to_string(mod) + results;
			}
			else if (mod == 10)
			{
				results = "A" + results;
			}
			else if (mod == 11)
			{
				results = "B" + results;
			}
			else if (mod == 12)
			{
				results = "C" + results;
			}
			else if (mod == 13)
			{
				results = "D" + results;
			}
			else if (mod == 14)
			{
				results = "E" + results;
			}
			else if (mod == 15)
			{
				results = "F" + results;
			}
			number = number / 16;
		}
		results = "0x" + results;
		return results;
	}
	std::string getBianary()
	{
		std::string results = "";
		int number = baseNumber;//just a copy so we don't modify base number

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
			answer = num1 % num2;
		}
		return answer;
	}
};
