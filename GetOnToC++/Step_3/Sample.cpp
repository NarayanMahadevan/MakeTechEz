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

class sphere : public container{
	public:
		double radius;
		//Default constructor
		sphere(){}
		//Functions
		double volume(){return (4/3)*pi*radius*radius*radius; }
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

class flatCar : public railroadCar, public box{
	public:
		//Default constructor
		flatCar(){width = 9.5; length = 40.0; }
		//Overriding the volume function
		double volume() {return 8.25 * width * length; }
};

class gondalaCar : public railroadCar, public box{
	public:
		//Default constructor
		gondalaCar(){height = 6.0; width = 9.5; length = 40.0; }
		//Overiding the volume function
		double volume() {return 1.2 * height * width * length; }
};

class liquidgasCar : public railroadCar, public sphere{
	public:
		//Default constructor
		liquidgasCar(){numberOfContainers = 2; radius = 3.5; }
		//Variables
		int numberOfContainers;
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
	
