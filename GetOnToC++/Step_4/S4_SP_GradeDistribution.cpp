    //
    //  Program Name - S4_SP_GradeDistribution.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: This Program Demonstrates the course mark obtained by student
    //           in a bar of astricks to visualize the grade dis- tribution. 
    //           Suppose the grades were 87, 68, 94, 100, 83, 78, 85, 91, 76 
    //           and 87. Show the grade distribution in 0-9, 10 - 19, etc. So
    //           the mark 87 fall in the rage of 80 - 89
    //
    //  Compile: g++ S4_SP_GradeDistribution.cpp -o S4_SP_GradeDistribution
    //  Execute: ./S4_SP_GradeDistribution
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() 
    {
        const int marksDistrSize = 11, numStudents = 10;

        // Initializing the array with Marks obtained by students
        int marks[numStudents] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 }; 

        // Initializing Marks Distributions array elements with 0
        int marksDistribution[marksDistrSize] = {};

        cout << "Grade distribution:" << endl; 

        // for loop to find the mark distribution
        for(int i = 0; i < numStudents; ++i)
        {
            ++marksDistribution[marks[i]/10];
        }

        // for each element of array n, output a bar of the chart
        for(int i = 0; i < marksDistrSize; ++i)
        {
            // output bar labels ("0-9:", ..., "90-99:", "100:" )
            if ( i == 0 )
                cout << " 0-9: ";
            else if ( i == 10 )
                cout << "  100: ";
            else
                cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";

            // print bar of asterisks
            for ( int stars = 0; stars < marksDistribution[ i ]; ++stars )
                cout << '*';

            cout << endl; // start a new line of output
        }  // end outer for
    }

