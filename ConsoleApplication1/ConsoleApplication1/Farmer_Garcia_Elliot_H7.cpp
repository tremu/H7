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

This program allows the user to compare their desktop or laptop computer to
an Apple desktop or laptop computer. The manufacturer, model, and year are
compared for desktops, and the manufacturer, model, and weight are compared
for laptops.

Questions:
1. Program model?
2. D1 and L1 - overloaded constructors or mutators?
3. destructors - blank?
4. accessors with return type void - still accessors?
5. displayComputer() - member function of class Computer y/n?

*/

#include <iostream>
#include <string>

using namespace std;

//base class Computer declaration
class Computer {

	string manufacturer;
	string model;

public:

	Computer();                                 //default constructor
	Computer(string ma, string mo);             //overloaded constructor
	~Computer();                                //destructor

    void setManufacturer(string ma);            //mutator
    void setModel(string mo);                   //mutator
	void displayComputer(void);                 //accessor

};

//derived class Desktop declaration, inherits Computer
class Desktop : public Computer {

	int year;

public:

	Desktop();                                  //default constructor
	Desktop(string ma, string mo, int y);       //overloaded constructor
	~Desktop();                                 //destructor

    void setYear(int y);                        //mutator
	void displayDesktop(void);                  //accessor

};

//derived class Laptop declaration, inherits Computer
class Laptop : public Computer {

	float weight;

public:

	Laptop();                                   //default constructor
	Laptop(string ma, string mo, float w);      //overloaded constructor
	~Laptop();                                  //destructor

    void setWeight(float w);                    //mutator
	void displayLaptop(void);                   //accessor

};

Desktop defaultDesktop(void);
Laptop defaultLaptop(void);
Desktop customDesktop(void);
Laptop customLaptop(void);
void compareDesktops(Desktop d1, Desktop d2);
void compareLaptops(Laptop l1, Laptop l2);


//creates instances of Desktop and Laptop with default values, as well as
//instances of Desktop and Laptop with user-set values, allowing the user to
//visually compare them
int main() {

    cout << "This program allows you to visually compare stats for "
        "your computer against\nApple products.\n\n";

	//default desktop and laptop are created with default constructors
	Desktop D1 = defaultDesktop();
	Laptop L1 = defaultLaptop();

    //custom Desktop is created with overloaded constructor
	Desktop D2 = customDesktop();

    //custom Laptop is created with overloaded constructor
    Laptop L2 = customLaptop();

    //prints values for default and custom laptops and desktops, allowing
    //user to visually compare them
	compareDesktops(D1, D2);
	compareLaptops(L1, L2);

    return 0;

}

//default Computer constructor
Computer::Computer() {

	manufacturer = "";
	model = "";

}

//overloaded Computer constructor, sets manufacturer and model to parameters
Computer::Computer(string ma, string mo) {

	manufacturer = ma;
	model = mo;

}

//Computer destructor
Computer::~Computer() {

}

//mutator that sets computer manufacturer
void Computer::setManufacturer(string ma) {

    manufacturer = ma;

}

//mutator that sets computer model
void Computer::setModel(string mo) {

    model = mo;

}

//accessor function - prints manufacturer and model of Computer
void Computer::displayComputer() {

	cout << manufacturer << " " << model;

}

//default Desktop constructor
Desktop::Desktop() : Computer() {

	year = 0;

}

//overloaded Desktop constructor, allows user to set custom manufacturer,
//model, and year
Desktop::Desktop(string ma, string mo, int y) : Computer(ma, mo) {

	year = y;

}

//Desktop destructor
Desktop::~Desktop() {

}

//mutator function, sets Desktop year
void Desktop::setYear(int y) {

    year = y;

}

//accessor function - prints manufacturer, model, and year of Desktop
void Desktop::displayDesktop(void) {

	Computer::displayComputer();
	cout << " (" << year << " edition)\n";

}

//default Laptop constructor
Laptop::Laptop() : Computer() {
	
	weight = 0.0f;

}

//overloaded Laptop constructor, allows user to set custom manufacturer,
//model, and weight
Laptop::Laptop(string ma, string mo, float w) : Computer(ma, mo) {

	weight = w;

}

//Laptop destructor
Laptop::~Laptop() {

}

//Laptop mutator function, sets weight
void Laptop::setWeight(float w) {
    
    weight = w;

}

//accessor function - prints Laptop manufacturer, model, and weight
void Laptop::displayLaptop(void) {

	Computer::displayComputer();
	cout << " (" << weight << " lbs.)\n";

}

Desktop defaultDesktop() {

	//default Desktop
	Desktop D;

	//set D1 to 2019 Apple Mac Pro using mutator functions
	D.setManufacturer("Apple");
	D.setModel("Mac Pro");
	D.setYear(2019);

	return D;

}

Laptop defaultLaptop() {

	//default Laptop
	Laptop L;

	//set L1 to Apple MacBook Pro weighing 4.0lbs using mutator functions
	L.setManufacturer("Apple");
	L.setModel("MacBook Pro");
	L.setWeight(4.0);

	return L;

}

Desktop customDesktop(void) {
	
	//values for custom Desktop
	string ma, mo;
	int y;
	
	//user set custom Desktop values
	cout << "Please enter desktop manufacturer: ";
	cin >> ma;
	cout << "Please enter desktop model: ";
	cin >> mo;
	cout << "Please enter desktop year: ";
	cin >> y;
	cout << "\n";

	return Desktop(ma, mo, y);

}

Laptop customLaptop(void) {

	string ma, mo;
	float w;

	//user set custom Laptop values
	cout << "Please enter laptop manufacturer: ";
	cin >> ma;
	cout << "Please enter laptop model: ";
	cin >> mo;
	cout << "Please enter laptop weight: ";
	cin >> w;
	cout << "\n";

	return Laptop(ma, mo, w);

}

void compareDesktops(Desktop d1, Desktop d2) {

	d1.displayDesktop();
	cout << "vs.\n";
	d2.displayDesktop();
	cout << "\n";

}

void compareLaptops(Laptop l1, Laptop l2) {

	l1.displayLaptop();
	cout << "vs.\n";
	l2.displayLaptop();
	cout << "\n";

}