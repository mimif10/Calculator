#pragma oncedd
class CalculatorProcessor
{
private:

	CalculatorProcessor() {};
	~CalculatorProcessor();

	static CalculatorProcessor* _processor;

public:
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr) // double check to see if it is a nullptr (at the beginning)
		{
			_processor = new CalculatorProcessor(); // then create a new Processor 
		}
		return _processor;
	}

	// copy constructor
	CalculatorProcessor(CalculatorProcessor& other) = delete; // so that you won't able to call it / no instance

	// assignment operator
	void operator=(const CalculatorProcessor& other) = delete;
};

