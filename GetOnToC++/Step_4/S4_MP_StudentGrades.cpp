    //
    //  Program Name - S4_MP_StudentGrades.cpp
    //  Series: GetOnToC++ Step: 4 Main Program
    //
    //  Purpose: This program stores the students and their grade in 2D Array. 
    //           Using the 2D Array, this program finds the lowest grade, highest
    //           grade, and the mean i.e. the average grade. First sort the array 
    //           using bubble sort and then find the lowest, highest and the 
    //           average grade. Further for the overall class show the grade 
    //           distribution.
    //
    //  Compile: g++ S4_MP_StudentGrades.cpp -o S4_SP_StudentGrades
    //  Execute: ./S4_SP_StudentGrades
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    #include <string.h> // This header file is included to use function memcpy
    using namespace std;

    // Constants
    const int students = 10; // number of students
    const int tests = 3; // number of tests

    // Function Prototype

    void sortStudentGrades( int [][tests] ); // Sorting each Students Grades
    void doBubbleSort( int [], int ); // Sort Array using Bubble Sort
    float averageGrade( const int [], int ); // Find the average Grade for each Student
    void printGrades( const int [][tests] ); // Printing Student Grades

    // Printing Grade Analytics
    void printGradeAnalytics( const int [][tests], int  [][tests] ); 

    int main()
    {
        // two-dimensional array of student grades
        int studentGrades[ students ][ tests ] =
            {   { 87, 96, 70 },
                { 68, 87, 90 },
                { 94, 100, 90 }, 
                { 100, 81, 82 }, 
                { 83, 65, 85 },
                { 78, 87, 65 },
                { 85, 75, 83 },
                { 91, 94, 100 }, 
                { 76, 72, 84 },
                { 87, 93, 73 }  };

        // Printing the grades
        cout << "\nThe grades for the student is:\n\n";
        printGrades( studentGrades );
 
        // This local variable array is used to store sorted student grades. 
        // Note - Its better to initialize the array to 0 else the array will 
        //        have junk values.
        int sortedStudentGrades[ students ][ tests ] = {};

        // Using function memcpy to copy into sortedStudentGrades array from 
        // studentGrades array. Its better to use memcpy function then using 
        // a nested loop to copy every element. 
        // Note - In many platforms, memcpy() is written in highly-optimized 
        //        assembly code. Therefore, the performance gain of using 
        //        memcpy() instead of nested loops can be significant.

        memcpy(sortedStudentGrades, studentGrades, sizeof(sortedStudentGrades)); 

        // Sorting the Student Grades
        sortStudentGrades( sortedStudentGrades );

        // Printing the grades
        cout << "\nThe grades for the student after Sorting is:\n\n";
        printGrades( sortedStudentGrades );
 
        // Printing the grades
        printGradeAnalytics( studentGrades, sortedStudentGrades );

    } // end main

    // Sorting each Students grades using Bubble Sort Algorithm
    void sortStudentGrades( int grades[][tests] )
    {
        // create rows/columns of text representing array grades
        for ( int student = 0; student < students; ++student )
        {
            doBubbleSort(grades[student], tests);
        } // end of for loop
    } // end sortStudentGrades function

    // Sort Array using Bubble Sort
    void doBubbleSort( int a[], int size) 
    {
        int hold;

        // Variable to track the number of iteration needed 
        // for Sorting
        int iter = 0; 

        // Boolean to Check if the Sorting is complete
        bool isSortComplete = true; 

        // loop over the elements of the array
        for ( int pass = 1; pass < size; pass++ )
        {
            isSortComplete = true;
            iter++; // Incrementing the Iteration
            for ( int j = 0; j < size - 1; j++ )
            {
                iter++; // Incrementing the Iteration
                if ( a[j] > a [j+1] ) {
                    isSortComplete = false;
                    hold = a[j];
                    a[j] = a [j+1];
                    a [j+1] = hold;
                }
            } // end inner for loop

            // Breaking out of for loop if soring is complete
            if (isSortComplete) break;
        } // end for loop

        //cout << "\nNumber of Iteration needed for Sorting is: " << iter << endl;
    } // end of function doBubbleSort

    // Average Grade for Each Student
    float averageGrade( const int setOfGrades[], int tests) 
    {
        int total = 0; // initialize total
        // sum grades in array
        for ( int grade = 0; grade < tests; ++grade ) 
            total += setOfGrades[ grade ];
        // return average of grades
        return static_cast< double >( total ) / tests;
    }

    void printGrades( const int grades[][tests] )
    {
        // create rows/columns of text representing array grades
        for ( int student = 0; student < students; ++student )
        {
            cout << "Student " << setw( 4 ) << student + 1;

            // output student's grades
            for ( int test = 0; test < tests; ++test )
                cout << setw( 9 ) << grades[ student ][ test ];

            cout << endl;
        } // end of outer for loop
    } // end printGrades

    void printGradeAnalytics( const int grades[][tests], 
                              int sortedGrades[][tests] )
    {
        // Lowest, Highest and Average Grade of the Students and the corresponding 
        // Student
        int lowestGrade = 100, highestGrade = 0;
        int lowestGrade4Student = 0, highestGrade4Student = 0;

        // stores frequency of grades in each range of 10 grades
        const int frequencySize = 11;
        int frequency[ frequencySize ] = {}; // initialize elements to 0

        cout << "\nThe Grade Analytics on the Students Grades are:\n\n";
        cout << "\t\t"; // allign the column heads

        // create a column heading for each of the tests
        for ( int test = 0; test < tests; ++test )
            cout << " Test " << test+1 << " ";

        cout << " Lowest " << " Highest " << " Average" << endl; // student average column heading 
        
        // create rows/columns of text representing array grades
        for ( int student = 0; student < students; ++student )
        {
            cout << "Student " << setw( 4 ) << student + 1;

            // output student's grades
            for ( int test = 0; test < tests; ++test ) {
                cout << setw( 9 ) << grades[ student ][ test ];
                ++frequency[ grades[ student ][ test ] / 10 ];
            }

            // Printing the lowest and highest grade for each student
            cout << setw( 8 ) << fixed << sortedGrades[ student ][0];
            cout << setw( 8 ) << fixed << sortedGrades[ student ][tests-1];

            // call member function getAverage to calculate student's average;
            // pass row of grades and the value of tests as the the arguments
            double average = averageGrade( grades[ student ], tests );
            cout << setw( 9 ) << setprecision( 2 ) << fixed << average;

            // Initializing the lowest and highest grade
            if (student == 0) {
                lowestGrade4Student = student+1;
                lowestGrade = sortedGrades[ student ][0]; 
                highestGrade4Student = student+1;
                highestGrade = sortedGrades[ student ][tests-1]; 
            }

            // Finding the Student with Lowest and Highest Grade

            if (sortedGrades[ student ][0] < lowestGrade) {
                lowestGrade4Student = student+1;
                lowestGrade = sortedGrades[ student ][0]; 
            }

            if (sortedGrades[ student ][tests-1] > highestGrade) {
                highestGrade4Student = student+1;
                highestGrade = sortedGrades[ student ][tests-1]; 
            }

            cout << endl;
        } // end of outer for loop

        // Printing the Lowest and Highest Grade
        cout << "\nThe Lowest Grade is: " << lowestGrade 
             << " Obtained by Student Num: " << lowestGrade4Student << endl;
        cout << "The Highes Grade is: " << highestGrade 
             << " Obtained by Student Num: " << highestGrade4Student << endl;

        // Printing the Grade Distribution Chart
        // for each element of array n, output a bar of the chart
        cout << "\nOverall grade distribution:" << endl;
        for(int i = 0; i < frequencySize; ++i)
        {
            // output bar labels ("0-9:", ..., "90-99:", "100:" )
            if ( i == 0 )
                cout << " 0-9: ";
            else if ( i == 10 )
                cout << "  100: ";
            else
                cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";
            // print bar of asterisks
            for ( int stars = 0; stars < frequency[ i ]; ++stars )
                cout << '*';
            cout << endl; // start a new line of output
        }  // end outer for

    } // end printGrades


/********************************************************************

RESULT:

    $ ./S4_SP_StudentGrades

    The grades for the student is:

    Student    1       87       96       70
    Student    2       68       87       90
    Student    3       94      100       90
    Student    4      100       81       82
    Student    5       83       65       85
    Student    6       78       87       65
    Student    7       85       75       83
    Student    8       91       94      100
    Student    9       76       72       84
    Student   10       87       93       73

    The grades for the student after Sorting is:

    Student    1       70       87       96
    Student    2       68       87       90
    Student    3       90       94      100
    Student    4       81       82      100
    Student    5       65       83       85
    Student    6       65       78       87
    Student    7       75       83       85
    Student    8       91       94      100
    Student    9       72       76       84
    Student   10       73       87       93

    The Grade Analytics on the Students Grades are:

		     Test 1  Test 2  Test 3  Lowest  Highest  Average
    Student    1       87       96       70      70      96    84.33
    Student    2       68       87       90      68      90    81.67
    Student    3       94      100       90      90     100    94.67
    Student    4      100       81       82      81     100    87.67
    Student    5       83       65       85      65      85    77.67
    Student    6       78       87       65      65      87    76.67
    Student    7       85       75       83      75      85    81.00
    Student    8       91       94      100      91     100    95.00
    Student    9       76       72       84      72      84    77.33
    Student   10       87       93       73      73      93    84.33

    The Lowest Grade is: 65 Obtained by Student Num: 5
    The Highes Grade is: 100 Obtained by Student Num: 3

    Overall grade distribution:
     0-9: 
    10-19: 
    20-29: 
    30-39: 
    40-49: 
    50-59: 
    60-69: ***
    70-79: ******
    80-89: ***********
    90-99: *******
      100: ***

********************************************************************/


