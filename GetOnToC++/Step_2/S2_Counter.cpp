    //
    //  Program Name - S2_Counter.cpp
    //  Series: GetOnToC++ Step: 2
    //
    //  Purpose: This program Demonstrated Class Definition using a Counter 
    //           Class to maintain the count
    //
    //  Compile: g++ S2_Counter.cpp -o S2_Counter
    //  Execute: ./S2_Counter
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    class Counter {
        public:
            // Member Variable count to store the counter value. 
            // The starting char m indicates member vairable
            int mCount;

    } aCounter; // Note that the class definition ends with semicolon. 
                // Here a global variable aCounter is difined of type Counter

    // Main Function as the execution starts at the main function
    main ( ) { 
        // Section 1 - Declaration of Variables 
        int count = 10;

        // Assigning value to aCounter member variable.
        // Notice that the member variable mCounter is accessed using access 
        // operator (.) 
        aCounter.mCount = count;

        // Printing the counter value using mCounter Objects member vairable 
        cout << "Assigned value = " << count <<
                " And Objects mCount Value = " << aCounter.mCount << endl;

        // Calculating the size of Counter class and Counter Object. Both are same. 
        // Note since the Counter class holds one integer vairable radius and 
        cout << "Size of Counter Class = " << sizeof(Counter) << endl 
             << "Same as sizeof(int), which is = " << sizeof(int) << endl  
             << "Same as Size of Counter Object = " << sizeof(aCounter) << endl;
        
    }
