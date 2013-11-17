    //
    //  Program Name - S2_SP_SwitchLoopTest.cpp
    //  Series: GetOnToC++ Step: 2 Side Program
    //
    //  Purpose: Write a Program that reads the grade as input and outputs the 
    //			 marks scored
    //
    //  Compile: g++ S2_SP_SwitchLoopTest.cpp -o S2_SP_SwitchLoopTest
    //  Execute: ./S2_SP_SwitchLoopTest
    //
    //  Created by Narayan Mahadevan on 10/11/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main ( ) { 

        // Create truth table for && (logical AND) operator
        cout << "Logical AND (&&)" 
             << "\nfalse && false: " << (false && false) 
             << "\nfalse && true: " << (false && true) 
             << "\ntrue && false: " << (true && false) 
             << "\ntrue && true: " << (true && true) << endl;

        // Create truth table for || (logical OR) operator
        cout << "Logical OR (||)" 
             << "\nfalse || false: " << (false || false)
             << "\nfalse || true: " << (false || true)
             << "\ntrue || false: " << (true || false)
             << "\ntrue || true: " << (true || true) << endl;

        // create truth table for ! (logical negation) operator
        cout << "Logical NOT (!)"
             << "\n!false: " << (!false) 
             << "\n!true: " << (!true) << endl;

        // Read the grade from user input        
        char grade;
        cout << "Enter the Grade A, B, C, or D = ";
        cin >> grade;
        
        switch (grade) {
            case 'A' : case 'a' :
                cout << "Marks Scored is more then 90" << endl;
                break;
            case 'B' : case 'b' : 
                cout << "Marks Scored is more then 80" << endl;
                break;
            case 'C' : case 'c' :
                cout << "Marks Scored is more then 70" << endl;
                break;
            case 'D' : case 'd' :
                cout << "Marks Scored is more then 50" << endl;
                break;
            default :
                cout << "Got Failed Marks" << endl;
        }

        return 0;
    }


