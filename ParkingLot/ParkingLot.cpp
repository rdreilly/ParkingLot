// ParkingLot.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ParkingLot.h"

int main()
{
	return 0;
}


vehicle_type_t Vehicle::getVehicleType()
{
	return vehicle_type;
}
Vehicle::Vehicle(vehicle_type_t Vehicle)
{
	vehicle_type = Vehicle;
}
ParkingSpace::ParkingSpace(int id, vehicle_type_t supported_vehicle )
{	
	id = id;
	supported_vehicle = supported_vehicle;
}
bool ParkingSpace::isReserved()
{
	return reserved;
}
int ParkingSpace::reserve(Vehicle vehicle)
{
	if (vehicle.getVehicleType() != supported_vehicle)
		throw SLOT_ERR;
	reserved = true;
	vehicle = vehicle;
	return id;
}
Vehicle ParkingSpace::unreserve()
{
	reserved = false;
	return vehicle;
}

vehicle_type_t ParkingSpace::get_supported_vehicle_type()
{
	return supported_vehicle;
}

ParkingLot::ParkingLot(int reg, int hand, int elec, int compact)
{
	int slotId = 0;
	for (int i = 0; i < reg; i++)
		addParkingSpace(++slotId, REG);
	for (int i = 0; i < hand; i++)
		addParkingSpace(++slotId, HANDICAPPED);
	for (int i = 0; i < elec; i++)
		addParkingSpace(++slotId, ELEC);
	for (int i = 0; i < compact; i++)
		addParkingSpace(++slotId, COMPACT);
	empty_slots = parkingSpaces.size();
}

void ParkingLot::addParkingSpace(int id, vehicle_type_t vehicle_type)
{
	ParkingSpace newSpace = ParkingSpace(id, vehicle_type);
	parkingSpaces.insert(std::pair<int, ParkingSpace>(id, newSpace));
}


