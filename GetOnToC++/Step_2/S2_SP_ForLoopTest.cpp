    //
    //  Program Name - S2_SP_ForLoopTest.cpp
    //  Series: GetOnToC++ Step: 2 Side Program
    //
    //  Purpose: Write a Program to Sum the Odd and Even Integers
    //
    //  Compile: g++ S2_SP_ForLoopTest.cpp -o S2_SP_ForLoopTest
    //  Execute: ./S2_SP_ForLoopTest
    //
    //  Created by Narayan Mahadevan on 10/11/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main() {
        // Local Variable for the user defined number and variable to
        // maintain the sum of odd and even numbers
        int num = 0, sumOdd = 0, sumEven = 0;

        // Read the Number from the user
        cout << "Enter a number: "; cin >> num; 

        for ( int i = 0; i <= num; i++ ) // iterate from 0 to num
        {
            if (i%2 == 0) sumEven += i; // Adding Even Numbers
            else sumOdd += i; // Adding Odd Numbers
        } // end for

        // Printing the Result
        cout << "Sum of Even Numbers: " << sumEven
             << "\nSum of Odd Numbers: " << sumOdd << endl;

        int counter = 1; // initialize counter
        do
        {   
            cout << counter << " "; // display counter
            ++counter; // increment counter
        } while ( counter <= 10 ); // end do...while
        cout << endl;

    } // end main
