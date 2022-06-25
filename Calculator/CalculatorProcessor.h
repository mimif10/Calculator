#pragma once
#include <vector>
#include <string>
#include "ButtonFactory.h"

class Calculator;
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

	 int CurrOperation(Calculator* calc);

	 void GetCalcOperand(Calculator* calc);
	 
	 void ModOperation();

	
};

