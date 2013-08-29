//
//  Program Name - S1_SizeOfVar.cpp
//  Series: GetOnToC++ Step: 1
//
//  Purpose: This program outputs the size of C++ in built data types using  
//           sizeof operator 
//
//  Compile: g++ S1_SizeOfVar.cpp -o S1_SizeOfVar
//  Execute: ./S1_SizeOfVar
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
using namespace std;

main ( ) { 
    cout << "Data Type    Bytes" << endl 
         << "char         " << sizeof(char) << endl 
         << "short        " << sizeof(short) << endl 
         << "int          " << sizeof(int) << endl 
         << "long         " << sizeof(long) << endl 
         << "float        " << sizeof(float) << endl 
         << "double       " << sizeof(double) << endl 
         << "long double  " << sizeof(long double) << endl; 
}
