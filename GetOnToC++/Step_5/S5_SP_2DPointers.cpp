    //
    //  Program Name - S5_SP_2DPointers.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates traversing 2D array using pointer 
    //           to a pointer.
    //
    //  Compile: g++ S5_SP_2DPointers.cpp -o exe/S5_SP_2DPointers
    //  Execute: exe/S5_SP_2DPointers
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // Function Prototype to print Array
    void printMatrix( const int *const *const ); 
    void printMatrix( const int [][ 3 ] ); 

    const int rows = 3;
    const int columns = 3;

    int main()
    {
        // Declaring an Identity Matrix 
        int matrix[ rows ][ columns ] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };

        cout << "Printing the identity matrix using matrix variable:" << endl;
        for ( int m = 0; m < rows; m++ )
        {
            cout << "Row # " << m+1 << ": ";
            for ( int n = 0; n < columns; n++ ) {
                // Print the value stored in mth row and nth column
                cout << *((*(matrix + m)) + n) << " ";
            }
            cout << endl; // start new line of output
        } // end outer for

        int * testPtr = matrix[0]; 
        while (testPtr != matrix[0] + (rows*columns)) {
            cout << *testPtr << " ";
            testPtr++;
        }
        cout << endl; 

        cout << "Printing the identity matrix using double pointer:" << endl;
        int ** matPtr = new int*[rows];
        for (int i = 0; i < rows; i++) matPtr[i] = *(matrix + i);
        printMatrix( matPtr );
        printMatrix(matrix);

        return 0;
    } // end main

    void printMatrix( const int matrix[][ columns ] )
    {
        // loop through array's rows
        for ( int i = 0; i < rows; ++i )
        {
            cout << "Row # " << i+1 << ": ";
            // loop through columns of current row 
            for ( int j = 0; j < columns; ++j ) {
                // Printing the value stored in each column
                cout << *((*(matrix + i)) + j) << " ";
            }
            cout << endl; // start new line of output
        } // end outer for
    } // end function printArray


    void printMatrix( const int *const *const matPtr )
    {
        int row = 0, col = 0;

        // Define rowPtr as pointer to a pointer to a integer and assign 
        // it to matPtr
        const int *const * rowPtr = matPtr; 

        // Define colPtr as pointer to an integer and initialize it to NULL
        const int * colPtr = 0;

        // Loop through rows using while loop using rowPtr till the rowPtr is 
        // equal to the pointer pointing to (matPtr + rows). That is till the 
        // rowPtr reaches the eand of the row. Use Pointer Arithmatic and 
        // Pointer Expression to derive value.
        while(rowPtr != matPtr + rows) {
            cout << "Row # " << row+1 << ": ";
            // Set colPtr to Point to same location as rowPtr i.e. to the first
            // column of the corresponding row. 
            colPtr = *rowPtr;
            // Loop through the columns using while loop till colPtr points to 
            // the same element as (*rowPtrs + columns) i.e. till the colPtr 
            // reaches the end of the column for that row
            while(colPtr != *rowPtr + columns) {
                // Print the value in the colPtr seprated by spaces;
                cout << *colPtr << ' ';
                // Increament colPtr and col variable
                colPtr++; col++;
            } // end col 
            // Increment the rowPtr and the row variable
            rowPtr++; row++; 
            cout << endl;
        } // end row

    } // end function printMatrix


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

