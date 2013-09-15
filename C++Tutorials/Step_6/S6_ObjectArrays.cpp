//
//  Program Name - S6_ObjectArrays.cpp
//  Series: GetOnToC++ Step: 6
//
//  Purpose: This program illustrates how array of classes can hold children class it them as well. 
//
//  Compile: g++  S6_ObjectArrays.cpp -o  S6_ObjectArrays
//  Execute: ./S6_ObjectArrays
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;

const double pi = 3.14159;
class container{
	public:
		int percentLoaded;
		//Default constructor
		container(){}
		int getPercentLoaded() { return percentLoaded; }
};

class box : public container{
	public:
		double height, width, length;
		//Default constructor
		box(){}
		//Functions
		double volume(){return height*width*length; }
};

class cylinder : public container{
	public:
		double radius, length;
		//Default constructor
		cylinder(){}
		//Functions
		double volume(){ return pi*radius*radius*length;}
};

class sphere : public container{
	public:
		double radius;
		//Default constructor
		sphere(){}
		//Functions
		double volume(){return (4/3)*pi*radius*radius*radius; }
};

int main(){
	container example[3];
	//Initialzing the array
	example[0] =  box();
	example[1] = cylinder();
	example[2] = sphere();
	//Using the parts of the array
	example[0].percentLoaded = 10;
	example[1].percentLoaded = 50;
	example[2].percentLoaded = 70;
	cout << "Box: " << example[0].getPercentLoaded() << endl
		 << "Cylinder: " << example[1].getPercentLoaded() << endl
		 << "Sphere: " << example[2].getPercentLoaded() << endl;
}
	
	
	
	
	
	
	
	
	
