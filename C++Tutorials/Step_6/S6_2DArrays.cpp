//
//  Program Name - S6_2DArrays.cpp
//  Series: GetOnToC++ Step: 6
//
//  Purpose: This program illustrates 2D Arrays
//
//  Compile: g++  S6_2DArrays.cpp -o  S6_2DArrays
//  Execute: ./S6_2DArrays
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
using namespace std;

int matrix[10][10];
int main(){
	//Initializing 2D Array
	int counter = 0;
	for(int row = 0; row < 10; row++){
		for(int col = 0; col < 10; col++){
			matrix[row][col] = counter++;
		}
	}
	
	//Printing 2D array
	for(int row = 0; row < 10; row++){
		for(int col = 0; col < 10; col++){
			cout << matrix[row][col] << "	";
		}
		cout << endl;
	}
}
