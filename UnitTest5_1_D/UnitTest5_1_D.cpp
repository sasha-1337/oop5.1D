#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1D\oop5.1D\Money.cpp"
#include "D:\Student\oop5.1D\oop5.1D\MyException.cpp"
#include "D:\Student\oop5.1D\oop5.1D\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		TEST_METHOD(TestMethod2)
		{
			Money a;
			double s = a.Divide(20, 2);
			Assert::AreEqual(s, 10.0);
		}
	};
}
