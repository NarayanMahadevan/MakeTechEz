//
//  Program Name - S7_Pointers.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates how to use pointers.
//
//  Compile: g++  S7_Pointers.cpp -o  S7_Pointers
//  Execute: ./S7_Pointers
//
//  Created by Abinav Janakiraman on 15/9/13.
//
#include <iostream>
using namespace std;

const double pi = 3.14159;
class cylinder{
	public:
		double radius, length;
		//Default constructor
		cylinder(){}
		//Functions
		double volume(){ return pi*radius*radius*length;}
};

double d;
double *dptr;
cylinder c;
cylinder *cptr;
//Array of cylinder pointers
cylinder *oil_tank_pointers[100];
int main(){
	int limit;
	double radius, length;
	//For loop that continusly takes data and stores the values into the cylinder pointer array
	for(limit = 0; cin >> radius >> length; ++limit){
		//Creating a new cylinder object
		oil_tank_pointers[limit] = new cylinder;
		//Setting the radius of the cylinder
		oil_tank_pointers[limit] -> radius = radius;
		//Setting the length of the cylinder
		oil_tank_pointers[limit] -> length = length;
	}
	double sum = 0.0;
	//For loop to find the sum of the volumes
	for(int counter = 0; counter < limit; ++counter){
		sum = sum + oil_tank_pointers[counter] -> volume();
	}
	cout << "The total volume in the " << limit << " storage tanks is " << sum << endl;
}
