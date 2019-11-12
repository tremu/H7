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

	void setManufacturer(string ma);
	void setModel(string mo);
	void displayComputer(void);

};

class Desktop : public Computer {

	int year;

public:

	Desktop();
	Desktop(string ma, string mo, int y);
	~Desktop();

	void setYear(int y);
	void displayDesktop(void);

};

class Laptop : public Computer {

	float weight;

public:

	Laptop();
	Laptop(string ma, string mo, float w);
	~Laptop();

	void setWeight(float w);
	void displayLaptop(void);

};

int main() {

}

Computer::~Computer() {

}
