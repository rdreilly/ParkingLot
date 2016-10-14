#pragma once
#include <vector>
#include <array>
#include <map>

using namespace std;

class ParkingLot
{
	int n = 10;
	map <int, ParkingSlot> parkingSlots;
public:
	int empty_slots;
	static int getTwo();
	int getN() const;
	ParkingLot(int regSlots, int handSlots, int elecSlots, int compSlots);
	void addParkingSlot(int id, vehicle_type_t vehicle_type);
};

enum vehicle_type_t {REG, HANDICAPPED, ELEC, COMPACT};
#define SLOT_ERR -77;
class Vehicle
{
	vehicle_type_t vehicle_type;
public:
	vehicle_type_t getVehicleType();
	Vehicle(vehicle_type_t Vehicle);
};

class ParkingSlot
{
	int id;
	bool reserved = false;
	vehicle_type_t vehicle;
	vehicle_type_t supported_vehicle;
public:
	vehicle_type_t get_supported_vehicle_type();
	ParkingSlot(int id, vehicle_type_t supported_vehicle);
	bool isReserved();
	int reserve(Vehicle vehicle);
	Vehicle unreserve();
};