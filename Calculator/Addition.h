#pragma once
#include "IBaseCommand.h"

class Addition : public IBaseCommand
{
public:
	double numLeft;
	double numRight;

	static double AddCommand(double _left, double _right)
	{
		double answer = 0;
		return answer = _left + _right;
	}

	double Execute(double _left, double _right)
	{
		return AddCommand(_left, _right); // calls AddCommand function
	}
};
