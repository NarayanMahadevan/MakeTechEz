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
	int example[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	for(int x = 0; x < 10; x++){
		sum += example[x];
	}
	cout << sum << endl;
	return 0;
}
	
