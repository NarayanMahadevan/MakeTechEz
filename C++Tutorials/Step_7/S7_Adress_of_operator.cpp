//
//  Program Name - S7_Adress_of_operator.cpp
//  Series: GetOnToC++ Step: 7
//
//  Purpose: This program illustrates the adress of Operator
//
//  Compile: g++ S7_AdressOfOperator.cpp -o S7_Adress_of_operator
//  Execute: ./S7_Adress_of_operator
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;
int main(){

	int i = 5;
	//creating an int pointer
	int *iptr;
	//Poinitng the integer pointer to the adress i is stored at
	iptr = &i;
	
	cout << "i = " << i << endl;
	//Changing the value of i using the pointer
	*iptr = 10;
	
	cout << "i = " << i << endl;
}
