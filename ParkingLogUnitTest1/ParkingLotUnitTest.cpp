#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ParkingLot/ParkingLot.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ParkingLotUnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethodGetSize)
		{
			ParkingLot pl = ParkingLot(1,1,1,1);
			Assert::AreEqual(4, pl.empty_slots);
		}

	};
}