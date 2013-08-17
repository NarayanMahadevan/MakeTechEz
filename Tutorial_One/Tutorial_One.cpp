#include <iostream>

using namespace std;

int boxCarVolume(int h, int w, int l){
	return h*w*l;
}

double boxCarVolume(double h, double w, double l){
	return h*w*l;
}

void displayBoxCarVolume(int h, int w, int l){
	cout << "The volume of the box car is " << h*w*l << endl;
}

void displayBoxCarVolume(double h, double w, double l){
	cout << "The volume of the box car is " << h*w*l << endl;
}

int main(){
	int height, width, length,stretch = 10;
	cout << "Please enter the height, width and length of the box car\n";
	cin >> height >> width >> length;
	displayBoxCarVolume(height,width,length);
	cout << "The volume of an elongated box car is " 
		 << boxCarVolume(height, width, length + stretch)
		 << endl;
	cout << "Please enter the floating point value for the height, width and length of the box car\n";
	double doubleHeight, doubleWidth, doubleLength;
	cin >> doubleHeight >> doubleWidth >> doubleLength;
	displayBoxCarVolume(doubleHeight, doubleWidth, doubleLength);
	cout << "The volume of an elongated box car is " 
		 << boxCarVolume(doubleHeight, doubleWidth, doubleLength + (double)stretch)
		 << endl;
	return 0;	
}
