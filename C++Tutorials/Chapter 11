//Chapter 11: Class Constructors

#include <iostream>

using namespace std;

//Global Variables
const double pi = 3.14159;

//Classes
class boxCar{
  public:
		boxCar();
		boxCar(double h, double w, double l);
		double height, width, length;
		double volume();
};

class tankCar{
	public:
		tankCar();
		tankCar(double r, double l);
		double radius, length;
		double volume();
};

class flatCar{
	public:
		flatCar();
		flatCar(double w, double l);
		double width, length;
		double volume();
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

//Main Method
int main(){
	//Objects using constructors
	boxCar a;
	boxCar b(10.5,9.5,30.0);
	tankCar y;
	tankCar z(3.5,30.0);
	flatCar m;
	flatCar n(3.5, 30.0);
	//Printing the Volume
	cout << "The volume of the default box car is " << a.volume() << endl
		 << "The volume of the specified box car is " << b.volume() << endl
		 << "The volume of the default tank car is " << y.volume() << endl
		 << "The volume of the specified tank car is " << z.volume() << endl
		 << "The volume of the default flat car is " << m.volume() << endl
		 << "The volume of the specified fat car is " << n.volume() << endl;
	return 1;
}	
