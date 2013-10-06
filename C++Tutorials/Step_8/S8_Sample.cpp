//
//  Program Name - S8_Sample.cpp.cpp
//  Series: GetOnToC++ Step: 8
//
//  Purpose: This program illustrates how to change the values of enumerated types
//
//  Compile: g++ S8_Sample.cpp.cpp -o S8_Sample.cpp
//  Execute: ./S8_Sample.cpp
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
#include <stdlib.h>
using namespace std;

//Section 1
//Classes
class railroad_car{
	public: 
		railroad_car(){}
		virtual void display_name(){cout << "railroad_car";}
};
class box_car : public railroad_car{
	public: 
		box_car(){}
		virtual void display_name(){cout << "box_car";}
};
class tank_car : public railroad_car{
	public: 
		tank_car(){}
		virtual void display_name(){cout << "tank_car";}
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

railroad_car *train[100];
//Section 3
enum {engine_code, box_code, tank_code, caboose_code};

int main(){
	int n, number_of_cars, type;
	//Fow loop that takes in inputs and creates a car based on number inputed
	for(number_of_cars = 0; cin >> type; ++number_of_cars){
	  //Section 2
	  	//Switch statements to take care of the different cases
		switch (type){
			//Enumerated types are used to improve readability
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
	//For loop that prints the name of each car in the train in order	
	for( n = 0; n < number_of_cars; ++n){
		train[n] -> display_name();
		cout << endl;
	}
}
				
				
