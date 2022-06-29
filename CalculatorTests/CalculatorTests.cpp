#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../Calculator/ButtonFactory.cpp"
#include "../Calculator/CalculatorProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:
		// CalculatorProcessor Tests
		//1
		TEST_METHOD(Addition) // Test Add method
		{				// Call AddCommand
			int answer = Addition::AddCommand(2, 2);
			Assert::AreEqual(answer, 4); // Assert = proposing it as "true"
		}
		//2
		TEST_METHOD(Add) // Test Add method
		{				// Call AddCommand
			int answer = Addition::AddCommand(2, 2);
			Assert::AreNotEqual(answer, 5); // Assert = proposing it as "true"
		}
		//3
		TEST_METHOD(Subtract)
		{				// Call SubCommand
			int answer = Substraction::SubCommand(2, 2);
			Assert::AreEqual(answer, 0);
		}
		//4
		TEST_METHOD(Multiply)
		{
			int answer = Multiplication::MultCommand(2, 2);
			Assert::AreEqual(answer, 4);
		}
		//4
		TEST_METHOD(Divide)
		{
			int answer = Division::DivCommand(2, 2);
			Assert::AreEqual(answer, 1);
		}
		//5
		TEST_METHOD(Mod)
		{
			int answer = ModOperation::ModCommand(2, 2);
			Assert::AreEqual(answer, 0);
		}
		//6
		TEST_METHOD(Binary)
		{
			int basenumber = 32;
			CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
			_processor->setBaseNumber(basenumber);
			// Convert to string
			std::string result = _processor->getBinary();
			std::string expected = "00000000000000000000000000100000";
			Assert::AreEqual(result, expected);
		}
		//7
		TEST_METHOD(Binary2)
		{
			int basenumber = 2;
			CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
			_processor->setBaseNumber(basenumber);
			// Convert to string
			std::string result = _processor->getBinary();
			std::string expected = "00000000000000000000000000000010";
			Assert::AreEqual(result, expected);
		}
		//8
		TEST_METHOD(Hex)
		{
			int basenumber = 32;
			CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
			_processor->setBaseNumber(basenumber);
			// Convert to string
			std::string result = _processor->getHexadecimal();
			std::string expected = "0x20";
			Assert::AreEqual(result, expected);
		}
		//9
		TEST_METHOD(Hex2)
		{
			int basenumber = 99;
			CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
			_processor->setBaseNumber(basenumber);
			// Convert to string
			std::string result = _processor->getHexadecimal();
			std::string expected = "0x63";
			Assert::AreEqual(result, expected);
		}
		//10
		TEST_METHOD(Decimal)
		{
			int answer = 15;
			CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
			_processor->setBaseNumber(answer);
			std::string convertedNum = _processor->GetDecimal();
			std::string expected = "15";
			Assert::AreEqual(convertedNum, expected);
		}

		//Button Factory Tests
			//Button Factory Tests


		wxFrame* Calc = new wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(720, 250), wxSize(320, 340));
		ButtonFactory* factory;
		//1
		TEST_METHOD(Button0)
		{
			wxButton* button0 = factory->CreateButton0();
			Assert::AreEqual(button0->GetLabelText(), "0");
		}
		//2
		TEST_METHOD(Button2)
		{
			wxButton* button1 = factory->CreateButton1();
			Assert::AreEqual(button1->GetLabelText(), "1");
		}
		//3
		TEST_METHOD(Button3)
		{
			wxButton* button2 = factory->CreateButton3();
			Assert::AreEqual(button2->GetLabelText(), "2");
		}
		//4
		TEST_METHOD(Button4)
		{
			wxButton* button3 = factory->CreateButton4();
			Assert::AreEqual(button3->GetLabelText(), "3");
		}
		//5
		TEST_METHOD(ButtonEquals)
		{
			wxButton* multButton = factory->CreateEqualButton();
			Assert::AreEqual(multButton->GetLabelText(), "=");
		}
		//6
		TEST_METHOD(hexButton)
		{
			wxButton* hexButton = factory->CreateHexButton();
			Assert::AreEqual(hexButton->GetId(), 1);
		}
		//7
		TEST_METHOD(modButton)
		{
			wxButton* button6 = factory->CreateModButton();
			Assert::AreEqual(button6->GetId(), 2);
		}
		//8
		TEST_METHOD(DivButton)
		{
			wxButton* DivButton = factory->CreateDivideBtn();
			Assert::AreEqual(DivButton->GetId(), 3);
		}
		//9
		TEST_METHOD(negButton)
		{
			wxButton* negButton = factory->CreateNegButton();
			Assert::AreEqual(negButton->GetId(), 4);
		}
		//10
		TEST_METHOD(binButton)
		{
			wxButton* binButton = factory->CreateBinButton();
			Assert::AreEqual(binButton->GetId(), 38);
		}

	};

}
