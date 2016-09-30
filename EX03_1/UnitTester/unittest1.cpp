#include "stdafx.h"
#include "CppUnitTest.h"
#include <readint.h>
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTester
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1) // Test suite for read_int()
		{
			auto func = []() {
				read_int("My prompt: ", 5, 1);
			};
			Assert::ExpectException<std::invalid_argument>(func);
		}
		TEST_METHOD(TestMethod2)
		{
			auto func = []()
			{
				read_int("Hello\n: ", -3, 3);

			};
			Assert(func);
		}
		TEST_METHOD(TestMethod3) {
			auto func = []()
			{
				read_int("My prompt: ", 0, 4);

			};
			Assert(func);
		}
		TEST_METHOD(TestMethod4) {
			auto func = []()
			{
				read_int("My prompt: ", 0, 0);
			};
			Assert::ExpectException<std::invalid_argument>(func);
		}
	};
}