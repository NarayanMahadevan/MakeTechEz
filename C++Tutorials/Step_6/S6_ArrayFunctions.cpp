//
//  Program Name - S6_ArrayFunctions.cpp
//  Series: GetOnToC++ Step: 6
//
//  Purpose: This program illustrates how to use arrays in functions
//
//  Compile: g++  S6_ArrayFunctions.cpp -o  S6_ArrayFunctions
//  Execute: ./S6_ArrayFunctions
//
//  Created by Abinav Janakiraman on 05/10/13.
//
#include <iostream>
using namespace std;

//Functions that takes an array and its size as parameters, then prints the array
void print_array(int input[], int size){
	for(int x = 0; x < size; x++){
		cout << input[x] << " " << endl;
	}
}

int main(){
	//Intializing the array
	int example[3] = {1, 3, 5};
	//Calling the print_array function
	print_array(example, 3);
	return 0;
}
