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
	protected:
		double read_height(){return height;)
		double read _width(){return width;}
		double read_length(){return lenght;}
	private:
		double height, width, length
};

class cylinder{
	public:
		double radius, length;
		//Default constructor
		cylinder(){}
		//Argument-bearing constructor
		cylinder(double r, double l){
			radius = r; length = l;
		}
		//Functions
		double volume(){ return pi*radius*radius*length;}
	protected:
		double read_radius(){return radius;}
		double read_length(){return length;}
	private:
		double radius, length;
};

class box_car : public railroad_car, public box{
	public:
		//Default constructor
		box_car() : box(10.5,9.5,40.0) {}
		virtual void display_height(){cout << height;}
		virtual void display_name(){cout << "box_car";}
		virtual void display_capacity(){cout << volume();}
};
class tank_car : public railroad_car, public cylinder{
	public: 
		tank_car() : cylinder(10.5,20){}
		virtual void display_height(){cout << radius;}
		virtual void display_name(){cout << "tank_car";}
		virtual void display_capacity(){cout << volume();}
};
class engine : public railroad_car{
	public: 
		engine(){}
		virtual void display_name(){cout << "engine";}
};
class caboose : public railroad_car{
	public : 
		caboose(){}
		virtual void display_name(){cout << "caboose";}
};

enum {engine_code, box_code, tank_code, caboose_code};

railroad_car *train[100];
int main(){
	int n, number_of_cars, type;
	
	for(number_of_cars = 0; cin >> type; ++number_of_cars){
		switch (type){
			case engine_code: train[number_of_cars] = new engine;
				break;
			case box_code: train[number_of_cars] = new box_car;
				break;
			case tank_code: train[number_of_cars] = new tank_car;
				break;
			case caboose_code: train[number_of_cars] = new caboose;
				break;
			default: cerr << "Car code " << type << " is unkown." << endl;
				exit (0);
		}
	}
		
	for( n = 0; n < number_of_cars; ++n){
	
		train[n] -> display_name();
		cout << "       ";
		train[n] -> display_capacity();
		cout << endl;
	}
}
				
				
