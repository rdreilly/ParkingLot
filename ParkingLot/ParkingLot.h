#pragma once
#include <vector>
#include <array>
#include <map>

using namespace std;

enum vehicle_type_t {REG, HANDICAPPED, ELEC, COMPACT};
#define SLOT_ERR -77;

class Vehicle
{
	vehicle_type_t vehicle_type;
public:
	vehicle_type_t getVehicleType();
	Vehicle(vehicle_type_t Vehicle);
};

class ParkingSpace
{

	bool reserved = false;
	vehicle_type_t vehicle;
	vehicle_type_t supported_vehicle;

public:
	int id;
	vehicle_type_t get_supported_vehicle_type();
	ParkingSpace(int id, vehicle_type_t supported_vehicle);
	bool isReserved();
	int reserve(Vehicle vehicle);
	Vehicle unreserve();
	bool operator <(const ParkingSpace& rhs) const
	{
		return id < rhs.id;
	}
};

class ParkingLot
{
	map <int, ParkingSpace> parkingSpaces;
public:
	int empty_slots;
	ParkingLot(int regSlots, int handSlots, int elecSlots, int compSlots);
	void addParkingSpace(int id, vehicle_type_t vehicle_type);
};
