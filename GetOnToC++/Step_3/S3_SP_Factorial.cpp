    //
    //  Program Name - S3_SP_Factorial.cpp
    //  Series: GetOnToC++ Step: 3 Side Program
    //
    //  Purpose: This program uses uses recursion to calculate and print the 
    //           factorials of the integers 0–10.
    //
    //  Compile: g++ S3_SP_Factorial.cpp -o S3_SP_Factorial
    //  Execute: ./S3_SP_Factorial
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;    

    unsigned long factorial( unsigned long ); // function prototype

    int main() {
        // calculate the factorials of 0 through 10
        for ( int counter = 0; counter <= 10; ++counter )
            cout << setw( 2 ) << counter << "! = " << factorial( counter )
                 << endl; 
    } //end main

    // recursive definition of function factorial
    unsigned long factorial( unsigned long number )
    {
        if ( number <= 1 ) // test for base case
            return 1; // base cases: 0! = 1 and 1! = 1
        else // recursion step
            return number * factorial( number - 1 );
    } // end function factorial
