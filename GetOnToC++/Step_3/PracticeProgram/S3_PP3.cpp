#include <iostream>
#include <cmath>
using namespace std;


double get_hypotenuse(){
	double side1,side2, hypotenuse;
	cin >> side1 >> side2;
	hypotenuse = sqrt(side1*side1 + side2*side2);
	return hypotenuse;
}

int main(){
	double hypotenuse;
	hypotenuse = get_hypotenuse();
	cout << "The hypotenuse is " << hypotenuse << endl;
	return 0;
}
