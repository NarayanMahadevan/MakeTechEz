//
//  Program Name - S7_Pointer_to_pointer.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates how to use a pointer to a pointer. 
//
//  Compile: g++  S7_Pointer_to_pointer.cpp -o  S7_Pointer_to_pointer
//  Execute: ./S7_Pointer_to_pointer
//
//  Created by Abinav Janakiraman on 15/9/13.
//
#include <iostream>
using namespace std;

int main(){
	//Two integers
	int x = 4;
	int y = 5;
	//Two pointers that point to the two integers above
	int *a = &x;
	int *b = &y;
	//A pointer that points to  pointer a
	int **c = &a;
	//Printing the original values of *a and *b
	cout << "*a = " << *a << endl
		 << "*b = " << *b << endl;
	//Changing what *c(in other words, a) points to	 
	*c = &y;
	//Printing the new values of *a and *b
	cout << "*a now = " << *a << endl
		 << "*b now = " << *b << endl;
	return 0;
}
