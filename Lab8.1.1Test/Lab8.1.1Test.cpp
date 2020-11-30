#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1/lab8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab811Test
{
	TEST_CLASS(Lab811Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str2[100]= "kdsfjggggas";

			bool t;
			t = find1(str2);
			Assert::AreEqual(t,true);
		}				
	};
}
