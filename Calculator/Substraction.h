#pragma once
#include "IBaseCommand.h"

class Substraction :public IBaseCommand
{
public:
	double numLeft;
	double numRight;

	static double SubCommand(double _left, double _right)
	{
		double answer = 0;
		return answer = _left - _right;
	}

	double Execute(double _left, double _right)
	{
		return SubCommand(_left, _right); // calls SubCommand function
	}
};

