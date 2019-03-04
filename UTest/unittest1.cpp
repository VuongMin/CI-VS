#include "stdafx.h"
#include "CppUnitTest.h"
#include"../CodeFailed/Clas.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Trystring)
		{
		  
			string Str = "This is ";
			Clas x;
			Assert::AreEqual(Str, x.CompareString());
		}

	};
}