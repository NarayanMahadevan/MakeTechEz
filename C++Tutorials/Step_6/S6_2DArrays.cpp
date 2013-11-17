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
//Creating a two dimensional array
int matrix[10][10];
int main(){
	//Initializing 2D Array
	int counter = 0;
	for(int row = 0; row < 10; row++){ //For loop to traverse the rows
		for(int col = 0; col < 10; col++){ //For loop to traverse each column of each row
			matrix[row][col] = counter++; //Setting matrix[row][col] to counter
		}
	}
	
	//Printing 2D array
	for(int row = 0; row < 10; row++){ //For loop to traverse the rows
		for(int col = 0; col < 10; col++){ //For loop to traverse each column of each row
			cout << matrix[row][col] << "	"; //Printing the value of matrix[row][col]
		}
		cout << endl;
	}
}
