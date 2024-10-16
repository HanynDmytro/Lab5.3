#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = sin(x + 1) / pow(cos(x + exp(x)), 2);
			Assert::AreEqual(expected, z(2), 0.00001);
			
		}
		TEST_METHOD(TestMethod2) {
			double x = 0;
			double a = 1;
			double S = a;
			int k = 0;
			do
			{
				k++;
				double R = (2 * x) / k;
				a *= R;
				S += a;
			} while (k < 6);
			double expected2 = (1 / exp(pow(x, 2))) * S;
			Assert::AreEqual(expected2, z(x), 0.00001);
		}
	};
}
