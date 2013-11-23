#include <iostream>
using namespace std;

double const pi = 3.14159;

int main(){
	int radius;
	cout << "Please enter a number" << endl;
	cin >> radius;
	int diameter = radius*2;
	int circumference = diameter*pi;
	int area = pi*radius*radius;
	cout << "The diameter is " << diameter << endl
		  << "The circumgerence is " << circumference << endl
		  << "The area is " << area << endl;
	return 0;
}
