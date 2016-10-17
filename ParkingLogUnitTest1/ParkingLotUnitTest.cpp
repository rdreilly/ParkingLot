#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ParkingLot/ParkingLot.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ParkingLotUnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethodGetTwo)
		{
			Assert::AreEqual(2, ParkingLot::getTwo());
		}

	};
}