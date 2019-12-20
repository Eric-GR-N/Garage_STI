#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Classes.h"

using namespace std;

void frontEnd();


int main()
{
	frontEnd();

	string reg = "0";
	string brand = "0";
	string color = "0";

	vector<Vehicle*> garage;
	Vehicle* bike1 = new Bicycle("None", "Crescent", 30, 2, "Green", "Yes", "Sport Pedals");
	garage.push_back(bike1);
	Vehicle* motorcycle1 = new Motorcycle("FTW 666", "Harley Davidson", 200, 2, "Dark Black", "Dyna", "Ride Fast, Die Young");
	garage.push_back(motorcycle1);
	Vehicle* car1 = new Car("HHC 046", "Audi", 100, 4, "White", 26000, "Yes");
	garage.push_back(car1);
	Vehicle* bus1 = new Bus("GTB 555", "SJ-Buss", 80, 16, "Blue", 18, "School Bus");
	garage.push_back(bus1);
	Vehicle* truck1 = new Truck("MATCHO", "Dodge", 80, 4, "Black", "Yes", "Loud!");
	garage.push_back(truck1);
	garage.push_back(AddCar("HIO 241", "Mazda", "Purple"));
	garage.push_back(AddCar("FIU 151", "SEAT", "Rosa"));
	garage.push_back(AddTruck("KUNGEN", "Pick-UP", "Red"));
	garage.push_back(AddBicycle("None", "Monark", "Rusty-White"));

	
	

	cout << "Hello and welcome to the garage, take a look at our inventory!" << endl;
	system("pause");
	system("cls");
	printTypeAndAmount(bike1, motorcycle1, car1, bus1, truck1);
	
	cout << "\n\n";

	printListOfVehicles(garage);

	cout << "\n\n";

	cout << "PLease write your registration number to remove your car from the garage: ";
	getline(cin, reg);
	removeVehicle(garage, reg);
	system("cls");



	cout << "Ok, lets take a look at our inventory now" << endl;
	system("pause");
	system("cls");
	printTypeAndAmount(bike1, motorcycle1, car1, bus1, truck1);

	cout << "\n\n";

	printListOfVehicles(garage);

	cout << "\n\n";

	cout << "Please fill in the information below to park your car: \n\nRegistration number: ";
    getline(cin, reg);
	cout << "Car Brand: ";
	getline(cin, brand);
	cout << "Color of your car: ";
	getline(cin, brand);
	garage.push_back(AddCar(reg, brand, color));
	system("cls");

	cout << "Look! Here are the inventory list again, and you can see that your car is safe and parked:\n" << endl;
	printListOfVehicles(garage);

	cout << "\n\n";

	cout << "Inventory is now: \n" << endl;
	printTypeAndAmount(bike1, motorcycle1, car1, bus1, truck1);



	return 0;
}

/*
garage[0]->listTypeOfVehicle();  //Söka upp hur många typer av varje det finns i garaget
garage[1]->listTypeOfVehicle();
garage[2]->listTypeOfVehicle();
garage[3]->listTypeOfVehicle();
garage[4]->listTypeOfVehicle();
*/

/*
cout << "Please type a regnr: "; //Söka på regnr
getline(cin, reg);
system("cls");
for (int i = 0; i < garage.size(); i++)
{
	if (garage[i]->regnr == reg)
	{
		cout << "Yes, this Vehicle is curently parked in the garage!\n\nDetails: " << endl;
		garage[i]->listVehicles();
	}
}
*/

/*
cout << "Please type a regnr that you want to remove: "; //Söka på regnr
getline(cin, reg);
system("cls");
for (int i = 0; i < garage.size(); i++)
{
	if (garage[i]->regnr == reg)
	{
		garage.erase(remove(garage.begin(), garage.end(), car1), garage.end());
		delete car1;
	}
}
*/