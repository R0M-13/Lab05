#include "pch.h"
#include "CppUnitTest.h"

#include "../ConsoleApp5.1/ConsoleApp5.1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFunction_g)
		{
			double a = 0.0;
			double b = 5.0;
			double expected_result = 0.0;

			double actual_result = g(a, b);

			Assert::AreEqual(expected_result, actual_result, 0.001);
		}
	};
}