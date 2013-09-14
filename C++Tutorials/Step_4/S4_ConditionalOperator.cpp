//
//  Program Name - S4_ConditionalOperator.cpp
//  Series: GetOnToC++ Step: 4
//
//  Purpose: This program illustrates how to use the Conditional operator
//
//  Compile: g++ S4_ConditionalOperator.cpp -o S4_ConditionalOperator
//  Execute: ./S4_ConditionalOperator
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
using namespace std;

int main(){
	int temp;
	cin >> temp;
	cout << "The temperature is "
		 << temp
		 << (temp == 1 ? " degree" : " degrees") //Boolean expression ? if-true expression : if false expression
		 << endl;
}
