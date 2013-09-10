//
//  Program Name - S2_Classes.cpp
//  Series: GetOnToC++ Step: 2
//
//  Purpose: This program creates a boxCar class with contructors, functions and private variables 
//
//  Compile: g++ S2_Classes.cpp -o S2_Classes
//  Execute: ./S2_Classes
//
//  Created by Narayan Mahadevan on 18/08/13.
//  

#include <iostream>

using namespace std;

//Global Variables
const double pi = 3.14159;

//Classes
class boxCar{
	public:
		boxCar();
		boxCar(double h, double w, double l);
		double volume();
		double readHeight(), readWidth(), readLength();
		double writeHeight(double h), writeWidth(double w), writeLength(double l);
	private:
		double height, width, length;
};

class tankCar{
	public:
		tankCar();
		tankCar(double r, double l);
		double volume();
		double readRadius(), readLength();
		double writeRadius(double r), writeLength(double l);
	private:
		double radius, length;
};

class flatCar{
	public:
		flatCar();
		flatCar(double w, double l);
		double volume();
		double readWidth(), readLength();
		double writeWidth(double w), writeLength(double l);
	private:
		double width, length;
};

//Default Constructors
boxCar::boxCar(){
	height = 10.5; width = 9.5; length = 40.0;
}

tankCar::tankCar(){
	radius = 3.5; length = 40.0;
}

flatCar::flatCar(){
	width = 9.5; length = 40.0;
}

//Constructors
boxCar::boxCar(double h, double w, double l){
	height = h; width = w; length = l;	
}

tankCar::tankCar(double r, double l){
	radius = r; length = l;
}

flatCar::flatCar(double w, double l){
	width = w; length = l;
}

//Class Functions
double boxCar::volume(){
	return height * width * length;
}

double tankCar::volume(){
	return pi*radius*radius*length;
}

double flatCar::volume(){
	return 8.25*width*length;
}

//Reader Functions
double boxCar::readHeight(){ return height; }
double boxCar::readWidth(){ return width; }
double boxCar::readLength(){ return length; }
double tankCar::readRadius(){ return radius; }
double tankCar::readLength(){ return length; }
double flatCar::readWidth(){ return width; }
double flatCar::readLength(){ return length; }

//Writer Functions
double boxCar::writeHeight(double h){ height = h; }
double boxCar::writeWidth(double w){ width = w; }
double boxCar::writeLength(double l){ length = l; }
double tankCar::writeRadius(double r){ radius = r; }
double tankCar::writeLength(double l){ length = l; }
double flatCar::writeWidth(double w){ width = w; }
double flatCar::writeLength(double l){ length = l; }


//Main Method
int main(){
	//Objects using constructors
	boxCar a;
	boxCar b(10.5,9.5,30.0);
	//Using the Reader Functions
	cout << "The height of the default box car is " <<a.readHeight() << endl
		 << "The width of the default box car is " <<a.readWidth() << endl
		 << "The length of the default box car is " <<a.readLength() << endl
		 << "The height of the specified box car is " <<b.readHeight() << endl
		 << "The width of the specified box car is " <<b.readWidth() << endl
		 << "The length of the specified box car is " <<b.readLength() << endl
	//Printing the Two Volumes
	cout << "The volume of the default box car is " << a.volume() << endl
		 << "The volume of the specified box car is " << b.volume() << endl
	//Using the Writer Functions	 
	cout << "Writing the box car's length as 30.00" << endl;
		a.writeLength(30.00);
	//Printing the Changed Volume	 	 
	cout << "The volume of the changed box car is " << a.volume() << endl
	return 0;
}	
