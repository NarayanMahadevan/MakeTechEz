    //
    //  Program Name - S4_SP_PassingArray.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This program demonstrates passing array to function. Firstly
    //           Array is passed as reference, then an array element is passed
    //           by value and finally a const array is passed to function. You
    //           will notice when const array is passed no modification to the 
    //           array element is possible
    //
    //  Compile: g++ S4_SP_PassingArray.cpp -o S4_SP_PassingArray
    //  Execute: ./S4_SP_PassingArray
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // function prototype
    void modifyArray( int [], int ); // array and its size for modification
    void modifyElement( int ); // receive array element value
    void printArray( const int [], int ); // Const array for print

    int main()
    {
        const int arraySize = 5; // size of array a
        int a[ arraySize ] = { 0, 1, 2, 3, 4 }; // initialize array a

        cout << "Effects of passing entire array by reference:"
             << "\nThe values of the original array are:\n";

        // output original array elements.
        // Here array a is passed by reference and as a const array and hence 
        // cannot be modified
        printArray(a, arraySize);

        // Here array a is passed by reference to modifyArray function
        modifyArray(a, arraySize);

        cout << "The values of the modified array are:\n"; 
        // output modified array elements
        printArray(a, arraySize);

        cout << "\nEffects of passing array element by value:"
             << "\na[3] before modifyElement: " << a[ 3 ] << endl;

        modifyElement( a[ 3 ] ); // pass array element a[ 3 ] by value
        cout << "a[3] after modifyElement: " << a[ 3 ] << endl;

    } // end main

    // In function modifyArray, "b" points to the original array "a" in memory
    void modifyArray( int b[], int sizeOfArray )
    {
        // multiply each array element by 2
        for ( int k = 0; k < sizeOfArray; ++k )
            b[ k ] *= 2;
    } // end function modifyArray

    // In function modifyElement, "e" is a local copy of
    // array element a[ 3 ] passed from main
    void modifyElement( int e )
    {
        // multiply parameter by 2
        cout << "Value of element in modifyElement: " << ( e *= 2 ) << endl;
    } // end function modifyElement

    // In function printArray, "b" cannot be used to modify the original 
    // array "a" in main.
    void printArray( const int b[], int sizeOfArray )
    {
        // b[ 0 ] /= 2; Any Modification will result in compilation error
        // output modified array elements
        for(int j=0; j < sizeOfArray; ++j)
            cout << setw( 3 ) << b[ j ];
        cout << endl;
    } // end function printArray

/********************************************************************

RESULT:

    $ ./S4_SP_PassingArray
    Effects of passing entire array by reference:
    The values of the original array are:
      0  1  2  3  4
    The values of the modified array are:
      0  2  4  6  8

    Effects of passing array element by value:
    a[3] before modifyElement: 6
    Value of element in modifyElement: 12
    a[3] after modifyElement: 6


********************************************************************/

