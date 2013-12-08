#include <iostream>
#include <cmath>
using namespace std;


double get_perimeter(double side1, double side2, double side3){
	return side1+side2+side3;
}

double get_area(double base, double height){
	return .5*base*height;
}

int main(){
	double side1,side2,base,height;
	cout << "Please enter two sides, a base and a height ";
	cin >> side1 >> side2 >> base >> height;
	cout << "The perimeter is " << get_perimeter(side1,side2,base) << endl
		  << "The area is " << get_area(base,height) << endl;
	
	return 0;
}
