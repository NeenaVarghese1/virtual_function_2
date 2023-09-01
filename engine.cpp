#include<iostream>
using namespace std;
class   Engine {
public:
	double work_output;
	double energy_input;
	double fuel_input;


public:
	void virtual GetEfficiency() {

	}

};
class InternalCompustion :public  Engine{
public:
	int eff_diesel;
	int eff_petrol;

public:
	void GetEfficiency() {
		cout << "Enter the amound of usefull work output of diesel engine:  ";
		cin >> work_output;
		cout << "Enter the energy input from fuel: ";
		cin >> fuel_input;
	    eff_diesel = (work_output / fuel_input) * 100.0;
        cout << "Efficiency of diesel engine: " << eff_diesel << "%" << endl;

		cout << "Enter the amound of usefull work output of petrol engine:  ";
		cin >> work_output;
		cout << "Enter the energy input from fuel: ";
		cin >> fuel_input;
		eff_petrol = (work_output / fuel_input) * 100.0;
		cout << "Efficiency of petrol engine: " << eff_petrol << "%" << endl;


	}
};
class ExternalCompustion: public  Engine {
public:
	int eff_steam;

public:
	void GetEfficiency()
	{
		cout << "Enter the amound of usefull work output of steam engine:  ";
		cin >> work_output;
		cout << "Enter the heat energy input of steam engine: ";
		cin >> energy_input;
		eff_steam = (work_output / energy_input) * 100.0;

		cout << "Effeciency of steam engine: " << eff_steam << "%" << endl;


	}
};


void main() {
	Engine* effPtr;

	InternalCompustion eff1;
	ExternalCompustion eff2;

	effPtr = &eff1;
	effPtr->GetEfficiency();
	effPtr = &eff2;
	effPtr->GetEfficiency();
	


}