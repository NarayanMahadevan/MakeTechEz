//
//  Program Name - S7_Pointer_Operations.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates how to use arithmetic operations on pointers
//
//  Compile: g++ S7_Pointer_Operations.cpp -o S7_Pointer_Operations
//  Execute: ./S7_Pointer_Operations
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;

int main(){
	int x = 4;
	int y = 5;
	int *a = &x;
	int *b = &y;
	
	cout << "*a = " << *a << endl
		 << "*b = " << *b << endl;
		 
	*a = *a + *b;
	*b = *b**b;
	
	cout << "*a now = " << *a << endl
		 << "*b now = " << *b << endl;
	
	return 0;
}

