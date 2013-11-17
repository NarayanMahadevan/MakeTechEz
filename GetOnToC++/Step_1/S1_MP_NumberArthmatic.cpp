    //
    //  Program Name - S1_MP_NumberArthmatic.cpp
    //  Series: GetOnToC++ Step: 1 Main Program
    //
    //  Purpose: Determine the value of global variable a using expression 
    //           a = 2/3*b + c*c - c%c + 50% of b/c. Where b and c are input 
    //           values taken from the user
    //
    //  Compile: g++ S1_MP_NumberArthmatic.cpp -o S1_MP_NumberArthmatic
    //  Execute: ./S1_MP_NumberArthmatic
    //
    //  Created by Narayan Mahadevan on 10/11/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Macro to calculate percentage
    #define PERC_VAL(b, c) (0.5 * (b/c))

    // Global Variable to hold value a
    double a = 0;

    main ( ) { 

        // Local Variables to hold value b and c
        int b = 0, c = 0;

        // Input Operator to take User Input for course marks
        cout << "Enter any two values: \a";
        cin >> b >> c;

        // Use Arthmatic Expression to find value of a
        // Checkout the Operator Precedence and associativity to understand how
        // compiler resolves arthmatic expression.
        a = 2/3*b + c*c - c % c + PERC_VAL(b, c);

        // Output the Result
        cout << "The Value of a = " << a << endl;

    }

