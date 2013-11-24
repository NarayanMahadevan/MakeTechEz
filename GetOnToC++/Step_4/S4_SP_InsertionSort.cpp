    //
    //  Program Name - S4_SP_InsertionSort.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This program sorts the 10-element array data with values 
    //           34 56 4 10 77 51 93 30 5 52 into ascending order using 
    //           Insertion Sort Alogorithm.
    //
    //  Compile: g++ S4_SP_InsertionSort.cpp -o S4_SP_InsertionSort
    //  Execute: ./S4_SP_InsertionSort
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // function prototype
    void doInsertionSort( int [], int ); // Sort Array using Insertion Sort
    void doBubbleSort( int [], int ); // Sort Array using Bubble Sort
    void printArray( const int [], int ); // Const array for print

    int main()
    {
        const int arraySize = 10; // size of array a
        int data[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };

        cout << "Unsorted array:\n";
        printArray(data, arraySize); // output original array

        // Sorting Array using insertion Sort
        doInsertionSort(data, arraySize);
        cout << "\nSorted array after Insertion Sort:\n";
        printArray(data, arraySize); // output sorted array

        // Sorting Array using Bubble Sort
        doBubbleSort(data, arraySize);
        cout << "\nSorted array after Bubble Sort:\n";
        printArray(data, arraySize); // output sorted array
    } // end main

    // Sort Array using insertion Sort
    // Note here the array data is the local variable pointing to the same 
    // memory location as the array data in the main function. This is because 
    // the original data array in the main function is passed by reference
    void doInsertionSort( int data[], int arraySize)
    {
        int insert; // temporary variable to hold element to insert
        int iter = 0; // This tracks the number of iteration needed for Sorting

        // loop over the elements of the array
        for ( int next = 1; next < arraySize; ++next )
        {
            insert = data[ next ]; // store the value in the current element
            int moveItem = next; // initialize location to place element
            iter++; // Incrementing the Iteration

            // Search for the location in which to put the current element
            // In the while loop re-soring is done upto the current iteration
            while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
            {
                iter++; // Incrementing the Iteration
                // shift element one slot to the right
                data[ moveItem ] = data[ moveItem - 1 ];
                moveItem--;
            } // end while

            // place inserted element into the array at the appropriate location
            // identified by moveItem array position
            data[ moveItem ] = insert; 
        } // end for    

        cout << "\nNumber of Iteration needed for Sorting is: " << iter << endl;
    } // end of function doInsertionSort

    // Sort Array using Bubble Sort
    void doBubbleSort( int a[], int size) 
    {
        int hold;

        // Variable to track the number of iteration needed 
        // for Sorting
        int iter = 0; 

        // Boolean to Check if the Sorting is complete
        bool isSortComplete = true; 

        // loop over the elements of the array
        for ( int pass = 1; pass < size; pass++ )
        {
            isSortComplete = true;
            iter++; // Incrementing the Iteration
            for ( int j = 0; j < size - 1; j++ )
            {
                iter++; // Incrementing the Iteration
                if ( a[j] > a [j+1] ) {
                    isSortComplete = false;
                    hold = a[j];
                    a[j] = a [j+1];
                    a [j+1] = hold;
                }
            } // end inner for loop

            // Breaking out of for loop if soring is complete
            if (isSortComplete) break;
        } // end for loop

        cout << "\nNumber of Iteration needed for Sorting is: " << iter << endl;
    } // end of function doBubbleSort

    // In function printArray, "b" cannot be used to modify the original 
    // array "a" in main.
    void printArray( const int b[], int sizeOfArray )
    {
        // b[ 0 ] /= 2; Any Modification will result in compilation error
        // output modified array elements
        for(int j=0; j < sizeOfArray; ++j)
            cout << setw( 4 ) << b[ j ];
        cout << endl;
    } // end function printArray

/********************************************************************

RESULT:

    ./S4_SP_InsertionSort
    Unsorted array:
      34  56   4  10  77  51  93  30   5  52

    Number of Iteration needed for Sorting is: 30

    Sorted array after Insertion Sort:
       4   5  10  30  34  51  52  56  77  93

    Number of Iteration needed for Sorting is: 10

    Sorted array after Bubble Sort:
       4   5  10  30  34  51  52  56  77  93

********************************************************************/


