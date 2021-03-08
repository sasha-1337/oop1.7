#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.7/Goods.cpp"
#include "D:\Student\oop1.7\oop1.7\Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest17
{
	TEST_CLASS(UnitTest17)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Goods a;
			bool t;
			t = a.Init(111, 222, 333);
			Assert::AreEqual(t, true);
		}
	};
}
