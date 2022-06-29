#pragma once
#include "IBaseCommand.h"

class ModOperation : public IBaseCommand
{
public:
	double numLeft;
	double numRight;

	static double ModCommand(double _left, double _right)
	{
		double answer = fmod(_left, _right);
		return answer;
	}

	double Execute(double _left, double _right)
	{
		return ModCommand(_left, _right);
	}
};

