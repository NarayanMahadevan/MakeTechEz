    //
    //  Program Name - S3_SP_Fibonacci.cpp
    //  Series: GetOnToC++ Step: 3 Side Program
    //
    //  Purpose: Write a program to calculate the nth Fibonacci number 
    //           recursively by using func- tion fibonacci
    //
    //  Compile: g++ S3_SP_Fibonacci.cpp -o S3_SP_Fibonacci
    //  Execute: ./S3_SP_Fibonacci
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    unsigned long fibonacci( unsigned long ); // function prototype

    int main()
    {
        // calculate the fibonacci values of 0 through 10
        for ( int counter = 0; counter <= 10; ++counter )
            cout << "fibonacci( " << counter << " ) = "
                 << fibonacci( counter ) << endl;

        // display higher fibonacci values
        cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
        cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
        cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;

    } // end of main

    // recursive function fibonacci
    unsigned long fibonacci( unsigned long number )
    {
        if ( ( number == 0 ) || ( number == 1 ) ) // base cases
            return number;
        else // recursion step
            return fibonacci( number - 1 ) + fibonacci( number - 2 );
    } // end function fibonacci

