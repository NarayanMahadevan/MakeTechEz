//
//  Program Name - S4_ArraysInLoops.cpp
//  Series: GetOnToC++ Step: 4
//
//  Purpose: This program iteration statements and arrays. Arrays are discussed in the next tutorial
//
//  Compile: g++ S4_ArraysInLoops.cpp -o S4_ArraysInLoops
//  Execute: ./S4_ArrayInLoops
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;

int main(){
	//Creating an array
	int example[10];
	//Initializing an array
	for(int x = 0; x< 10; x++){
		example[x] = x;
	}
		//Printing the array
	for(int x = 0; x< 10; x++){
		cout << example[x] << endl;
	}
	cout << "New Array" << endl;
	//Changing the value of the array values
	for(int x = 0; x<10; x++){
		example[x] = example[x]*2;
	}
	//Printing the array
	for(int x = 0; x< 10; x++){
		cout << example[x] << endl;
	}
}
