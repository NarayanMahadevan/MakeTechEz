//
//  Program Name - S2_MemberFunctions.cpp
//  Series: GetOnToC++ Step: 2
//  Purpose: This program shows how member functions make computations easier
//
//  Compile: g++ S2_MemberFunctions.cpp -o S2_MemberFunctions
//  Execute: ./S2_MemberFunctions
//
//  Created by Narayan Mahadevan on 18/08/13.
//  
#include <iostream>
using namespace std;

class exampleClass{
	public:
		double height, width, length;
		exampleClass(){height = 10; width = 5; length = 15; };
		exampleClass(double h, double w, double l){height = h; width = w; length = l; };
		double volume(){return height*width*length;};
};

double volume(double h, double w, double l){
	return h*w*l;
}

int main(){
	exampleClass example;
	cout << "Using the volume function not tied to a class " << endl
		 << volume(example.height, example.width, example.length)<< endl;
	cout << "Using the volume member function " << endl
		 << example.volume() << endl;
}
