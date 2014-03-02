#include <iostream>
#include <cmath>
using namespace std;


double get_hypotenuse(){
	double side1,side2, diagonal;
	cin >> side1 >> side2;
	diagonal = sqrt(side1*side1 + side2*side2);
	return diagonal;
}

int main(){
	double diagonal;
	hypotenuse = get_diagonal();
	cout << "The diagonal length is " << diagonal << endl;
	return 0;
}
