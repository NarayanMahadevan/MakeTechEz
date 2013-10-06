#include <stdlib.h>
#include <iostream>

using namespace std;

//Global Variables
const double pi = 3.14159;
//Classes
class railroad_car{
	public:
		//Default constructor
		railroad_car(){}
		//Functions
		virtual void display_name(){}
		virtual void display_capacity(){}
};

class box{
	public:
		//Default constructor
		box(){}
		//Argument-bearing constructor
		box(double h, double w, double l){
			height = h; width = w; length = l;
		}
		//Functions
		double volume(){return height*width*length; }
		//Variables
		double height, width, length;
};



class box_car : public railroad_car, protected box{
	public:
		//Default constructor
		box_car() : box(10.5,9.5,40.0) {}
		virtual void display_height(){cout << height << endl;}
		virtual void display_name(){cout << "box_car";}
		virtual void display_capacity(){cout << volume();}
};
int main(){
	box_car example;
	//cout << example.height<< endl; DOES NOT WORK
	example.display_height();
	box b;
	cout << b.height << endl; //Does work, however since box has no default constructor, return random number
	return 0;
}
				
				
