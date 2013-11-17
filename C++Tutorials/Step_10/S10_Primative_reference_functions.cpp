//
//  Program Name - S10_Primative_reference_functions.cpp
//  Series: GetOnToC++ Step: 10
//
//  Purpose: This program shows that call-by-reference can be used with all types
//
//  Compile: g++ S10_Primative_reference_functions.cpp -o S10_Primative_reference_functions
//  Execute: ./S10_Primative_reference_functions
//
//  Created by Narayan Mahadevan on 18/08/13.
//  
#include <iostream>
using namespace std;

void sum(int a, int b, int sum*){
	*sum = a + b;
}

int main(){
	int a = 1, b = 2, sum = 0;
	sum(a,b,&sum);
	cout << sum << endl;
}
