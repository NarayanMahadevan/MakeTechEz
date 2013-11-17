    //
    //  Program Name - S4_SP_ArrayDemo.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: Set the array to the even integers from 2 to 20 and Compute 
    //           the sum of the elements of the array.
    //
    //  Compile: g++ S4_SP_ArrayDemo.cpp -o S4_SP_ArrayDemo
    //  Execute: ./S4_SP_ArrayDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() 
    {
        // constant variable can be used to specify array size
        const int arraySize = 10;
        int total = 0;

        int s[ arraySize ]; // array s has 10 elements

        for ( int i = 0; i < arraySize; ++i ) // set the values
            s[ i ] = 2 + 2 * i;

        cout << "Element" << setw( 13 ) << "Value" << endl;

        // output contents of array s in tabular format
        for ( int j = 0; j < arraySize; ++j ) {
            cout << setw( 7 ) << j << setw( 13 ) << s[ j ] << endl;
            total += s[ j ];
        }

        cout << "Total of array elements: " << total << endl;
    } // end main
