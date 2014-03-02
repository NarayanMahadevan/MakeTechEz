#include <iostream>
#include <cmath>
using namespace std;


double roundToInteger(double number){
	return floor(number*1 + .5)/1;
}

double roundToTenths(double number){
	return floor(number*10 + .5)/10;
}

double roundToHundreths(double number){
	return floor(number*100 + .5)/100;
}

double roundToThousandths(double number){
	return floor(number*1000 + .5)/1000;
}

int main(){
	double number;
	cin >> number;
	cout << "The orginal number is " << number << endl
		  << "Roundest to the nearest integer " << roundToInteger(number) << endl
		  << "Roundest to the nearest tenths " << roundToTenths(number) << endl
		  << "Roundest to the nearest hundreths " << roundToHundreths(number) << endl
		  << "Roundest to the nearest thousandths " << roundToThousandths(number) << endl;
	return 0;
}
