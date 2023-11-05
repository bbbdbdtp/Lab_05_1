#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 3.1;
			double b = 5.4;
			double c = 2.7;
			double one = (a * a + b * b - c * c);
			double actual = g(a, b, c);

			Assert::AreEqual(one, actual);
		}
	};
}