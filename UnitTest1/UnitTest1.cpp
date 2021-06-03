#include "pch.h"
#include "CppUnitTest.h"
#include "../kyrsovaya/EdKarp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(first)
		{
			EdKarp* t = new EdKarp();
			t->readList("in.txt");
			cout << t->MaxFlow();
		}
	};
}