// ParkingLot.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ParkingLot.h"

int main()
{
	return 0;
}

int ParkingLot::getTwo()
{
	return 2;
}

int ParkingLot::getN() const
{
	return n;
}

vehicle_type_t Vehicle::getVehicleType()
{
	return vehicle_type;
}
Vehicle::Vehicle(vehicle_type_t Vehicle)
{
	vehicle_type = Vehicle;
}
ParkingSlot::ParkingSlot(int id, vehicle_type_t supported_vehicle )
{	
	id = id;
	supported_vehicle = supported_vehicle;
}
bool ParkingSlot::isReserved()
{
	return reserved;
}
int ParkingSlot::reserve(Vehicle vehicle)
{
	if (vehicle.getVehicleType() != supported_vehicle)
		throw SLOT_ERR;
	reserved = true;
	vehicle = vehicle;
	return id;
}
Vehicle ParkingSlot::unreserve()
{
	reserved = false;
	return vehicle;
}

vehicle_type_t ParkingSlot::get_supported_vehicle_type()
{
	return supported_vehicle;
}

ParkingLot::ParkingLot(int reg, int hand, int elec, int compact)
{
	int slotId = 0;
	for (int i = 0; i < reg; i++)
		addParkingSlot(++slotId, REG);
	for (int i = 0; i < hand; i++)
		addParkingSlot(++slotId, HANDICAPPED);
	for (int i = 0; i < elec; i++)
		addParkingSlot(++slotId, ELEC);
	for (int i = 0; i < compact; i++)
		addParkingSlot(++slotId, COMPACT);
	empty_slots = parkingSlots.size();
}

void ParkingLot::addParkingSlot(int id, vehicle_type_t vehicle_type)
{
	ParkingSlot newSlot = ParkingSlot(id, vehicle_type);
//	parkingSlots[id] = newSlot;

}


