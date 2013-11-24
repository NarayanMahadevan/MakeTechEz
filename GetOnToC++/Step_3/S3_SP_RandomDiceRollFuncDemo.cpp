    //
    //  Program Name - S3_SP_RandomDiceRollFuncDemo.cpp
    //  Series: GetOnToC++ Step: 1 Side Program
    //
    //  Purpose: To demonstrate random dice Rolling a six-sided dice 6,000,000 
    //           times and check the frequency of 1 to 6 faces appearing
    //
    //  Compile: g++ S3_SP_RandomDiceRollFuncDemo.cpp -o S3_SP_RandomDiceRollFuncDemo
    //  Execute: ./S3_SP_RandomDiceRollFuncDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    #include <cstdlib> // contains function prototype for rand
    using namespace std;

    // Global Variable
    int frequency1 = 0; // count of 1s rolled
    int frequency2 = 0; // count of 2s rolled
    int frequency3 = 0; // count of 3s rolled
    int frequency4 = 0; // count of 4s rolled
    int frequency5 = 0; // count of 5s rolled
    int frequency6 = 0; // count of 6s rolled

    // Function Prototype
    void summarize(void);

    int main() {

        summarize();

        cout << "Face" << setw( 13 ) << "Frequency" << endl; // output headers
        cout << "   1" << setw( 13 ) << frequency1
             << "\n   2" << setw( 13 ) << frequency2
             << "\n   3" << setw( 13 ) << frequency3
             << "\n   4" << setw( 13 ) << frequency4
             << "\n   5" << setw( 13 ) << frequency5
             << "\n   6" << setw( 13 ) << frequency6 << endl;
    }//endmain


    // summarize results of 6,000,000 rolls of a die
    void summarize(void) 
    {
        int face; // stores most recently rolled value

        for ( int roll = 1; roll <= 6000000; ++roll )
        {
            face = 1 + rand()%6; //randomnumberfrom1to6
            // determine roll value 1-6 and increment appropriate counter
            switch ( face ) {
            case 1:
               ++frequency1; // increment the 1s counter 
               break;
            case 2:
                ++frequency2; // increment the 2s counter 
                break;
            case 3:
                ++frequency3; // increment the 3s counter 
                break;
            case 4:
                ++frequency4; // increment the 4s counter 
                break;
            case 5:
                ++frequency5; // increment the 5s counter 
                break;
            case 6:
                ++frequency6; // increment the 6s counter 
                break;
            default: // invalid value
                cout << "Program should never get here!";
            } // end switch
        } // end for
    }
