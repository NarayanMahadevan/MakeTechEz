    //
    //  Program Name - S5_SP_ConstPointers.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates const pointers
    //
    //  Compile: g++ S5_SP_ConstPointers.cpp -o exe/S5_SP_ConstPointers
    //  Execute: exe/S5_SP_ConstPointers
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
    void modifyPtr2ConstData( const int * ); 

    int main()
    {
        int x = 25, y = 10, *yPtr = &y;
        cout << "The original value of y is: " << y 
             << " And Memory Address is: " << &y
             << "\nThe value of x is: " << x 
             << " And Memory Address is: " << &x 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr << endl;

        // Passing Nonconstant Pointer to a function that takes Nonconstant Data 
        cout << "\nDemonstrating Nonconstant Pointer to Nonconstant Data";
        cout << "\n------------------------------------------------------";

        //f1( yPtr );
		// Modify the data of yPtr using de-referenced pointer
        *yPtr = 100;

        cout << "\nThe value of y is " << y << " And Memory Address: " << &y
             << "\nThe value of yPtr is " << *yPtr 
             << " And Memory Address: " << yPtr << endl;
        
        // Modify the yPtr to point to x 
        yPtr = &x;

        cout << "\nThe value of y is " << y << " And Memory Address: " << &y
             << "\nThe value of yPtr is " << *yPtr 
             << " And Memory Address: " << yPtr << endl;

        // Resetting the value
        // y = 10; yPtr = &y;

        // Passing Nonconstant Pointer to a function that takes Constant Data 
        cout << "\nDemonstrating Nonconstant Pointer to Constant Data";
        cout << "\n------------------------------------------------------";

        //modifyPtr2ConstData( yPtr );
        // Define xPtr variable which is Pointer to constant Data
        const int * xPtr = 0;
        
        // Assign xPtr to point to yPtr
        xPtr = yPtr;        

        cout << " \nAfter assignment of xPtr to point to yPtr ---------------" 
             << "\nThe value of y is: " << y << " And Memory Address is: " << &y 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr 
             << "\nThe value of xPtr is: " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // Assign xPtr to point to y
        xPtr = &y;        

        cout << " \nAfter assignment of xPtr to point to y ------------------" 
             << "\nThe value of y is: " << y 
             << " And Memory Address is: " << &y 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr 
             << "\nThe value of xPtr is: " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // Attempting to modify a constant pointer to nonconstant data.
        cout << "\nDemonstrating Constant Pointer to Nonconstant Data";
        cout << "\n------------------------------------------------------";

        // Note in case of Constant Pointer to an integer, the integer value can 
        // be modified bur the Pointer's memory location cannot be changed

        // Specify a constPtr variable which is a Constant Pointer to an Integer
        // Initialize to point to yPtr
        // Modification Code # 1
        int * const constPtr = yPtr; // const pointer must be initialized
        
        cout << " \nAfter Initialization of constPtr ---------------" 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr; 
             
        cout << "\nThe value of constPtr is: " << *constPtr 
             << " And Memory Address is: " << constPtr << endl;

        // Assign value of x to constPtr
        // Modification Code # 2
        *constPtr = x; // allowed: *constPtr is not const and data can be changed

        cout << " \nAfter assignment of x to constPtr ---------------" 
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr; 
             
        cout << "\nThe value of constPtr is: " << *constPtr 
             << " And Memory Address is: " << constPtr << endl;

		// Modify constPtr to point to variable x
        // Modification Code # 3
        // constPtr = &x; // error: ptr is const; cannot assign to it a new address

        // ptr is a constant pointer to a constant integer.
        cout << "\nDemonstrating Constant Pointer to Constant Data";
        cout << "\n-------------------------------------------------";

        // xptr always points to the same location; the integer
        // at that location cannot be modified.
        const int *const xptr = &x;
        
        cout << "\nThe value of x is: " << x << " And Memory Address is: " << &x 
             << "\nThe value of xptr is: " << *xptr 
             << " And Memory Address is: " << xptr << endl;
        
        // error: *xptr is const; cannot assign new value => *xptr = 7; 
        // error: xptr is const; cannot assign new address => xptr = &y; 
        
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
    void modifyPtr2ConstData( const int *xPtr ) 
    {
        int b = 100;
        cout << "\nIn Function modifyPtr2ConstData():"
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
    The original value of y is: 10 And Memory Address is: 0x7fff54e46af0
    The value of x is: 25 And Memory Address is: 0x7fff54e46af4
    The value of yPtr is: 10 And Memory Address is: 0x7fff54e46af0

    Demonstrating Nonconstant Pointer to Nonconstant Data
    ------------------------------------------------------
    The value of y is 10 And Memory Address: 0x7fff54e46af0
    The value of yPtr is 10 And Memory Address: 0x7fff54e46af0

    The value of y is 10 And Memory Address: 0x7fff54e46af0
    The value of yPtr is 10 And Memory Address: 0x7fff54e46af0

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
