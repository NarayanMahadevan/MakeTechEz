    //
    //  Program Name - S3_SP_RandomDiceRoll.cpp
    //  Series: GetOnToC++ Step: 1 Side Program
    //
    //  Purpose: To demonstrate rand, simulate q 20 rolls of a six-sided die 
    //           and displays the value of each roll. The function prototype 
    //           for the rand function is in <cstdlib>. To produce integers 
    //           in the range 0 to 5, we use the modulus operator (%) with 
    //           rand as follows: rand() % 6
    //
    //  Compile: g++ S3_SP_RandomDiceRoll.cpp -o S3_SP_RandomDiceRoll
    //  Execute: ./S3_SP_RandomDiceRoll
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    #include <cstdlib> // contains function prototype for rand

    using namespace std;

    int main()
    {
        // loop 20 times
        for ( int counter = 1; counter <= 20; ++counter ) {
            // pick random number from 1 to 6 and output it
            cout << setw( 10 ) << ( 1 + rand() % 6 );
            // if counter is divisible by 5, start a new line of output
            if ( counter % 5 == 0 ) cout << endl;
        } // end for
    }
