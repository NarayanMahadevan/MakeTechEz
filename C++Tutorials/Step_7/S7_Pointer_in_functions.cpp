//
//  Program Name - S7_Pointer_in_functions.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates how to and the benefits of pointers in functions
//
//  Compile: g++ S7_Pointer_in_functions.cpp -o S7_Pointer_in_functions
//  Execute: ./S7_Pointer_in_functions
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;

//Function that adds two numbers and stores them in the sum pointer variable
void addition(int *sum, int x, int y){
	*sum = x + y;
}

int main(){
	int x = 4;
	int y = 5;
	int sum;
	addition(&sum, x, y);
	
	cout << "The sum is " << sum << endl;
	
	return 0;
}
