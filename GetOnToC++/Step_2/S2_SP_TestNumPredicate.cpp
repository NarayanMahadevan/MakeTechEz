    //
    //  Program Name - S2_SP_TestNumPredicate.cpp
    //  Series: GetOnToC++ Step: 2 Side Program
    //
    //  Purpose: Write a Program that tests the Equality and Relational operator
    //           between an Int and a double value
    //
    //  Compile: g++ S2_SP_TestNumPredicate.cpp -o S2_SP_TestNumPredicate
    //  Execute: ./S2_SP_TestNumPredicate
    //
    //  Created by Narayan Mahadevan on 10/11/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // standard C++ math library
    #include <cmath>
    
    // standard C++ library to format the output
    #include <iomanip>
    
    // Defining a Macro determine pass or fail
    // Note that this alternate way of writinh if/else loop
    #define PASS_FAIL(grade) (grade >= 60 ? "PASSED" : "FAILED")

    int main ( ) { 
        int i = 50; 
        double d = 50.0; 

        // Note that either the int is caseted as double or viceversa to apply 
        // equal and relational operator between the two numbers

        cout << "i == (int) d    yields " << (i == (int) d)    << endl; 
        cout << "(double) i != d yields " << ((double) i != d) << endl; 
        cout << "i > (int) d     yields " << (i > (int) d)     << endl; 
        cout << "(double) i < d  yields " << ((double) i < d)  << endl; 
        cout << "i >= (int) d    yields " << (i >= (int) d)    << endl; 
        cout << "(double) i <= d yields " << ((double) i <= d) << endl; 

        // Read the mark from user input        
        int mark = 0;
        cout << "Enter the mark = ";
        cin >> mark;
        
        // check the if loop to determine the grade
        char grade;
        if (mark >= 90 ) grade = 'A';
        else if (mark >= 80) grade = 'B';
        else if (mark >= 70) grade = 'C';
        else grade = 'D';

        // Printing the result and the grade
        cout << "The result is: " << PASS_FAIL(grade) << " And Grade is: " << grade << endl;

        switch (grade) {
            case 'A' : 
                cout << "Marks Scored is more then 90" << endl;
                break;
            case 'B' : 
                cout << "Marks Scored is more then 80" << endl;
                break;
            case 'C' : 
                cout << "Marks Scored is more then 70" << endl;
                break;
            case 'D' : 
                cout << "Marks Scored is more then 50" << endl;
                break;
            default :
                cout << "Got Failed Marks" << endl;
        }

        // Read the Base Number and the Power of number
        int baseNum = 0, powerOf = 0;

        cout << "Enter Base Number: "; cin >> baseNum;
        cout << "Enter the powerOf number: "; cin >> powerOf;
        
        // result is achieved by multiplying base number n times, 
        // where n is the powerOf number.
        int n = powerOf; int result = 1;
        while (n != 0) {
            result = result * baseNum;
            n = n - 1;
        }
        
        // Printing the result
        cout << baseNum << " to power of " << powerOf << " is: " << result << endl;

        // Setting the deposit amount, starting principal and the interest rate
        double amount = 0.0, principal = 1000.0, rate = .05; 

        // The Width for output Amount on deposit is set to 21
        cout << "Year" << setw( 21 )
             << "Amount on deposit" << endl;

        for(int year = 1; year <= 10; year++ ) { 
            // Calculating the amount including the principal and interest based
            // on the year value
            amount = principal * pow( 1.0 + rate, year );

            // Prints the value of the variable year and amount based on the 
            // format specified by the parameterized stream manipulator setw, 
            // setiosflags and setprecision

            // The setw(4) specifies the year will be printed with atleast 
            // 4 char position. If the value is less then 4 chars then the 
            // year will be printed right justified by default

            // The call to setiosflags(ios::fixed | ios::showpoint) is used 
            // to print the amount as fixed point value with a decimal point. 

            // The setprecision is used to set the output to 2 digit precision

            cout << setw(4) << year 
                 << setiosflags( ios::fixed | ios::showpoint ) 
                 << setw( 21 ) << setprecision( 2 )
                 << amount << endl ;
        }
        return 0;
    }
