#pragma once
#include <vector>

class IBaseCommand
{
public: // Will create classes instead because I am confusing myself
	virtual double Execute(double num1, double num2) = 0; // Calls each Operation (Addition, Substraction, Multiplication, Division)
};





