#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.F/Date_Public.cpp"
#include "../5.1.F/Date_Public.h"
#include "../5.1.F/Triad.cpp"
#include "../5.1.F/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date_Public a(5, 5), b(5, 5);
			Assert::AreEqual(a == b, true);

		}
	};
}
