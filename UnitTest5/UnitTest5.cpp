#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int one = 2;
			double two = 0;
			double actualResult = S (1.0, 0.2, one, two);
			Assert::AreEqual(actualResult, 15.0);
		}
	};
}
