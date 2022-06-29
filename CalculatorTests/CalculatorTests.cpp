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
			TEST_METHOD(Addition) // Test Add method
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
				int basenumber = 2;
				CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
				_processor->setBaseNumber(basenumber);
				// Convert to string
				std::string result = _processor->getBinary();
				std::string expected = "00000000000000000000000000000010";
				Assert::AreEqual(result, expected);
			}
			//7
			TEST_METHOD(Binary2)
			{
				int basenumber = 32;
				CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
				_processor->setBaseNumber(basenumber);
				// Convert to string
				std::string result = _processor->getBinary();
				std::string expected = "00000000000000000000000001001110";
				Assert::AreEqual(result, expected);
			}
			//8
			TEST_METHOD(Hex)
			{
				int basenumber = 41;
				CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
				_processor->setBaseNumber(basenumber);
				// Convert to string
				std::string result = _processor->getHexadecimal();
				std::string expected = "0x29";
				Assert::AreEqual(result, expected);
			}
			//9
			TEST_METHOD(Hex2)
			{
				int basenumber = 392;
				CalculatorProcessor* _processor = CalculatorProcessor::GetInstance();
				_processor->setBaseNumber(basenumber);
				// Convert to string
				std::string result = _processor->getHexadecimal();
				std::string expected = "0x188";
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
			
		
	};
	
}
