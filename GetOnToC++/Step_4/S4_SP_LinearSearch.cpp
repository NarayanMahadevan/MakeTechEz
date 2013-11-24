    //
    //  Program Name - S4_SP_LinearSearch.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This program demonstrated whether an array contains a value 
    //           that matches a certain key using a Linear Search Technique
    //
    //  Compile: g++ S4_SP_LinearSearch.cpp -o S4_SP_LinearSearch
    //  Execute: ./S4_SP_LinearSearch
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // Function Prototype 

    // Search Element using lenear search
    int linearSearch( const int [], int, int ); 

    // Search Element using binary search
    int binarySearch( const int [], int, int, int, int ); 

    // Print a Header for the output
    void printHeader( const int ); 

    // Print one row of output showing the sub array being processed
    void printRow( const int [], int, int, int, int ); 

    int main()
    {
        const int arraySize = 15; // size of array a
        int a[ arraySize ]; // create array a
        int searchKey; // value to locate in array a

        // Constructing an array of even numbers from 0 to 30        
        for ( int i = 0; i < arraySize; ++i )
            a[ i ] = 2 * i; // create some data

        cout << "Enter integer search key between 0 and 28: ";
        cin >> searchKey;

        // attempt to locate searchKey in array a using Linear Search
        int element = linearSearch( a, searchKey, arraySize );

        printHeader(arraySize);

        // attempt to locate searchKey in array a using Linear Search
        element = binarySearch( a, searchKey, 0, arraySize-1, arraySize );

        // display results
        if (element != -1)
            cout << '\n' << searchKey << " Found in array element " 
                 << element << endl;
        else
            cout << '\n' << searchKey << " not found" << endl;
    } //end main

    // compare key to every element of array until location is
    // found or until end of array is reached; return index of
    // element if key is found or -1 if key not found
    int linearSearch( const int array[], int key, int sizeOfArray )
    {
        int index = -1; // By Default, key is not found
        int iter = 0; // Number of Iteration
        for ( int j = 0; j < sizeOfArray; ++j ) {
            iter++;
            if ( array[ j ] == key )  { // if found,
                index = j; // assigns index the location of key
                break;
            }
        }

        cout << "Number of iteration for linear search: " << iter << endl;
        return index; // returning the index if value found or -1
    } // end function linearSearch

    // Search Element using binary search
    // The algorithm locates the middle element of the array and compares it 
    // to the search key. If equal Search is complete or else if less the first
    // half is selected or else the second half. The process is repeated till 
    // the middle element of the sub array is equal to the search key or else 
    // until one element remains
    int binarySearch( const int b[], int searchKey, int low, int high, int size)
    {
        int middle;
        int index = -1; // By Default, key is not found
        int iter = 0; // Number of Iteration

        while (low <= high)
        {
            iter++;
            middle = (low + high)/2;

            // Printing the Row under Consideration
            printRow( b, low, middle, high, size);

            if (searchKey == b[middle]) {
                index = middle; // match found on the middle row
                break;
            } else if ( searchKey < b[middle] )
                high = middle - 1; // Search low end of the array
            else 
                low = middle + 1; // Search high end of the array

        } // end while loop

        cout << "Number of iteration for binary search: " << iter << endl;
        return index; // returning the index if value found or -1
    } // end of binarySearch

    // Print a Header for the output
    void printHeader( const int size)
    {
        cout << "\nSubscripts:\n";
        for (int i = 0; i < size; i++)
            cout << setw(3) << i << ' ';
        cout << '\n';
        for (int i = 1; i <= 4*size; i++)
            cout << '-';
        cout << endl;    
    } 

    // Print one row of output showing the sub array being processed
    void printRow( const int b[], int low, int middle, int high, int size)
    {
        for (int i = 0; i < size; i++)
        {
            if ( i < low || i > high)
                cout << "    ";
            else if ( i == middle )
                cout << setw(3) << b[i] << '*';
            else
                cout << setw(3) << b[i] << ' ';
        } // end for loop

        cout << endl;
    } 


/********************************************************************

RESULT:

    $ ./S4_SP_LinearSearch
    Enter integer search key between 0 and 28: 10
    Number of iteration for linear search: 6

    Subscripts:
      0   1   2   3   4   5   6   7   8   9  10  11  12  13  14 
    ------------------------------------------------------------
      0   2   4   6   8  10  12  14* 16  18  20  22  24  26  28 
      0   2   4   6*  8  10  12                                 
                      8  10* 12                                 
    Number of iteration for binary search: 3

    10 Found in array element 5

    $ ./S4_SP_LinearSearch
    Enter integer search key between 0 and 28: 29
    Number of iteration for linear search: 15

    Subscripts:
      0   1   2   3   4   5   6   7   8   9  10  11  12  13  14 
    ------------------------------------------------------------
      0   2   4   6   8  10  12  14* 16  18  20  22  24  26  28 
                                     16  18  20  22* 24  26  28 
                                                     24  26* 28 
                                                             28*
    Number of iteration for binary search: 4

    29 not found



********************************************************************/

