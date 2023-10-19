#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 5.1/laba 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(2, 3);
			Assert::AreEqual(c, 0.276923, 0.000001);

		}
	};
}
