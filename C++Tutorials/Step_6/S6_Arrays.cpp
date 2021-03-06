//
//  Program Name - S6_Arrays.cpp
//  Series: GetOnToC++ Step: 6
//
//  Purpose: This program illustrates how to use arrays 
//
//  Compile: g++  S6_Arrays.cpp -o  S6_Arrays
//  Execute: ./S6_Arrays
//
//  Created by Narayan Mahadevan on 18/09/13.
// 
#include <iostream>
using namespace std;

const double pi = 3.14159;
//Cylinder Class
class cylinder{
	public:
		//variables
		double radius, length;
		//Default constructor
		cylinder(){}
		//Functions
		double volume(){ return pi*radius*radius*length;}
};

int main(){
	//Creating and int rray of size 10
	int example[10];
	//Setting the 3 element of the array to two
	example[3] = 2;
	//Printing the third element of the array
	cout << example[3] << endl;
	//Creating an array of  3 cylinders
	cylinder oil_tanks[3];
	//Setting the radius and lenght of each cylinder in the array
	oil_tanks[0].radius = 5; oil_tanks[0].length = 40.0;
	oil_tanks[1].radius = 3; oil_tanks[1].length = 60.0;
	oil_tanks[2].radius = 2; oil_tanks[2].length = 10.0;
	//Calling the volume function on each cylinder in the array
	cout << oil_tanks[0].volume() << endl;
	cout << oil_tanks[1].volume() << endl;
	cout << oil_tanks[2].volume() << endl;
}
