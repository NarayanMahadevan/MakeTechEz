    //
    //  Program Name - S4_SP_ArrayVarScope.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This program demonstrates Array Scope, Global Scope, Local to
    //           the function and static local variable in a function definition 
    //           exists for the program’s duration but is visible only in the 
    //           function’s body
    //
    //  Compile: g++ S4_SP_ArrayVarScope.cpp -o S4_SP_ArrayVarScope
    //  Execute: ./S4_SP_ArrayVarScope
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // function prototype
    void globalArrayInit( void );
    void staticArrayInit( void );
    void localArrayInit( void ); 

    const int arraySize = 3;

    // Global Array Variable initialized to 0
    int array1[ arraySize ] = {};

    int main()
    {
        cout << "First call to each function:\n";
        globalArrayInit();
        staticArrayInit();
        localArrayInit();

        cout << "\n\nSecond call to each function:\n";
        globalArrayInit();
        staticArrayInit();
        localArrayInit();
        cout << endl;
    } //end main


    // function to demonstrate usage of global array
    void globalArrayInit( void )
    {
        cout << "\nValues on entering globalArrayInit: \n";

        // output contents of array1
        for ( int i = 0; i < arraySize; ++i )
            cout << "array1[" << i << "] = " << array1[i] << " ";
  
        cout << "\nValues on exiting globalArrayInit: \n"; 
        
        // modify and output contents of array1
        for ( int j = 0; j < arraySize; ++j )
            cout << "array1[" << j << "] = " << (array1[j] += 10) << " ";
        cout << endl;
    } // end function globalArrayInit

    // function to demonstrate an automatic local array
    void localArrayInit( void )
    {
        // initializes elements each time function is called
        int array1[ arraySize ] = { 1, 2, 3 }; // automatic local array

        cout << "\n\nValues on entering localArrayInit:\n"; 

        // output contents of array1
        for ( int i = 0; i < arraySize; ++i )
            cout << "array1[" << i << "] = " << array1[i] << " ";

        cout << "\nValues on exiting localArrayInit:\n"; 

        // modify and output contents of array1
        for ( int j = 0; j < arraySize; ++j )
            cout << "array1[" << j << "] = " << (array1[j]+=5) << " ";

        cout << "\nGlobal Values on exiting localArrayInit:\n"; 
        // output contents of global array1
        for ( int i = 0; i < arraySize; ++i )
            cout << "array1[" << i << "] = " << ::array1[i] << " ";
        cout << endl;
    } // end function localArrayInit

    // function to demonstrate a static local array
    void staticArrayInit( void )
    {
        // initializes elements to 0 first time function is called
        static int array1[ arraySize ]; // static local array

        cout << "\nValues on entering staticArrayInit: \n"; 

        // output contents of array1
        for ( int i = 0; i < arraySize; ++i )
            cout << "array1[" << i << "] = " << array1[i] << " ";

        cout << "\nValues on exiting staticArrayInit:\n";

        // modify and output contents of array1
        for ( int j = 0; j < arraySize; ++j )
            cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
        cout << endl;
    } // end function staticArrayInit

/********************************************************************

RESULT:

    $ ./S4_SP_ArrayVarScope
    First call to each function:

    Values on entering globalArrayInit: 
    array1[0] = 0 array1[1] = 0 array1[2] = 0 
    Values on exiting globalArrayInit: 
    array1[0] = 10 array1[1] = 10 array1[2] = 10 

    Values on entering staticArrayInit: 
    array1[0] = 0 array1[1] = 0 array1[2] = 0 
    Values on exiting staticArrayInit:
    array1[0] = 5 array1[1] = 5 array1[2] = 5 


    Values on entering localArrayInit:
    array1[0] = 1 array1[1] = 2 array1[2] = 3 
    Values on exiting localArrayInit:
    array1[0] = 6 array1[1] = 7 array1[2] = 8 
    Global Values on exiting localArrayInit:
    array1[0] = 10 array1[1] = 10 array1[2] = 10 


    Second call to each function:

    Values on entering globalArrayInit: 
    array1[0] = 10 array1[1] = 10 array1[2] = 10 
    Values on exiting globalArrayInit: 
    array1[0] = 20 array1[1] = 20 array1[2] = 20 

    Values on entering staticArrayInit: 
    array1[0] = 5 array1[1] = 5 array1[2] = 5 
    Values on exiting staticArrayInit:
    array1[0] = 10 array1[1] = 10 array1[2] = 10 


    Values on entering localArrayInit:
    array1[0] = 1 array1[1] = 2 array1[2] = 3 
    Values on exiting localArrayInit:
    array1[0] = 6 array1[1] = 7 array1[2] = 8 
    Global Values on exiting localArrayInit:
    array1[0] = 20 array1[1] = 20 array1[2] = 20 

********************************************************************/

