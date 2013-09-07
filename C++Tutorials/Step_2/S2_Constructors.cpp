//
//  Program Name - S2_Constructors.cpp
//  Series: GetOnToC++ Step: 2
//
//  Purpose: This program shows the difference between default and specified constructors.
//
//  Compile: g++ S2_Constructors.cpp -o S2_Constructors
//  Execute: ./S2_Constructors
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
};

int main(){
	exampleClass example;
	exampleClass specified(15, 10, 10);
	cout << "The default height is " << example.height << endl
		 << "The defualt width is " << example.width << endl
		 << "The defualt length is " << example.length << endl
		 << "The specified height is " << specified.height << endl
		 << "The specified width is " << specified.width << endl
		 << "The specified length is " << specified.length << endl;
}
