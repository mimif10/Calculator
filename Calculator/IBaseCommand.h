#pragma once
#include <vector>

class IBaseCommand
{
public:
	virtual double Execute(double num1, double num2) = 0; // Calls each Operation (Addition, Substraction, Multiplication, Division)
};





