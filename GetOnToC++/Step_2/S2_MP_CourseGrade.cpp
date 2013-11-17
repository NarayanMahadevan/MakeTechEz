    //
    //  Program Name - S2_MP_CourseGrade.cpp
    //  Series: GetOnToC++ Step: 1
    //
    //  Purpose: This program takes user input for course marks & total marks 
    //           and computes the number of students passed, failed and have 
    //           got A, B, C and D grade. 
    //
    //  Compile: g++ S2_MP_CourseGrade.cpp -o S2_MP_CourseGrade
    //  Execute: ./S2_MP_CourseGrade
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Constants for A, B, C and D Grade
    const int  A_GRADE = 90, B_GRADE = 80, C_GRADE = 70, D_GRADE = 60;

    // Macros to calculate percentage
    #define PERC_MARK(mark, totalMark) (((double)mark/(double)totalMark)*100)


    main ( ) { 
        // Variables to capture Course Mark, Total Mark, Percentage and Grade
        int mark = 0, totalMark = 0;
        double percMark = 0.0;
        char grade;

        // Variabes to hold number of students with A, B, C, and D grade and also 
        // number of students passed and failed 
        int numAGrade = 0, numBGrade = 0, numCGrade = 0, numDGrade = 0;
        int numPassed = 0, numFailed = 0;

        // Reading from user input total mark
        cout << "Enter Total Marks: "; cin >> totalMark;

        // Processing Phase
        cout << "Enter Mark and -1 to end: "; cin >> mark;

        // While loop to take in multiple User Inputs
        while ( mark != -1 ) {

            // Calculating the percentage
            percMark = PERC_MARK(mark, totalMark);  
            cout << "Total Mark: " << totalMark 
                 << " Student Mark: " << mark
                 << " Perc Mark = " << percMark << endl;       

            // Two Way Conditional loop to determine A, B, C and D Grade
            if (percMark >= A_GRADE) grade = 'A';
            else if (percMark >= B_GRADE) grade = 'B';
            else if (percMark >= C_GRADE) grade = 'C';
            else if (percMark >= D_GRADE) grade = 'D';
            else grade = 'F'; 


            // Multiway Conditional loop to calc num of A, B, C and D Grade
            switch (grade) {
                case 'A' : case 'a' :
                    // Using Increment Operator to increment the number
                    numAGrade++; numPassed++;
                    break;
                case 'B' : case 'b' : 
                    numBGrade++; numPassed++;
                    break;
                case 'C' : case 'c' :
                    numCGrade++; numPassed++;
                    break;
                case 'D' : case 'd' :
                    numDGrade++; numPassed++;
                    break;
                default :
                    numFailed++;
            }

            // Entering Another Mark
            cout << "Enter Mark and -1 to end: "; cin >> mark;
        }

        // Print Results

        cout << "Number of Students: " << numPassed+numFailed
             << " Number Passed: " << numPassed 
             << " And Number Failed: " << numFailed << endl;

        cout << "Number of AGrade Students: " << numAGrade 
             << "\nNumber of BGrade Students: " << numBGrade 
             << "\nNumber of CGrade Students: " << numCGrade
             << "\nAnd Number of DGrade Students: " << numDGrade << endl;

    }

