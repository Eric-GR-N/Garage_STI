#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Classes.h"

using namespace std;


int main()
{
	string input = "";
	string reg = "";
	string brand = "";
	string color = "";
	string pedalType = "";
	int numOfWheels = 0;
	char again = '0';
	char removeAgain = '0';
	char typeOfVehicle = '0';
	char searchChoice = '0';
	char choice = '0';
	int i = 0;
	int amount = 0;

	Garage size;//Object to create a max limit with setters and getters
	vector<Vehicle*> garage;//Creates the garage like an objectvector that can store multiple objects(Vehicles)


	//Employee Vehicles that is created when the application i run
	garage.push_back(new Bicycle("My Bike", "Crescent", 30, 2, "Green", "Yes", "Sport Pedals"));
	garage.push_back(new Motorcycle("FTW 666", "Harley Davidson", 200, 2, "Dark Black", "Dyna", "Ride Fast, Die Young"));
	garage.push_back(new Car("HHC 046", "Audi", 100, 4, "White", 26000, "Yes"));
	garage.push_back(new Bus("GTB 555", "SJ-Buss", 80, 16, "Blue", 18, "School Bus"));
	garage.push_back(new Truck("MATCHO", "Dodge", 80, 4, "Black", "Yes", "Loud!"));


	//Main menu
	cout << "Hello and welcome to the garage, please choose an action in the menu below:";
	cout << "\n" << endl;

	do
	{
		    cout << "[1] - Set size of the garage" << endl;
			cout << "[2] - See all the vehicles in the garage" << endl;
			cout << "[3] - See the type and amount of vehicles in the garage" << endl;
			cout << "[4] - Add vehicle to the garage" << endl;
			cout << "[5] - Remove vehicle from the garage" << endl;
			cout << "[6] - Search vehicle" << endl;
			cout << "[7] - Create a new garage" << endl;
			cout << "[8] - Exit the application" << endl;
			cout << "\nChoice: ";
			cin >> choice;

			switch (choice)
			{
			case '1':
				cout << "Please enter the amount of cars you want the Garage to hold: ";
				cin >> amount;
				size.set_size(amount);
				break;
			case '2':
				system("cls");
				printListOfVehicles(garage);
				break;
			case '3':
				system("cls");
				printTypeAndAmount(garage);
				break;
			case '4':
				if (Vehicle::totNumOfVehicles >= size.get_size())
				{
					cout << "Sorry, the garage is full at the moment, please remove a car or come back another time" << endl;
				}
				else
				{
					system("cls");
					cout << "Please select the type of vehicle you want to add: \n" << endl;
				do
				{ 
				cout << "[1] - Bicycle" << endl;
				cout << "[2] - Motorcycle" << endl;
				cout << "[3] - Car" << endl;
				cout << "[4] - Bus" << endl;
				cout << "[5] - Truck" << endl;
				cout << "\nChoice: ";
				cin >> typeOfVehicle;
				system("cls");
				switch (typeOfVehicle)
				{
				case '1':
					cin.ignore();
					cout << "Please enter the registration number:  ";
					getline(cin, reg);
					cout << "Please enter the vehicle brand:  ";
					getline(cin, brand);
					cout << "Please enter the vehicle color:  ";
					getline(cin, color);
					cout << "Please enter the pedal type:  ";
					getline(cin, pedalType);
					cout << "Please enter the number of wheels:  ";
					cin>>numOfWheels;
					garage.push_back(AddBicycle(reg, brand, color,pedalType,numOfWheels));
					break;
				case '2':
					cin.ignore();
					cout << "Please enter the registration number:  ";
					getline(cin, reg);
					cout << "Please enter the vehicle brand:  ";
					getline(cin, brand);
					cout << "Please enter the vehicle color:  ";
					getline(cin, color);
					garage.push_back(AddMC(reg, brand, color));
					break;
				case '3':
					cin.ignore();
					cout << "Please enter the registration number:  ";
					getline(cin, reg);
					cout << "Please enter the vehicle brand:  ";
					getline(cin, brand);
					cout << "Please enter the vehicle color:  ";
					getline(cin, color);
					garage.push_back(AddCar(reg, brand, color));
					break;
				case '4':
					cin.ignore();
					cout << "Please enter the registration number:  ";
					getline(cin, reg);
					cout << "Please enter the vehicle brand:  ";
					getline(cin, brand);
					cout << "Please enter the vehicle color:  ";
					getline(cin, color);
					garage.push_back(AddBus(reg, brand, color));
					break;
				case '5':
					cin.ignore();
					cout << "Please enter the registration number:  ";
					getline(cin, reg);
					cout << "Please enter the vehicle brand:  ";
					getline(cin, brand);
					cout << "Please enter the vehicle color:  ";
					getline(cin, color);
					garage.push_back(AddTruck(reg, brand, color));
					break;
				default:
					cout << "Invalid input, please try again: ";
					break;
				}
				if (Vehicle::totNumOfVehicles < 10)
				{
					cout << "Do you want to add another vehicle? (y/n): ";
					cin >> again;
					system("cls");
				}
				} while (again != 'n' && again != 'N' && Vehicle::totNumOfVehicles<10);
				}
				break;
			case '5':
				removeVehicle(garage);
				system("cls");
				break;
			case '6':
				system("cls");
				cout << "Please choose your search criteria: \n" << endl;
				do
				{
					cout << "[1] - Search by your vehicles registration number" << endl;
					cout << "[2] - Search by  vehicle brand" << endl;
					cout << "[3] - Search by color of the vehicle" << endl;
					cout << "\nChoice: ";
					cin >> searchChoice;
					system("cls");
					switch (searchChoice)
					{
					case'1':
						cin.ignore();
						cout << "Please enter your registration number: ";
						getline(cin, input);
						system("cls");
						searchVehicle(garage, input);
						break;
					case '2':
						cin.ignore();
						cout << "Please enter your vehicle brand: ";
						getline(cin, input);
						system("cls");
						searchVehicle(garage, input);
						break;
					case '3':
						cin.ignore();
						cout << "Please enter your vehicle color: ";
						getline(cin, input);
						system("cls");
						searchVehicle(garage, input);
						break;
					default:
						cout << "Invalid input, please try again!\n" << endl;
						break;
					}
				} while (searchChoice != '1' && searchChoice != '2' && searchChoice != '3');
				break;
			case '7':
				newGarage();
				break;
			case '8':
				choice = 'q';
				break;
			default:
				cout << "Invalid input, please try again!\n" << endl;
				break;
			}

			if (choice != 'q')
			{
				cout << "\nDo you want to select a new action? (y/n): ";
				cin >> choice;
				system("cls");
			}

	} while (choice != 'n' && choice !='N' && choice!='q');

	cout << "\nThank you and welcome back to the garage anytime!" << endl;

	return 0;
}
