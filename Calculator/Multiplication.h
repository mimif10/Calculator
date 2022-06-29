#pragma once
#include "IBaseCommand.h"

class Multiplication : public IBaseCommand
{
public:
	double numLeft;
	double numRight;

	static double MultCommand(double _left, double _right)
	{
		double answer = 0;
		return answer = _left * _right;
	}

	double Execute(double _left, double _right)
	{
		return MultCommand(_left, _right); // calls MultCommand function
	}
};
