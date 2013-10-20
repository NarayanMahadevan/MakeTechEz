//
//  Program Name - Step_10.cpp
//  Series: GetOnToC++ Step: 10
//
//  Purpose: This program shows how to return strings as well as use call-by-reference
//
//  Compile: g++ Step_10.cpp -o Step_10
//  Execute: ./Step_10
//
//  Created by Narayan Mahadevan on 18/08/13.
//  
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
		virtual char* name(){return "railroad_car";}
		virtual double capacity(){ return 0.0;}
		//Variables
		int percent_loaded = 0;
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
		double read_height(){return height;}
		double read_width(){return width;}
		double read_length(){return length;}
	private:
		double height, width, length;
};

class cylinder{
	public:
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
		virtual double height(){return read_height();}
		virtual char* name(){return "box_car";}
		virtual double capacity(){return volume();}
};
class tank_car : public railroad_car, public cylinder{
	public: 
		tank_car() : cylinder(10.5,20){}
		virtual double radius(){return read_radius();}
		virtual char* name(){return "tank_car";}
		virtual double capacity(){return volume();}
};
class engine : public railroad_car{
	public: 
		engine(){}
		virtual char* name(){return "engine";}
};
class caboose : public railroad_car{
	public : 
		caboose(){}
		virtual char* name(){return "caboose";}
};

enum {engine_code, box_code, tank_code, caboose_code};

//Functions

void	loading_function(railroad_car *b){
	b -> percent_loaded = 100;
}

void	loading_function(railroad_car b){
	b.percent_loaded = 100;
}

railroad_car *train[100];

int main(){
	int n, number_of_cars, type;
	
	for(number_of_cars = 0; cin >> type; ++number_of_cars){
		switch (type){
			case engine_code: train[number_of_cars] = new engine;
				loading_function(train[number_of_cars]);
				break;
			case box_code: train[number_of_cars] = new box_car;
				loading_function(train[number_of_cars]);
				break;
			case tank_code: train[number_of_cars] = new tank_car;
				loading_function(*train[number_of_cars]);
				break;
			case caboose_code: train[number_of_cars] = new caboose;
				loading_function(*train[number_of_cars]);
				break;
			default: cerr << "Car code " << type << " is unkown." << endl;
				exit (0);
		}
	}
		
	for( n = 0; n < number_of_cars; ++n){
	
		cout << train[n] -> name()
			  << "\t"
			  << train[n] -> capacity()
			  << "\t"
			  << train[n] -> percent_loaded
			  << endl;
	}
}
				
				
