#pragma once
#include <vector>

class IBaseCommand
{
public:
	virtual void Execute() = 0;
};

class AddCommand : public IBaseCommand
{
private:
	double* num1;
	double* num2;

public:
	AddCommand(double* _left, double* _right)
	{
		num1 = _left;
		num2 = _right;
	}

	void Execute()
	{
		*num2 = *num1 + *num2;
	}
};

class SubtractCommand :public IBaseCommand
{
private:
	double* num1;
	double* num2;

public:
	SubtractCommand(double* _left, double* _right)
	{
		num1 = _left;
		num2 = _right;
	}

	void Execute()
	{
		*num2 = (int)*num1 - (int)*num2;
	}
};

class MultiplyCommand : public IBaseCommand
{
private:
	double* num1;
	double* num2;

public:
	MultiplyCommand(double* _left, double* _right)
	{
		num1 = _left;
		num2 = _right;
	}

	void Execute()
	{
		*num2 = *num1 * *num2;

	}
};

class DivideCommand : public IBaseCommand
{
private:
	double* num1;
	double* num2;

public:
	DivideCommand(double* _left, double* _right)
	{
		num1 = _left;
		num2 = _right;
	}

	void Execute()
	{
		*num2 = *num1 / *num2;

	}
};



