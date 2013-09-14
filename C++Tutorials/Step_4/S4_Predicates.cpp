//
//  Program Name - S4_Predicate.cpp
//  Series: GetOnToC++ Step: 4
//
//  Purpose: This program illustrates how to perform a comparison of two different variable types
//
//  Compile: g++ S4_Predicate.cpp -o S4_Predicate
//  Execute: ./S4_Predicate
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
using namespace std;
int main(){
	int i = 10;
	double d = 10.0;
	cout << "i = (int) d	  yeilds " << (i == (int) d) << endl
		 << "(double) i != d   yeilds " << ((double) i != d) << endl
		 << "i > (int) d	  yeilds " << (i > (int) d) << endl
		 << "(double) i < d	  yeilds " << ((double) i < d) << endl
		 << "i >= (int) d 	  yeilds " << (i >= (int) d) << endl
		 << "(double) i <= d   yeilds " << ((double) i <= d) << endl;
}
