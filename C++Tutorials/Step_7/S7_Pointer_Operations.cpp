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
	//creating two pointers that point to x and y
	int *a = &x;
	int *b = &y;
	//printing the original values of x and y
	cout << "x = " << x << endl
		 << "y = " << y << endl;
	//doing math operations using only the pointers	 
	*a = *a + *b;
	*b = *b**b;
	//printing the changed values of x and y
	cout << "x now = " << x << endl
		 << "y now = " << y << endl;
	
	return 0;
}

