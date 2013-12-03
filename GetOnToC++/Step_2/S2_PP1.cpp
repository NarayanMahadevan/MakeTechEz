//
//  Program Name - S2_PP1.cpp
//  Series: GetOnToC++ Step: 2 Practice Program Num 1
//
//  Purpose: This program calculates the sum of the integers from 1 to 10
//
//  Compile: g++ S2_PP1.cpp -o S2_PP1
//  Execute: ./S2_PP1
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() 
{
    int sum; // stores sum of integers 1 to 10
    int x; // counter

    x = 1; // count from 1
    sum = 0; // initialize sum

    while ( x <= 10 ) // loop 10 times
    {
        sum += x; // add x to sum
        ++x; // increment x
    } // end while

    cout << "The sum is: " << sum << endl;
} // end main
