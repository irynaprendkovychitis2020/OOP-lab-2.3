#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.3/Rational.h"
#include "../lab 2.3/Rational.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational x;
			x.SetA(2);
			int test = x.GetA();
			Assert::AreEqual(test, 2);
		}
	};
}
