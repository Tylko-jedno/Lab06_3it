#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_3it/Lab06_3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[22];

			Create(a, 22, -10, 35);

			int expected[22] = { 31,  11,  22, -6,  23,  28,  14,   0, -4,  28, -9,  29, -5,  27,  15,  21, -5,  18,  33, -2, -3,  12 };

			for (int i = 0; i < 22; i++)
			{
				Assert::AreEqual(expected[i], a[i], L"Elements are not equal", LINE_INFO());
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int a[22] = { 10, -2,   3,   9,   7,   6,   2, -10 };
			int expected = 10;
			int res = f(a, 8);


			Assert::AreEqual(expected, res, 0.0000001);
		}
		TEST_METHOD(TestMethod3)
		{
			int a[22] = { 10, -2,   3,   9,   7,   6,   2, -10 };
			int expected = 10;
			int res = f2(a, 8);


			Assert::AreEqual(expected, res, 0.0000001);
		}
	};
}
