#include <iostream>
using namespace std;

const double pi = 3.14159;
class cylinder{
	public:
		double radius, length;
		//Default constructor
		cylinder(){}
		//Functions
		double volume(){ return pi*radius*radius*length;}
};

double d;
double *dptr;
cylinder c;
cylinder *cptr;
//dptr = new double;
//cptr = new cylinder;
cylinder *oil_tank_pointers[100];
int main(){
	int limit;
	double radius, length;
	for(limit = 0; cin >> radius >> length; ++limit){
		oil_tank_pointers[limit] = new cylinder;
		oil_tank_pointers[limit] -> radius = radius;
		oil_tank_pointers[limit] -> length = length;
	}
	double sum = 0.0;
	for(int counter = 0; counter < limit; ++counter){
		sum = sum + oil_tank_pointers[counter] -> volume();
	}
	cout << "The total volume in the " << limit << " storage tanks is " << sum << endl;
}
