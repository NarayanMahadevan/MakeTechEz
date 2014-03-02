    //
    //  Program Name - S5_SP_FunctionPointers.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates function pointers to sort an array in
    //           Ascending or Descending order using Selection Sort Algorithm.
    //
    //  Compile: g++ S5_SP_FunctionPointers.cpp -o exe/S5_SP_FunctionPointers
    //  Execute: exe/S5_SP_FunctionPointers
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // prototypes
    void selectionSort( int [], const int, bool (*)( int, int ) );
    void swap( int * const, int * const );
    bool ascending( int, int ); // implements ascending order
    bool descending( int, int ); // implements descending order

    int main()
    {
        const int arraySize = 10;
        int order; // 1 = ascending, 2 = descending
        int counter; // array index
        int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

        cout << "Enter 1 to sort in ascending order,\n"
             << "Enter 2 to sort in descending order: ";
        cin >> order;
        cout << "\nData items in original order\n";

        // output original array
        for ( counter = 0; counter < arraySize; ++counter )
            cout << setw( 4 ) << a[ counter ];

        // Sort array in ascending order; pass function ascending as an argument 
        // to specify ascending sorting order
        if (order==1) {
            selectionSort( a, arraySize, ascending );
            cout << "\nData items in ascending order\n";
        } // end if

        // Sort array in descending order; pass function descending
        // as an argument to specify descending sorting order
        else {
            selectionSort( a, arraySize, descending );
            cout << "\nData items in descending order\n";
        } // end else part of if...else

        // output sorted array
        for ( counter = 0; counter < arraySize; ++counter )
            cout << setw( 4 ) << a[ counter ];

        cout << endl;
    } //endmain    

    // Function selectionSort receives a pointer to a function—either function 
    // ascending or function descending—as an argument in addition to the 
    // integer array to sort and the size of the array. 

    // Multipurpose selection sort; the parameter compare is a pointer to 
    // the comparison function that determines the sorting order
    void selectionSort( int work[], const int size,
                        bool (*compare)( int, int ) )
    {
        int smallestOrLargest; // index of smallest (or largest) element
        // loop over size - 1 elements
        for ( int i = 0; i < size - 1; ++i ) {
            smallestOrLargest = i; // first index of remaining vector 
            // loop to find index of smallest (or largest) element
            for ( int index = i + 1; index < size; ++index )
                if ( !(*compare)( work[ smallestOrLargest ], work[ index ] ) )
                    smallestOrLargest = index;

            swap ( &work[ smallestOrLargest ], &work[ i ] );
        } // end if
    } // end function selectionSort

    // swap values at memory locations to which
    // element1Ptr and element2Ptr point
    void swap( int * const element1Ptr, int * const element2Ptr ) 
    {
        int hold = *element1Ptr; 
        *element1Ptr = *element2Ptr; 
        *element2Ptr = hold;
    } // end function swap

    // Determine whether element a is less than element b for an ascending 
    // order sort
    bool ascending( int a, int b )
    {
        return a < b; // returns true if a is less than b
    } // end function ascending

    // Determine whether element a is greater than element b for a descending 
    // order sort
    bool descending( int a, int b )
    {
        return a > b; // returns true if a is greater than b
    } // end function descending

/********************************************************************

RESULT:

    exe/S5_SP_FunctionPointers
    Enter 1 to sort in ascending order,
    Enter 2 to sort in descending order: 1

    Data items in original order
       2   6   4   8  10  12  89  68  45  37
    Data items in ascending order
       2   4   6   8  10  12  37  45  68  89

    exe/S5_SP_FunctionPointers
    Enter 1 to sort in ascending order,
    Enter 2 to sort in descending order: 2

    Data items in original order
       2   6   4   8  10  12  89  68  45  37
    Data items in descending order
      89  68  45  37  12  10   8   6   4   2

********************************************************************/

