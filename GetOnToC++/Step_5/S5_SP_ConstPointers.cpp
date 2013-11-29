    //
    //  Program Name - S5_SP_ConstPointers.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates const pointers
    //
    //  Compile: g++ S5_SP_ConstPointers.cpp -o S5_SP_ConstPointers
    //  Execute: ./S5_SP_ConstPointers
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;
    // Function Prototype

    // This function demonstrates Nonconstant Pointer to Nonconstant Data
    void f1( int * ); 

    // This function demonstrates Nonconstant Pointer to Constant Data
    void f2( const int * ); 

    int main()
    {
        int x = 25, y = 10, *yPtr = &y;
        cout << "The original value of y is: " << y 
             << " And Memory Address is: " << &y
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr << endl;

        // Passing Nonconstant Pointer to a function that takes Nonconstant Data 
        cout << "\nDemonstrating Nonconstant Pointer to Nonconstant Data";
        cout << "\n------------------------------------------------------";

        f1( yPtr );

        cout << "\nThe value of y is " << y << " And Memory Address: " << &y
             << "\nThe value of yPtr is " << *yPtr 
             << " And Memory Address: " << yPtr << endl;

        // Resetting the value
        // y = 10; yPtr = &y;

        // Passing Nonconstant Pointer to a function that takes Constant Data 
        cout << "\nDemonstrating Nonconstant Pointer to Constant Data";
        cout << "\n------------------------------------------------------";
        f2( yPtr );

        cout << "\nThe value of y is: " << y << " And Memory Address is: " << &y 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr << endl;

        // Attempting to modify a constant pointer to nonconstant data.
        cout << "\nDemonstrating Constant Pointer to Nonconstant Data";
        cout << "\n------------------------------------------------------";

        // ptr is a constant pointer to an integer that can be modified through
        // ptr, but ptr always points to the same memory location.
        int * const ptr = &y; // const pointer must be initialized
        cout << "\nThe value of y is: " << y << " And Memory Address is: " << &y 
             << "\nThe value of ptr is: " << *ptr 
             << " And Memory Address is: " << ptr << endl;

        // Attempting to modify a constant pointer to constant data.
        *ptr = 100; // allowed: *ptr is not const and data can be changed
        cout << "\nThe value of y is: " << y << " And Memory Address is: " << &y 
             << "\nThe UPDATED value of ptr is: " << *ptr 
             << " And Memory Address is: " << ptr << endl;

        // ptr = &x; // error: ptr is const; cannot assign to it a new address

        // ptr is a constant pointer to a constant integer.
        cout << "\nDemonstrating Constant Pointer to Constant Data";
        cout << "\n-------------------------------------------------";

        // xptr always points to the same location; the integer
        // at that location cannot be modified.
        const int *const xptr = &x;
        cout << "\nThe value of x is: " << x << " And Memory Address is: " << &x 
             << "\nThe value of xptr is: " << *xptr 
             << " And Memory Address is: " << xptr << endl;

    ￼￼￼￼// *xptr = 7; // error: *xptr is const; cannot assign new value
    ￼￼￼￼// xptr = &y; // error: xptr is const; cannot assign new address
        
    } // end main


    // This function demonstrates Nonconstant Pointer to Nonconstant Data
    //
    // Notice 1: Since it is pass by reference xPtr can modify the value and the 
    //           same value will be reflected by variable y and the yPtr   
    // Notice 2: xPtr points to the same memory location as yPtr. xPtr can 
    //           legally point to new Memory address but will not affect the yPtr
    // Notice 3: Such Pointer declarion does not include const and the highest 
    //           access is granted 
    //
    void f1( int *xPtr ) 
    {
        cout << "\nIn Function f1(): "
             << "\n-----------------" 
             << "\nThe value of xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // The value is modified to 200 hrough the dereferenced pointer
        *xPtr = 50; 
        cout << "The UPDATED value of xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // xPtr is modified to point to variable b
        int b = 100;
        xPtr = &b; 
        cout << "The value of xPtr is " << *xPtr 
             << " And UPDATED Memory Address is: " << xPtr << endl;

    } // end function f1

    //
    // This function demonstrates Nonconstant Pointer to Constant Data
    // Notice 1: xPtr cannot modify the value of constant variable to which 
    //           it points
    // Notice 2: xPtr is passed by reference and points to the same memory 
    //           location as yPtr. xPtr can legally point to new Memory address
    //           or any data item of the appropriate type. But this will not 
    //           affect the yPtr. 
    // Notice 3: Pointer reference can be chaged because as per the declaration
    //           const int * the data is Constant but the pointer is Nonconstant 
    //
    void f2( const int *xPtr ) 
    {
        int b = 100;
        cout << "\nIn Function f2():"
             << "\n-----------------" 
             << "\nThe value of xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // *xPtr = 100; // error: cannot modify a const object
        xPtr = &b; 

        cout << "The value of xPtr is " << *xPtr 
             << " And UPDATED Memory Address is: " << xPtr << endl;

    } // end function f2


/********************************************************************

RESULT:

    $ ./S5_SP_ConstPointers
    The original value of y is: 10 And Memory Address is: 0x7fff5f43db00
    The value of yPtr is: 10 And Memory Address is: 0x7fff5f43db00

    Demonstrating Nonconstant Pointer to Nonconstant Data
    ------------------------------------------------------
    In Function f1(): 
    -----------------
    The value of xPtr is 10 And Memory Address is: 0x7fff5f43db00
    The UPDATED value of xPtr is 50 And Memory Address is: 0x7fff5f43db00
    The value of xPtr is 100 And UPDATED Memory Address is: 0x7fff5f43da44

    The value of y is 50 And Memory Address: 0x7fff5f43db00
    The value of yPtr is 50 And Memory Address: 0x7fff5f43db00

    Demonstrating Nonconstant Pointer to Constant Data
    ------------------------------------------------------
    In Function f2():
    -----------------
    The value of xPtr is 50 And Memory Address is: 0x7fff5f43db00
    The value of xPtr is 100 And UPDATED Memory Address is: 0x7fff5f43da44

    The value of y is: 50 And Memory Address is: 0x7fff5f43db00
    The value of yPtr is: 50 And Memory Address is: 0x7fff5f43db00

    Demonstrating Constant Pointer to Nonconstant Data
    ------------------------------------------------------
    The value of y is: 50 And Memory Address is: 0x7fff5f43db00
    The value of ptr is: 50 And Memory Address is: 0x7fff5f43db00

    The value of y is: 100 And Memory Address is: 0x7fff5f43db00
    The UPDATED value of ptr is: 100 And Memory Address is: 0x7fff5f43db00

    Demonstrating Constant Pointer to Constant Data
    -------------------------------------------------
    The value of x is: 25 And Memory Address is: 0x7fff5f43db04
    The value of xptr is: 25 And Memory Address is: 0x7fff5f43db04


********************************************************************/
