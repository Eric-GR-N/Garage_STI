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
	void Vehicle::listTypeOfVehicle() {}

	//class Garage

	Garage::Garage() {}
	Garage::~Garage(){}


	//class Bicycle

	int Bicycle::totNumOfBicycles = 0;
	Bicycle::Bicycle() 
	{ 
		totNumOfBicycles++;
		regnr = "My Bike";
		brand = "Crescent";
		speed = 30;
		numOfWheels = 2;
		color = "Green";
		footBrake = "Yes";
		pedalType = "Sporty";
	}
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
		std::cout << "=====================" << std::endl;
		std::cout << outPut << std::endl;
		std::cout << "=====================" << std::endl;
	}
	void Bicycle::listTypeOfVehicle() 
	{
		std::cout << "Bicycles: " << totNumOfBicycles << std::endl;
	}


//class Motorcycle

	int Motorcycle::totNumOfMotorcycles = 0;
	Motorcycle::Motorcycle() 
	{
		totNumOfMotorcycles++;
		regnr = "YAY 666";
		brand = "Harley Davidson";
		speed = 200;
		numOfWheels = 2;
		color = "Black";
		model = "Dyna";
		decalText = "Ride Fast";
	}
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
		std::cout << "=====================" << std::endl;
		std::cout << outPut << std::endl;
		std::cout << "=====================" << std::endl;
	}
	void Motorcycle::listTypeOfVehicle() 
	{
		std::cout << "Motorcycles: " << totNumOfMotorcycles << std::endl;
	}

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
		std::cout << "=====================" << std::endl;
		std::cout << outPut << std::endl;
		std::cout << "=====================" << std::endl;
	}
	void Car::listTypeOfVehicle() 
	{
		std::cout << "Cars: " << totNumOfCars << std::endl;
	}



//class Bus
	int Bus::totNumOfBusses = 0;
	Bus::Bus() 
	{ 
		totNumOfBusses++; 
		regnr = "IKG 255";
		brand = "SJ Buss";
		speed = 80;
		numOfWheels = 8;
		color = "Red";
		length = 18;
		busType = "School Bus";
	}
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
		std::cout << "=====================" << std::endl;
		std::cout << outPut << std::endl;
		std::cout << "=====================" << std::endl;
	}
	void Bus::listTypeOfVehicle() 
	{
		std::cout << "Busses: " << totNumOfBusses << std::endl;
	}


//class Truck
	int Truck::totNumOfTrucks = 0;
	Truck::Truck() 
	{
		totNumOfTrucks++;
		regnr = "KGH 222";
		brand = "Dodge";
		speed = 150;
		numOfWheels = 4;
		color = "Black";
		autoSteer = "Yes";
		honkVolume = "Loud";
	}
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
		std::cout << "=====================" << std::endl;
		std::cout << outPut << std::endl;
		std::cout << "=====================" << std::endl;
	}
	void Truck::listTypeOfVehicle() 
	{
		std::cout << "Trucks: " << totNumOfTrucks << std::endl;
	}

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

	//Functions for inventory

	Vehicle* printListOfVehicles(std::vector<Vehicle*> &new_garage)
	{
		for (size_t i = 0; i < new_garage.size(); i++)
		{
			new_garage[i]->listVehicles();
			std::cout << std::endl;
		}
		return 0;
	}
	Vehicle* printTypeAndAmount(std::vector<Vehicle*>& new_garage)
	{
		new_garage[0]->listTypeOfVehicle();
		new_garage[1]->listTypeOfVehicle();
		new_garage[2]->listTypeOfVehicle();
		new_garage[3]->listTypeOfVehicle();
		new_garage[4]->listTypeOfVehicle();
		return 0;
	}

	Vehicle* removeVehicle(std::vector<Vehicle*>& new_garage)
	{
		char tryAgain = '0';
		std::string new_reg = "";
		int count = 0;
		
		

		do
		{ 
		std::cout << "Please type in your registration number and we will remove your car: ";
		std::cin.ignore();
		std::getline(std::cin, new_reg);
		count = 0;

		if (new_reg != "My Bike" && new_reg != "FTW 666" && new_reg != "HHC 046" && new_reg != "GTB 555" && new_reg != "MATCHO")
		{

		for (size_t i = 0; i < new_garage.size(); i++)
		{
			if (new_garage[i]->regnr == new_reg)
			{
				count++;
				delete new_garage[i];
				new_garage.erase(remove(new_garage.begin(), new_garage.end(), new_garage[i]), new_garage.end());
			}
		}

		if (count == 0)
		{
			std::cout << "Sorry, we can't find this registration number in our system, try again? (y/n): ";
			std::cin >> tryAgain;
		}
		}
		else
		{
			std::cout << "Sorry, this is one of our employees cars and can'y be removed, try again? (y/n): ";
			std::cin >> tryAgain;
		}

		} while (count==0 && tryAgain!='n' && tryAgain!='N');

		if (count != 0)
		{
			system("cls");
			std::cout << "Thank you, your vehicle has now been removed from the garage!\n" << std::endl;
			system("pause");
		}
		return 0;
	}

	//Search Function
	Vehicle* searchVehicle(std::vector<Vehicle*>& new_garage, std::string new_info)
	{
		std::string regnr = "";
		std::string brand = "";
		std::string color = "";
		std::string input;
		char choice = 'Y';
		int count = 0;
		int check = 0;


		//Transform the input and existing data to uppercase

		for (size_t i = 0; i < new_info.length(); i++)
		{
			if(new_info[i] != ' ')
			{
				input += toupper(new_info[i]);
			}
		}
		for (size_t i = 0; i < new_garage.size(); i++)
		{
			for (size_t k = 0; k < new_garage[i]->regnr.length(); k++)
			{
				if (new_garage[i]->regnr[k] != ' ')
				{
					regnr += toupper(new_garage[i]->regnr[k]);
				}
			}
			for (size_t k = 0; k < new_garage[i]->brand.length(); k++)
			{
				if (new_garage[i]->brand[k] != ' ')
				{
					brand += toupper(new_garage[i]->brand[k]);
				}
			}
			for (size_t k = 0; k < new_garage[i]->color.length(); k++)
			{
				if (new_garage[i]->color[k] != ' ')
				{
					color += toupper(new_garage[i]->color[k]);
				}
			}

			//Checks if the desired info is in the garage

			if (input == regnr)
			{
				std::cout << std::endl;
				new_garage[i]->getAllDetails();
				check++;
			}
			else if (input == brand)
			{
				std::cout << std::endl;
				new_garage[i]->getAllDetails();
				check++;
				
			}
			else if (input == color)
			{
				std::cout << std::endl;
				new_garage[i]->getAllDetails();
				check++;
			
			}
			if (i == new_garage.size()-1 && check==0)
			{
				std::cout << "Sorry, the vehicle is not in the garage at the moment!" << std::endl;
			}
			regnr = "";
			brand = "";
			color = "";
		}
		return 0;
	}

	//Function for creating a new garage and adding five vehicles by default
	Vehicle* newGarage()
	{
		std::vector <Vehicle*> garage2;
		garage2.push_back(new Bicycle("Bike no TWO", "Monark", 25, 2, "Yellow", "Yes", "Cheap Pedals"));
		garage2.push_back(new Motorcycle("AGG 325", "Honda", 150, 2, "Blue", "Lowrider", "Ride Slow, Die Old"));
		garage2.push_back(new Car("HHh 456", "SEAT", 150, 4, "Red", 10000, "No"));
		garage2.push_back(new Bus("GTC 123", "Wolkswagen", 80, 8, "Black", 10, "Tour Bus"));
		garage2.push_back(new Truck("HJY 321", "Datsun", 120, 4, "Red", "Yes", "Low!"));
		system("cls");
		std::cout << "Congratulations! You have now created a garage with five new Vehicles, see the list below: \n" << std::endl;
		printListOfVehicles(garage2);
		return 0;
	}
