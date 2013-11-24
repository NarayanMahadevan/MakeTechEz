//
//  Program Name - S4_PP1_RandomDiceRolling.cpp
//  Series: GetOnToC++ Step: 4 Practice Program Num 1
//
//  Purpose: Store the frequency of 1 to 6 faces in an array of random 
//           dice Rolling of a six-sided dice 6,000,000 times
//
//  Compile: g++ S4_PP1_RandomDiceRolling.cpp -o S4_PP1_RandomDiceRolling
//  Execute: ./S4_PP1_RandomDiceRolling
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function Prototype
void simulateRandomDiceRoll(void);

// Global Variable
const int arraySize = 7; // ignore element zero
int frequency[ arraySize ] = {}; // initialize elements to 0

int main() 
{
    // Call
    simulateRandomDiceRoll();

    // Printing the result
    cout << "Face" << setw( 13 ) << "Frequency" << endl;

    // output each array element's value
    for ( int face = 1; face < arraySize; ++face )
        cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ]
             << endl;
}

// summarize results of 6,000,000 rolls of a die
void simulateRandomDiceRoll(void) 
{
    srand( time( 0 ) ); // seed random number generator 
    
    // roll die 6,000,000 times; use die value as frequency index
    for ( int roll = 1; roll <= 6000000; ++roll )
        ++frequency[ 1 + rand() % 6 ];
}


/********************************************************************

RESULT:

$ ./S4_PP1_RandomDiceRolling
Face    Frequency
   1      1000155
   2       999544
   3      1000491
   4      1000444
   5       998973
   6      1000393

********************************************************************/

