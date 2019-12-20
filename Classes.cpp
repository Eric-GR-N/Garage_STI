#include <iostream>
#include <string>
#include "Classes.h"
#include <algorithm>
#include <vector>


    //class Vehicle

    int Vehicle::totNumOfVehicles = 0;
	Vehicle::Vehicle() { totNumOfVehicles++; }
	Vehicle::Vehicle(std::string new_regnr, std::string new_brand="FIAT", int new_speed=100, int new_numOfWheels=4, std::string new_color="White") {
		regnr = new_regnr;
		brand = new_brand;
		speed = new_speed;
		numOfWheels = new_numOfWheels;
		color = new_color;
		totNumOfVehicles++;
	}
	Vehicle::~Vehicle() { totNumOfVehicles--; }
	void Vehicle::listVehicles() {}
	void Vehicle::listTypeOfVehicle() {
	
	}
	void Vehicle::searchVehicle() {}

	//class Garage

	Garage::Garage() {}
	Garage::~Garage(){}
	void Garage::getAllDetails() {}
	void Garage::listVehicles() {}
	void Garage::listTypeOfVehicle()
	{
		for (int i = 0; i < 2; i++)
		{
			std::cout << "Här vare bilar!" << std::endl;
		}
	}
	void Garage::searchVehicle() {}
	

	//class Bicycle

	int Bicycle::totNumOfBicycles = 0;
	Bicycle::Bicycle() { totNumOfBicycles++; }
	Bicycle::Bicycle(std::string manual_reg, std::string manual_brand, std::string new_color) { regnr = manual_reg; brand = manual_brand; color = new_color; totNumOfBicycles++; }
	Bicycle::Bicycle(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_footBrake, std::string new_pedalType)
	: Vehicle(new_regnr, new_brand, new_speed, new_numOfWheels, new_color)
	{
		footBrake = new_footBrake; 
		pedalType = new_pedalType;
		totNumOfBicycles++;
	}
	Bicycle::~Bicycle() { totNumOfBicycles--; }
	void Bicycle::getAllDetails() 
	{
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nSpeed: " + std::to_string(speed) + "\nNumber Of Wheels: " +
			std::to_string(numOfWheels) + "\nColor: " + color + "\nFootbrake: " + footBrake + "\nPedaltype: " + pedalType;
		std::cout << outPut << "\n" << std::endl;
	}
	void Bicycle::listVehicles() {
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nColor: " + color;
		std::cout << outPut << "\n" << std::endl;
	}
	void Bicycle::listTypeOfVehicle() 
	{
		std::cout << "Bicycles: " << totNumOfBicycles << std::endl;
	}
	void Bicycle::searchVehicle() {}


//class Motorcycle

	int Motorcycle::totNumOfMotorcycles = 0;
	Motorcycle::Motorcycle() { totNumOfMotorcycles++; }
	Motorcycle::Motorcycle(std::string manual_reg, std::string manual_brand, std::string new_color) { regnr = manual_reg; brand = manual_brand; color = new_color; totNumOfMotorcycles++;}
	Motorcycle::Motorcycle(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_model, std::string new_decalText)
	: Vehicle(new_regnr, new_brand, new_speed, new_numOfWheels, new_color)
	{
		model = new_model; 
		decalText = new_decalText;
		totNumOfMotorcycles++;
	}
	Motorcycle::~Motorcycle() { totNumOfMotorcycles--; }
	void Motorcycle::getAllDetails()
	{
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nSpeed: " + std::to_string(speed) + "\nNumber Of Wheels: " +
		std::to_string(numOfWheels) + "\nColor: " + color + "\nModel: " + model + "\nDecal Text: " + decalText;
		std::cout << outPut << "\n" << std::endl;
	}
	void Motorcycle::listVehicles() {
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nColor: " + color;
		std::cout << outPut << "\n" << std::endl;
	}
	void Motorcycle::listTypeOfVehicle() 
	{
		std::cout << "Motorcycles: " << totNumOfMotorcycles << std::endl;
	}
	void Motorcycle::searchVehicle() {}

//class Car
	int Car::totNumOfCars = 0;
	Car::Car() 
	{ 
		totNumOfCars++; 
		regnr = "AAA 123";
		brand = "FIAT";
		speed = 100;
		numOfWheels = 4;
		color = "Grey";
		milage = 10000;
		combi = "No";
	}
	Car::Car(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, int new_milage, std::string new_combi)
	: Vehicle(new_regnr, new_brand, new_speed, new_numOfWheels, new_color)
	{
		milage = new_milage;
		combi = new_combi;
		totNumOfCars++;
	}
	Car::Car(std::string manual_reg, std::string manual_brand, std::string new_color) { regnr = manual_reg; brand = manual_brand; color = new_color; totNumOfCars++; }
	Car::~Car() { totNumOfCars--;}
	void Car::getAllDetails()
	{
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nSpeed: " + std::to_string(speed) + "\nNumber Of Wheels: " +
		std::to_string(numOfWheels) + "\nColor: " + color + "\nMilage: " + std::to_string(milage) + "\nKombi: " + combi;
		std::cout << outPut << "\n" << std::endl;
	}
	void Car::listVehicles() {
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nColor: " + color;
		std::cout << outPut << "\n" << std::endl;
	}
	void Car::listTypeOfVehicle() 
	{
		std::cout << "Cars: " << totNumOfCars << std::endl;
	}
	void Car::searchVehicle() {}



//class Bus
	int Bus::totNumOfBusses = 0;
	Bus::Bus() { totNumOfBusses++; }
	Bus::Bus(std::string manual_reg, std::string manual_brand, std::string new_color) { regnr = manual_reg; brand = manual_brand; color = new_color; totNumOfBusses++;}
	Bus::Bus(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, int new_length, std::string new_busType)
	: Vehicle(new_regnr, new_brand, new_speed, new_numOfWheels, new_color)
	{
		length = new_length;
		busType = new_busType;
		totNumOfBusses++;
	}
	Bus::~Bus() { totNumOfBusses--; }
	void Bus::getAllDetails()
	{
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nSpeed: " + std::to_string(speed) + "\nNumber Of Wheels: " +
		std::to_string(numOfWheels) + "\nColor: " + color + "\nLength: " + std::to_string(length) + "\nBus Type: " + busType;
		std::cout << outPut << "\n" << std::endl;
	}
	void Bus::listVehicles() {
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nColor: " + color;
		std::cout << outPut << "\n" << std::endl;
	}
	void Bus::listTypeOfVehicle() 
	{
		std::cout << "Busses: " << totNumOfBusses << std::endl;
	}
	void Bus::searchVehicle() {}


//class Truck
	int Truck::totNumOfTrucks = 0;
	Truck::Truck() { totNumOfTrucks++; }
	Truck::Truck(std::string manual_reg, std::string manual_brand, std::string new_color) { regnr = manual_reg; brand = manual_brand; color = new_color; totNumOfTrucks++;}
	Truck::Truck(std::string new_regnr, std::string new_brand, int new_speed, int new_numOfWheels, std::string new_color, std::string new_autoSteer, std::string new_honkVolume)
	: Vehicle(new_regnr, new_brand, new_speed, new_numOfWheels, new_color)
	{
		autoSteer = new_autoSteer;
		honkVolume = new_honkVolume;
		totNumOfTrucks++;
	}
	Truck::~Truck() { totNumOfTrucks--; }
	void Truck::getAllDetails()
	{
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nSpeed: " + std::to_string(speed) + "\nNumber Of Wheels: " +
		std::to_string(numOfWheels) + "\nColor: " + color + "\nAuto Steer: " + autoSteer + "\nHonk Volume: " + honkVolume;
		std::cout << outPut << "\n" << std::endl;
	}
	void Truck::listVehicles() {
		std::string outPut;
		outPut += "Regnr: " + regnr + "\nBrand: " + brand + "\nColor: " + color;
		std::cout << outPut << "\n" << std::endl;
	}
	void Truck::listTypeOfVehicle() 
	{
		std::cout << "Trucks: " << totNumOfTrucks << std::endl;
	}
	void Truck::searchVehicle() {}

	//Functions for adding Vehicles

	Vehicle* AddBicycle(std::string manual_reg, std::string manual_brand, std::string new_color)
	{
		Vehicle* new_bicycle = new Bicycle(manual_reg, manual_brand, new_color);
		return new_bicycle;
	}
	Vehicle* AddMC(std::string manual_reg, std::string manual_brand, std::string new_color)
	{
		Vehicle* new_mc = new Motorcycle(manual_reg, manual_brand, new_color);
		return new_mc;
	}
	Vehicle* AddCar(std::string manual_reg, std::string manual_brand, std::string new_color)
	{
		Vehicle* new_car = new Car(manual_reg, manual_brand, new_color);
		return new_car;
	}
	Vehicle* AddBus(std::string manual_reg, std::string manual_brand, std::string new_color)
	{
		Vehicle* new_bus = new Bus(manual_reg, manual_brand, new_color);
		return new_bus;
	}
	Vehicle* AddTruck(std::string manual_reg, std::string manual_brand, std::string new_color)
	{
		Vehicle* new_truck = new Truck(manual_reg, manual_brand, new_color);
		return new_truck;
	}

	//Functions for adding vehicles


	Vehicle* printListOfVehicles(std::vector<Vehicle*> &new_garage)
	{
		for (int i = 0; i < new_garage.size(); i++)
		{
			new_garage[i]->listVehicles();
		}
		return 0;
	}
	Vehicle* printTypeAndAmount(Vehicle* new_bike, Vehicle* new_mc, Vehicle* new_car, Vehicle* new_bus, Vehicle* new_truck)
	{
		new_bike->listTypeOfVehicle();
		new_mc->listTypeOfVehicle();
		new_car->listTypeOfVehicle();
		new_bus->listTypeOfVehicle();
		new_truck->listTypeOfVehicle();
		return 0;
	}

	Vehicle* removeVehicle(std::vector<Vehicle*>& new_garage, std::string new_reg)
	{
		for (int i = 0; i < new_garage.size(); i++)
		{
			if (new_garage[i]->regnr == new_reg)
			{
				delete new_garage[i];
				new_garage.erase(remove(new_garage.begin(), new_garage.end(), new_garage[i]), new_garage.end());
			}
		}
		return 0;
	}
