    //
    //  Program Name - S1_FunctionDemo.cpp
    //  Series: GetOnToC++ Step: 1
    //
    //  Purpose: This program demonstrates writing a function prototype and 
    //           function body to calculate maximum of 3 numbers
    //
    //  Compile: g++ S1_FunctionDemo.cpp -o S1_FunctionDemo
    //  Execute: ./S1_FunctionDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int maximum( int, int, int ); // function prototype 

    int main ( ) 
    { 
        int a, b, c; // variables to store user inputs
        
        cout << "Enter three integers: "; 
        cin >> a >> b >> c; 

        // a, b and c below are arguments to the maximum function call
        cout << "Maximum is: " << maximum( a, b, c ) << endl;

        return 0;
    }

    // Function maximum definition x, y and z below are parameters to the 
    // maximum function definition

    int maximum( int x, int y, int z )
    {
        int max = x; // setting the maximum value to x
        
        // Using the if condition statement to check y and z are greater then max
        if (y > max) max = y;
        if (z > max) max = z;

        return max; // Returning the max value
    }
