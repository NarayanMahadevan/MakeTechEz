    //
    //  Program Name - S5_SP_PointerArithmetic.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates pointer and array relationship using
    //           pointer arithmetic.
    //
    //  Compile: g++ S5_SP_PointerArithmetic.cpp -o exe/S5_SP_PointerArithmetic
    //  Execute: exe/S5_SP_PointerArithmetic
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Function Prototype
    void incrementArrayElements (int * const, int * const);
    void printArray (const int* const, const int* const);

    int main ()
    {
        int numbers [] = {10, 20, 30};

        // Print the Initial Array Elements
        cout << "Printing Initial Array Elements: ";
        printArray(numbers,numbers+3);
    
        // Increment Array Elements by 1
        cout << "Incrementing Array Elements" << endl;
        incrementArrayElements(numbers, numbers+3);

        // Printing the array
        cout << "Printing Incremented Array Elements: ";
        printArray(numbers,numbers+3);
        return 0;
    }


    void incrementArrayElements(int* const start, int* const stop)
    {
        	// Declare current pointer pointing to start of the element
        int * current = start;
        
        // Loop the current pointer from start to stop
        while (current != stop) {
        	// Increment the value
            (*current)++;  // increment value pointed
            // Increment the pointer
            ++current;     // increment pointer
        }
    }

    void printArray(const int* const start, const int* const stop)
    {
        	// Declare current pointer to a constant Interger. 
        	// Initialize current pointer to point to start of the element
        const int * current = start;
        
        // Loop the current pointer from start to stop
        while (current != stop) {
            // Print the value
            cout << *current << ' ';
            // Increment the pointer
            ++current;   
        }
        cout << endl;
    }

