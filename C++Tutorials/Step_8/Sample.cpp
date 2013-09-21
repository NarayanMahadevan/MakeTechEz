#include <iostream>
#include <stdlib.h>
using namespace std;

//Section 1
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
	
	for(number_of_cars = 0; cin >> type; ++number_of_cars){
	  //Section 2
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
		cout << endl;
	}
}
				
				
