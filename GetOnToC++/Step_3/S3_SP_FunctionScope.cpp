    //
    //  Program Name - S3_SP_FunctionScope.cpp
    //  Series: GetOnToC++ Step: 3 Side Program
    //
    //  Purpose: This program demonstrates scoping of variables with global 
    //           variables, local variables and static local variables.
    //
    //  Compile: g++ S3_SP_FunctionScope.cpp -o S3_SP_FunctionScope
    //  Execute: ./S3_SP_FunctionScope
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Function Prototypes
    void useLocal(); 
    void useStaticLocal(); 
    void useGlobal(); 

    // function prototype to calculate square of int and double value
    int square( int x );
    double square( double y );

    // Global Variable
    int x = 1;

    // Definition of inline function cube. Definition of function appears
    // before function is called, so a function prototype is not required.
    // First line of function definition acts as the prototype.
    inline double cube( const double side )
    {
        return side * side * side; // calculate cube
    } // end function cube

    int main() 
    {

        cout << square( 7 ); // calls int version
        cout << endl;
        cout << square( 7.5 ); // calls double version
        cout << endl;

        double sideValue; // stores value entered by user
        cout << "Enter the side length of your cube: ";
        cin >> sideValue; // read value from user

        // calculate cube of sideValue and display result
        cout << "Volume of cube with side "
             << sideValue << " is " << cube( sideValue ) << endl;

        cout << "global x in main is " << x << endl;

        int x = 5; // local variable to main

        cout << "local x in main's outer scope is " << x << endl;

        { // start new scope
            int x = 7; // hides both x in outer scope and global x
            cout << "local x in main's inner scope is " << x << endl;
        } // end new scope

        cout << "local x in main's outer scope is " << x << endl;

        useLocal(); // useLocal has local x
        useStaticLocal(); // useStaticLocal has static local x
        useGlobal(); // useGlobal uses global x
        useLocal(); // useLocal reinitializes its local x
        useStaticLocal(); // static local x retains its prior value
        useGlobal(); // global x also retains its prior value

        cout << "\nlocal x in main is " << x << endl;

    } // end main

    // function square for int values
    int square( int x )
    {
        cout << "square of integer " << x << " is ";
        return x * x;
    } // end function square with int argument

    // function square for double values
    double square( double y )
    {
        cout << "square of double " << y << " is ";
        return y * y;
    } // end function square with double argument

    // useLocal reinitializes local variable x during each call
    void useLocal()
    {
        int x = 25; // initialized each time useLocal is called
        cout << "\nlocal x is " << x << " on entering useLocal" << endl; 
        ++x;
        cout << "local x is " << x << " on exiting useLocal" << endl;

        // Note that the global value of x is accessed using unary scope 
        // resolution operator ::
        cout << "Global int value of x = " << ::x << endl;
    } // end function useLocal  

    // useStaticLocal initializes static local variable x only the 
    // first time the function is called; value of x is saved
    // between calls to this function
    void useStaticLocal()
    {
        static int x = 50; // initialized first time useStaticLocal is called
        cout << "\nlocal static x is " << x << " on entering useStaticLocal" 
             << endl;
        ++x;
        cout << "local static x is " << x << " on exiting useStaticLocal"
             << endl;
    } // end function useStaticLocal    

    // useGlobal modifies global variable x during each call
    void useGlobal() 
    {
        cout << "\nglobal x is " << x << " on entering useGlobal" << endl; 
        x *= 10;
        cout << "global x is " << x << " on exiting useGlobal" << endl;
    } // end function useGlobal

