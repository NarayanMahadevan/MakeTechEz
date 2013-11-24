    //
    //  Program Name - S4_SP_2DArrayDemo.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This program demonstrates different ways of initializing 
    //           2D Array during Declaration.
    //
    //  Compile: g++ S4_SP_2DArrayDemo.cpp -o S4_SP_2DArrayDemo
    //  Execute: ./S4_SP_2DArrayDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    #include <string.h>
    using namespace std;

    // Function Prototype to print Array
    // The printArray function is used to output each array’s elements.
    void printArray( const int [][ 3 ] ); 

    const int rows = 2;
    const int columns = 3;

    int main()
    {
        // Local Array Variable initialization

        // The declaration of array1 provides six initializers in two sublists.
        // The first sublist initializes row 0 of the array to 1, 2 and 3; while 
        // the second sublist initializes row 1 of the array to 4, 5, and 6
        // Note: array1 can also be initialized as { 1, 2, 3, 4, 5, 6 };
        int array1[ rows ][ columns ] = { { 1, 2, 3 }, { 4, 5, 6 } };

        // The declaration of array2 provides only five initializers. Firstly 
        // the row 0 is initialized with the first 3 elements 1, 2 and 3 then 
        // row 1 is initialized with 4, 5 and 0. 
        // Note: Any elements that do not have an explicit initializer are 
        // initialized to zero, so array2[1][2] is initialized to zero.
        int array2[ rows ][ columns ] = { 1, 2, 3, 4, 5 };

        // The declaration of array3 provides three initializers in two sublists. 
        // The sublist for row 0 explicitly initializes the first two elements of 
        // row 0 to 1 and 2; the third element is implicitly initialized to zero. 
        // The sublist for row 1 explicitly initializes the first element to 4 and 
        // implicitly initializes the last two elements to zero.
        int array3[ rows ][ columns ] = { { 1, 2 }, { 4 } };

        cout << "Values in array1 by row are:" << endl;
        printArray( array1 );

        cout << "\nValues in array2 by row are:" << endl;
        printArray( array2 );

        cout << "\nValues in array3 by row are:" << endl;
        printArray( array3 );

        int array4[ rows ][ columns ] = {};

        cout << "Values in array4 by row before:" << endl;
        printArray( array4 );

        memcpy(array4, array1, sizeof(array4)); 

        cout << "Values in array4 by row after:" << endl;
        printArray( array4 );

    } // end main


    // The printArray function is used to output each array’s elements.
    // Note that the function prototype and definition specify the parameter 
    // const int a[][columns]. When a function receives a one-dimensional array 
    // as an argument, the array brackets are empty in the function’s parameter 
    // list. The size of a two-dimensional array’s first dimension i.e. the 
    // number of rows is not required either, but all subsequent dimension sizes 
    // are required. The compiler uses these sizes to determine the locations in 
    // memory of elements in multidimensional arrays. 
    void printArray( const int a[][ columns ] )
    {
        // loop through array's rows
        for ( int i = 0; i < rows; ++i )
        {
            cout << "Row # " << i+1 << ": ";
            // loop through columns of current row
            for ( int j = 0; j < columns; ++j )
                cout << a[ i ][ j ] << ' ';
            cout << endl; // start new line of output
        } // end outer for
    } // end function printArray


/********************************************************************

RESULT:

    $ ./S4_SP_2DArrayDemo
    Values in array1 by row are:
    Row # 1: 1 2 3 
    Row # 2: 4 5 6 

    Values in array2 by row are:
    Row # 1: 1 2 3 
    Row # 2: 4 5 0 

    Values in array3 by row are:
    Row # 1: 1 2 0 
    Row # 2: 4 0 0 

********************************************************************/

