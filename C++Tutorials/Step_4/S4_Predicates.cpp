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
	//Series of examples to show what happens when variables are cast into different types
	cout << "i = (int) d	  yeilds " << (i == (int) d) << endl //casting d as an int and seeing if equal to i
		 << "(double) i != d   yeilds " << ((double) i != d) << endl // casting i as a double and seeing if not equal to d
		 << "i > (int) d	  yeilds " << (i > (int) d) << endl // casting d as an int and seeing if less then d
		 << "(double) i < d	  yeilds " << ((double) i < d) << endl //casting i as a double and seeing if less then d
		 << "i >= (int) d 	  yeilds " << (i >= (int) d) << endl // casting d as a int and seeing if less then or equal to i
		 << "(double) i <= d   yeilds " << ((double) i <= d) << endl;// casting i as a double and seeing if less then or equal to d 
}
