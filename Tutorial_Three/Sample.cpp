//Chapter 15: Protect Member Variables


#include <iostream>

using namespace std;

//Global Variables
const double pi = 3.14159;
const double currentYear = 2013;
//Classes
class container{
	public:
		int percentLoaded;
		//Default constructor
		container(){}
};

class railroadCar{
	public:
		int yearBuilt;
		//Default constructor
		railroadCar(){}
		//Functions
		int age(){ return currentYear-yearBuilt; }
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

class boxCar : public railroadCar, public box{
	public:
		//Default constructor
		boxCar(){height = 10.5; width = 9.5; length = 40.0; }
};

class tankCar : public railroadCar, public cylinder{
	public:
		//Default constructor
		tankCar(){radius = 3.5; length = 40.0; }		
};

class gondalaCar : public railroadCar, public box{
	public:
		//Default constructor
		gondalaCar(){height = 6.0; width = 9.5; length = 40.0; }
		//Overiding the volume function
		double volume() {return 1.2 * height * width * length; }
};

//Main Method
int main(){
	//Objects using constructors
	boxCar b;
	b.percentLoaded = 50;
	b.yearBuilt = 1968;
	cout << "The age of the boxCar is " << b.age() << endl;
	cout << "The load percentage of the boxCar is " << b.percentLoaded << endl;
	cout << "The volume of the boxCar is " << b.volume() << endl;
}
	
