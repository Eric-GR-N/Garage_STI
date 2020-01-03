#pragma once
#include <iostream>
#include <vector>

class Garage{
protected:
	std::string garageColor = "";
	int maxLimit;
public:
	void set_size(int new_maxLimit);
	int get_size();
	Garage();
	~Garage();
};

class Vehicle : Garage{
protected:
	int speed = 0;
	int numOfWheels = 0;
public:
	static int totNumOfVehicles; //Setting the maximum amount of cars that can be stored in the garage
	std::string brand = "0";
	std::string color = "0";
	std::string regnr = "0";
	Vehicle();
	Vehicle(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color);
	virtual ~Vehicle();
	virtual void getAllDetails() = 0;
	virtual void listVehicles() = 0;
	virtual void listTypeOfVehicle() = 0;
};



class Bicycle : public Vehicle {
private:
	static int totNumOfBicycles;
	std::string footBrake = "0";
	std::string pedalType = "0";
public:
	Bicycle();
	Bicycle(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_footBrake, std::string new_pedalType);
	Bicycle(std::string manual_reg, std::string manual_brand, std::string new_color, std::string new_pedalType, int new_numOfWheels);
	~Bicycle();
	void getAllDetails();
	void listVehicles();
	void listTypeOfVehicle();
};
class Motorcycle : public Vehicle {
private:
	static int totNumOfMotorcycles;
	std::string model = "0";
	std::string decalText = "0";
public:
	Motorcycle();
	Motorcycle(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_model, std::string new_decalText);
	Motorcycle(std::string manual_reg, std::string manual_brand, std::string new_color);
	~Motorcycle();
	void getAllDetails();
	void listVehicles();
	void listTypeOfVehicle();
};
class Car : public Vehicle {
private:
	static int totNumOfCars;
	int milage = 0;
	std::string combi = "0";
public:
	Car();
	Car(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, int new_milage, std::string new_combi);
	Car(std::string manual_reg, std::string manual_brand, std::string new_color);
	~Car();
	void getAllDetails();
	void listVehicles();
	void listTypeOfVehicle();
};
class Bus : public Vehicle {
private:
	static int totNumOfBusses;
	int length = 0;
	std::string busType = "0";
public:
	Bus();
	Bus(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, int new_length, std::string new_busType);
	Bus(std::string manual_reg, std::string manual_brand, std::string new_color);
	~Bus();
	void getAllDetails();
	void listVehicles();
	void listTypeOfVehicle();
};
class Truck : public Vehicle {
private:
	static int totNumOfTrucks;
	std::string autoSteer = "0";
	std::string honkVolume = "0";
public:
	Truck();
	Truck(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_autoSteer, std::string new_honkVolume);
	Truck(std::string manual_reg, std::string manual_brand, std::string new_color);
	~Truck();
	void getAllDetails();
	void listVehicles();
	void listTypeOfVehicle();
};

//Functions for adding vehicles

Vehicle* AddBicycle(std::string manual_reg, std::string manual_brand, std::string new_color,std::string new_pedalType, int new_numOfWheels);
Vehicle* AddMC(std::string manual_reg, std::string manual_brand, std::string new_color);
Vehicle* AddCar(std::string manual_reg, std::string manual_brand, std::string new_color);
Vehicle* AddBus(std::string manual_reg, std::string manual_brand, std::string new_color);
Vehicle* AddTruck(std::string manual_reg, std::string manual_brand, std::string new_color);

//Functions for inventory

Vehicle* printListOfVehicles(std::vector<Vehicle*>& new_garage);
Vehicle* printTypeAndAmount(std::vector<Vehicle*>& new_garage);
Vehicle* removeVehicle(std::vector<Vehicle*>& new_garage);

//Search Function
Vehicle* searchVehicle(std::vector<Vehicle*>& new_garage, std::string new_info);

Vehicle* newGarage();
