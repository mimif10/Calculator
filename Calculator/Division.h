#pragma once
#include "IBaseCommand.h"

class Division : public IBaseCommand
{
public:
	double numLeft;
	double numRight;

	static double DivCommand(double _left, double _right)
	{
		double answer = 0;
		return answer = _left + _right;
	}

	double Execute(double _left, double _right)
	{
		return DivCommand(_left, _right); // calls DivCommand function
	}
};