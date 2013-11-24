#include <iostream>
using namespace std;

double const pi = 3.14159;

int main(){
	double radius;
	cout << "Please enter a number" << endl;
	cin >> radius;
	double diameter = radius*2;
	double circumference = diameter*pi;
	double area = pi*radius*radius;
	cout << "The diameter is " << diameter << endl
		  << "The circumgerence is " << circumference << endl
		  << "The area is " << area << endl;
	return 0;
}
