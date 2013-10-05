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



void print_array(int input[], int size){
	for(int x = 0; x < size; x++){
		cout << input[x] << " " << endl;
	}
}

int main(){
	int example[3] = {1, 3, 5};
	print_array(example, 3);
	return 0;
}
