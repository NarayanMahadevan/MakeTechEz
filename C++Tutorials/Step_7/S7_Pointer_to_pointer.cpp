//
//  Program Name - S7_Pointer_to_pointer.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates how to use arrays in functions
//
//  Compile: g++  S7_Pointer_to_pointer.cpp -o  S7_Pointer_to_pointer
//  Execute: ./S7_Pointer_to_pointer
//
//  Created by Abinav Janakiraman on 15/9/13.
//
#include <iostream>
using namespace std;

int main(){
	int x = 4;
	int y = 5;
	int *a = &x;
	int *b = &y;
	int **c = &a;
	
	cout << "*a = " << *a << endl
		 << "*b = " << *b << endl;
	*c = &y;
	cout << "*a now = " << *a << endl
		 << "*b now = " << *b << endl;
	return 0;
}
