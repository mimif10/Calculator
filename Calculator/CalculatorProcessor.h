#pragma once
#include "Calculator.h"
#include <cstring>
#include <vector>
#include "IBaseCommand.h"

class CalculatorProcessor
{
private:
	CalculatorProcessor()//empty constructor because we don't want anyone to use this
	{
	}
	static CalculatorProcessor* _processor;
	double baseNumber = 0;

public:
	static CalculatorProcessor* GetInstance();

	// copy constructor
	CalculatorProcessor(CalculatorProcessor& other) = delete; // so that you won't able to call it / no instance

	// assignment operator
	 void operator=(const CalculatorProcessor& other) = delete;

	 void Addition();

	 void Substraction();

	CalculatorProcessor(CalculatorProcessor& other) = delete; //copy constructor deletes because we don't want anyone to use this
	void operator =(const CalculatorProcessor& other) = delete;//assignment constructor deletes because we don't want anyone to use this

	 void Divide();

	 std::string EqualsOperand(Calculator* calc);

	 int CurrOperation(Calculator* calc);

	 void GetCalcOperand(Calculator* calc);
	 
	 void ModOperation();

	
};

