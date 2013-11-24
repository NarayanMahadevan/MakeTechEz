//
//  Program Name - S4_PP2_RatingsSummary.cpp
//  Series: GetOnToC++ Step: 4 Practice Program Num 2
//
//  Purpose: Write a program where twenty students are asked to rate on a scale 
//           of 1 to 5. Their ratings were 1, 2, 5, 4, 3, 5, 2, 1, 3, 15 1, 4, 
//           3, 3, 3, 2, 3, 3, 2, 2, 5 Place the 20 responses in an integer 
//           array and determine the frequency of each rating.
//
//  Compile: g++ S4_PP2_RatingsSummary.cpp -o S4_PP2_RatingsSummary
//  Execute: ./S4_PP2_RatingsSummary
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // define array sizes
    const int responseSize = 20; // size of array responses
    const int frequencySize = 6; // size of array frequency

    // place survey responses in array responses
    const int responses[ responseSize ] = { 1, 2, 5, 4, 3, 5, 2, 1, 3, 1,
                                            4, 3, 3, 3, 2, 3, 3, 2, 2, 5 };

    // initialize frequency counters to 0
    int frequency[ frequencySize ] = {};

    // for each answer, select responses element and use that value
    // as frequency subscript to determine element to increment
    for ( int answer = 0; answer < responseSize; ++answer )
        ++frequency[ responses[ answer ] ];

    cout << "Rating" << setw( 17 ) << "Frequency" << endl; 
    // output each array element's value
    for ( int rating = 1; rating < frequencySize; ++rating )
        cout << setw( 6 ) << rating << setw( 17 ) << frequency[ rating ]
             << endl;
} //end main

/********************************************************************

RESULT:

./S4_PP2_RatingsSummary
Rating        Frequency
     1                3
     2                5
     3                7
     4                2
     5                3

********************************************************************/


