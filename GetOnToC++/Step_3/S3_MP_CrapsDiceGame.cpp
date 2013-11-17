    //
    //  Program Name - S3_MP_CrapsDiceGame.cpp
    //  Series: GetOnToC++ Step: 3 Main Program
    //
    //  Purpose: One of the most popular games of chance is a dice game known 
    //           as “craps,” which is played in casinos and back alleys 
    //           worldwide. This program will simulate the Craps Game
    //
    //  RULES: A player rolls two dice. Each die has six faces. These faces 
    //         contain 1, 2, 3, 4, 5 and 6 spots. After the dice have come 
    //         to rest, the sum of the spots on the two upward faces is 
    //         calculated. If the sum is 7 or 11 on the first roll, the player 
    //         wins. If the sum is 2, 3 or 12 on the first roll (called “craps”), 
    //         the player loses (i.e., the “house” wins). If the sum is 4, 5, 6, 
    //         8, 9 or 10 on the first roll, then that sum becomes the player’s 
    //         “point.” To win, you must continue rolling the dice until you 
    //         “make your point.” The player loses by rolling a 7 before making 
    //         the point.
    //
    //  Compile: g++ S3_MP_CrapsDiceGame.cpp -o S3_MP_CrapsDiceGame
    //  Execute: ./S3_MP_CrapsDiceGame
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <cstdlib> // contains prototypes for functions srand and rand
    #include <ctime> // contains prototype for function time
    using namespace std;

    // Function Prototype rollsdice, calculates and displays sum 
    int rollDice(); 

    int main() {
        // enumeration with constants that represent the game status
        enum Status { CONTINUE, WON, LOST }; // all caps in constants

        int myPoint; // point if no win or loss on first roll 
        Status gameStatus; // can contain CONTINUE, WON or LOST

        // randomize random number generator using current time
        srand( time( 0 ) );

        int sumOfDice = rollDice(); // first roll of the dice

        // determine game status and point (if needed) based on first roll
        switch ( sumOfDice ) {
            case 7: // win with 7 on first roll
            case 11: // win with 11 on first roll
                gameStatus = WON; 
                cout << "Player Rolled: " << sumOfDice << " Hence Wins." << endl;
                break;
            case 2: // lose with 2 on first roll
            case 3: // lose with 3 on first roll
            case 12: // lose with 12 on first roll
                gameStatus = LOST;
                cout << "Player Rolled: " << sumOfDice << " Hence Lost." << endl;
                break;
            default: // did not win or lose, so remember point
                gameStatus = CONTINUE; // game is not over 
                myPoint = sumOfDice; // remember the point 
                cout << "Player Rolled: " << sumOfDice << " Hence Continue." 
                     << endl;
                cout << "Point To Reproduce to Win is: " << myPoint << endl; 
                break; // optional at end of switch
        } // end switch

        // while game is not complete not won not lost
        while ( gameStatus == CONTINUE ) {
            sumOfDice = rollDice(); // roll dice again

            // determine game status
            
            // win by making point 
            if ( sumOfDice == myPoint ) {
                gameStatus = WON;
                cout << "Point Reproduced again. Hence Won" << endl;
                break; // breaking the loop
            } 

            // lose by rolling 7 before point
            if ( sumOfDice == 7 ) {
                gameStatus = LOST;
                cout << "Lost by Rolling 7" << endl;
                break; // breaking the loop
            } 
        }//end while

        // display won or lost message
        if( gameStatus == WON )
            cout << "Player wins" << endl;
        else cout << "Player Losses" << endl;
    
    } // end main

    /*
     * Function Body - rollDice
     * This function calculate sum and display results
     * Input Param are: -NA-
     * return: the sum of 2 dice
     */    
    int rollDice() {
        // pick random die values
        int die1 = 1 + rand() % 6; // first die roll 
        int die2 = 1 + rand() % 6; // second die roll    

        int sum = die1 + die2; // compute sum of die values

        // display results of this roll
        cout << "Player rolled " << die1 << "+" << die2 << "=" << sum <<endl;
        return sum; // end function rollDice 
    } // end function rollDice

/*******************************************************************************

    $ ./S3_MP_CrapsDiceGame
    Player rolled 3+3=6
    Player Rolled: 6 Hence Continue.
    Point To Reproduce to Win is: 6
    Player rolled 4+1=5
    Player rolled 3+6=9
    Player rolled 6+6=12
    Player rolled 1+1=2
    Player rolled 5+4=9
    Player rolled 5+5=10
    Player rolled 2+1=3
    Player rolled 1+4=5
    Player rolled 1+5=6
    Point Reproduced again. Hence Won
    Player wins

    $ ./S3_MP_CrapsDiceGame
    Player rolled 5+2=7
    Player Rolled: 7 Hence Wins.
    Player wins

    $ ./S3_MP_CrapsDiceGame
    Player rolled 4+1=5
    Player Rolled: 5 Hence Continue.
    Point To Reproduce to Win is: 5
    Player rolled 2+4=6
    Player rolled 5+2=7
    Lost by Rolling 7
    Player Losses


*******************************************************************************/

