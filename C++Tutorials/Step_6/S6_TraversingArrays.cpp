//
//  Program Name - S6_TraversingArrays.cpp
//  Series: GetOnToC++ Step: 6
//
//  Purpose: This program illustrates how to use arrays in functions
//
//  Compile: g++  S6_TraversingArrays.cpp -o  S6_TraversingArrays
//  Execute: ./S6_TraversingArrays
//
//  Created by Abinav Janakiraman on 05/10/13.
//
#include <iostream>
using namespace std;


int main(){
	//Creating and intializing the array
	int example[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	//For loop to traverse through the array
	for(int x = 0; x < 10; x++){
		sum += example[x];
	}
	//Pringing the sum of the elements of the array
	cout << sum << endl;
	return 0;
}
	
