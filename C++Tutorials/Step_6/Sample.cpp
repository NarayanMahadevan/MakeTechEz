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

int main(){
	int example[10];
	example[3] = 2;
	cout << example[3] << endl;
	cylinder oil_tanks[3];
	oil_tanks[0].radius = 5; oil_tanks[0].length = 40.0;
	oil_tanks[1].radius = 3; oil_tanks[1].length = 60.0;
	oil_tanks[2].radius = 2; oil_tanks[2].length = 10.0;
	cout << oil_tanks[0].volume() << endl;
	cout << oil_tanks[1].volume() << endl;
	cout << oil_tanks[2].volume() << endl;
}
