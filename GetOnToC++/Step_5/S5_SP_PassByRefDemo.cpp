    //
    //  Program Name - S5_SP_PassByRefDemo.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates passing arguments to a function using
    //           pass-by-value and pass-by-reference
    //
    //  Compile: g++ S5_SP_PassByRefDemo.cpp -o S5_SP_PassByRefDemo
    //  Execute: ./S5_SP_PassByRefDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //


    #include <iostream>
    using namespace std;

    // Function  Prototype

    // This function demonstrates passing variable by value
    int cubeByValue( int ); 

    // This function demonstrates passing variable by reference
    void cubeByReference( int * );

    // This function demonstrates important rule of passing variable by reference
    void passByReferenceTest( int * );

    int main()
    {
        int number = 5;
        cout << "The original value of number is " << number 
             << "\nAnd Memory Address: " << &number << endl;

        // Pass number by value to cubeByValue
        number = cubeByValue( number ); 
        cout << "\nThe new value of number is " << number 
             << "\nAnd Memory Address: " << &number << endl;

        // Resetting the number back to 5
        number = 5;

        // Pass number address to cubeByReference        
        cubeByReference( &number ); 
        cout << "\nThe new value of number is " << number
             << "\nAnd Memory Address: " << &number << endl;

        // Passing By Reference Test
        cout << "\nPassing By Reference Test" 
             << "\n-------------------------" << endl;

        int y = 10, *yPtr = &y;
        cout << "\nThe updated value of y is: " << y 
             << " And Memory Address is: " << &y
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr << endl;

        passByReferenceTest(yPtr);

        cout << "\nThe value of y is: " << y 
             << " And Memory Address is: " << &y
             << "\nThe value of yPtr is: " << *yPtr 
             << " And Memory Address is: " << yPtr << endl;
    } //end main

    // This function demonstrates passing variable by value.
    // This function calculates and return cube of integer argument
    int cubeByValue( int n )
    {
        cout << "\nIn cubeByValue( int n ) function:"
             << "\n----------------------------------" 
             << "\nThe value of n passed by value is " 
             << n << "\nAnd Memory Address: " << &n << endl;

        return n * n * n; // cube local variable n and return result
    } // end function cubeByValue

    // This function demonstrates passing variable by reference
    // calculate cube of *nPtr; modifies variable number in main
    void cubeByReference( int *nPtr )
    {
        cout << "\nIn cubeByReference( int *nPtr ) function: "
             << "\n-------------------------------------------" 
             << "\nThe value of nPtr passed by reference is " << *nPtr 
             << "\nAnd Memory Address: " << nPtr << endl;
        *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
    } // end function cubeByReference

    // This function demonstrates important rule of passing variable by reference
    //
    // Notice 1: Since it is pass by reference xPtr can modify the value and the 
    //           same value will be reflected by variable y and the yPtr   
    //
    // Notice 2: xPtr points to the same memory location as yPtr. xPtr can 
    //           legally point to new Memory address but will not affect the yPtr
    //
    void passByReferenceTest( int *xPtr ) 
    {
        cout << "\nIn Function passByReferenceTest(): "
             << "\n----------------------------------" 
             << "\nThe value of xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // The value is modified to 50 through the dereferenced pointer
        *xPtr = 50; 
        cout << "The updated value of xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

        // xPtr is modified to point to variable b
        int b = 100;
        xPtr = &b; 
        cout << "The value of updated xPtr is " << *xPtr 
             << " And Memory Address is: " << xPtr << endl;

    } // end function passByReferenceTest



/********************************************************************

RESULT:

    ./S5_SP_PassByRefDemo
    The original value of number is 5
    And Memory Address: 0x7fff5e599b04

    In cubeByValue( int n ) function:
    ----------------------------------
    The value of n passed by value is 5
    And Memory Address: 0x7fff5e599a7c

    The new value of number is 125
    And Memory Address: 0x7fff5e599b04

    In cubeByReference( int *nPtr ) function: 
    -------------------------------------------
    The value of nPtr passed by reference is 5
    And Memory Address: 0x7fff5e599b04

    The new value of number is 125
    And Memory Address: 0x7fff5e599b04

    Passing By Reference Test
    -------------------------

    The updated value of y is: 10 And Memory Address is: 0x7fff5e599b00
    The value of yPtr is: 10 And Memory Address is: 0x7fff5e599b00

    In Function passByReferenceTest(): 
    ----------------------------------
    The value of xPtr is 10 And Memory Address is: 0x7fff5e599b00
    The updated value of xPtr is 50 And Memory Address is: 0x7fff5e599b00
    The value of updated xPtr is 100 And Memory Address is: 0x7fff5e599a74

    The value of y is: 50 And Memory Address is: 0x7fff5e599b00
    The value of yPtr is: 50 And Memory Address is: 0x7fff5e599b00

********************************************************************/


