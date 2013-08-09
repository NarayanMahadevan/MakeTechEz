// Chapter 9: Classes and Objects

#include <iostream>

using namespace std;

//Global Variables
const double pi = 3.14159;

//Classes
class boxCar{
  public:
		double height, width, length;
};

class tankCar{
	public:
		double radius, length;
};

class flatCar{
	public:
		double width, length;
};

//Functions
double volume(boxCar b){
	return b.height*b.width*b.length;	
}

double volume(tankCar t){
	return pi*t.radius*t.radius*t.length;
}

double volume(flatCar f){
	return 8.25*f.width*f.length;
}

//Main Method
int main(){
	//Objects
	boxCar x;
	tankCar y;
	flatCar z;
	//Setting variables
	x.height = 10.5; x.width = 9.5; x.length = 40.0;
	y.radius = 3.5; y.length = 40;
	z.width = 9.5; z.length = 40.0;
	//Printing the Volume
	cout << "The volume of the box car is " << volume(x) << endl
		 << "The volume of the tank car is " << volume(y) << endl
		 << "The volume of the flat car is " << volume(z) << endl;
}
