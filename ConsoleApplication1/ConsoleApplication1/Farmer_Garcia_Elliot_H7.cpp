/*
Program No.         : Farmer_Garcia_Elliot_H7.cpp
Programmer          : Elliot Farmer Garcia
Course / Section    : ELET 2300 - 07 / 23493
Instructor          : Dr. F. Attarzadeh
Date Assigned       : 11/12/2019
Date Modified       : 11/12/2019
Due Date            : 11/21/2019
Compiler            : Microsoft Visual Studio Enterprise 2019
Environment         : Console Applications
Operating System    : Windows 7
*/

/*
Problem Statement


*/

#include <iostream>
#include <string>

using namespace std;

class Computer {

	string manufacturer;
	string model;

public:

	Computer();
	Computer(string ma, string mo);
	~Computer();

	void displayComputer(void);

};

class Desktop : public Computer {

	int year;

public:

	Desktop();
	Desktop(string ma, string mo, int y);
	~Desktop();

	void displayDesktop(void);

};

class Laptop : public Computer {

	float weight;

public:

	Laptop();
	Laptop(string ma, string mo, float w);
	~Laptop();

	void displayLaptop(void);

};

int main() {

}

Computer::Computer() {

	manufacturer = "Apple";
	model = "iComputer";

}

Computer::Computer(string ma, string mo) {

	manufacturer = ma;
	model = mo;

}

Computer::~Computer() {

}

void Computer::displayComputer() {

	cout << manufacturer << " " << model;

}

Desktop::Desktop() {

	year = 2019;

}

Desktop::Desktop(string ma, string mo, int y) : Computer(ma, mo) {

	year = y;

}

void Desktop::displayDesktop(void) {

	Computer::displayComputer();
	cout << " (" << year << ")\n";

}

Laptop::Laptop() {
	
	weight = 1.1;

}

Laptop::Laptop(string ma, string mo, float w) : Computer(ma, mo) {

	weight = w;

}

void Laptop::displayLaptop(void) {

	Computer::displayComputer();
	cout << "(" << weight << " lbs.)\n";

}