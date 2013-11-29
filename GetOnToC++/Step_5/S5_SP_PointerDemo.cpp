    //
    //  Program Name - S5_SP_PointerDemo.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates & and * pointer operators.
    //
    //  Compile: g++ S5_SP_PointerDemo.cpp -o S5_SP_PointerDemo
    //  Execute: ./S5_SP_PointerDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main() 
    {
        // Local Variable

        int y = 5; // y is an integer 

        // Declare pointer variable yPtr which is a pointer to an integer.
        // Here yPtr is initialized to null, equivalent to initializing to 0 
        // i.e. int *yPtr = 0; Initializing the pointer to null will ensure no 
        // memory is allocated during declaration
        // Note that If initialized to null then the assignment statement of 
        // *yPtr = 5 will lead to segmentation fault as no memory is allocated
        // to the Pointer 
        int *yPtr = NULL; 

        // Printing yPtr before assignment.
        // Note that printing the content of yPtr i.e. *yPtr will result in
        // Segmentation Fault as the yPtr memory is not yet allocated or assigned
        cout << "As yPtr is initialized to null, hence value of yPtr is: " 
             << yPtr << endl;

        // yPtr is set the address of y in other words yPtr is pointing to y
        	yPtr = &y; 

        cout << "\nThe address of y is " << &y
             << "\nThe value of yPtr is " << yPtr << endl;
        cout << "\nThe value of y is " << y
             << "\nThe value of *yPtr is " << *yPtr << endl;
        
        // If the value is updated and since yPtr is pointing to the same memory, 
        // hence the value of yPtr will be 9
        y = 9;

        cout << "\nThe updated value of y after y = 9 is " << y
             << "\nThe updated value of *yPtr is " << *yPtr << endl;

        // Similar case as above, since the variable y and yPtr are pointing to 
        // the same memory, updating one will update the other
        *yPtr = 11;

        cout << "\nThe Updated value of y after *yPtr = 11 is " << y
             << "\nThe updated value of *yPtr is " << *yPtr << endl;


        // As you can see the output the memory address of the content of the 
        // yPtr is same as the content in the address of the yPtr
        cout << "\nShowing that * and & are inverses of each other." 
             << " \n&*yPtr = " << &*yPtr
             << "\n*&aPtr = " << *&yPtr << endl;

        cout << "\nThe sizeof memory stored by Pointer: " << sizeof(yPtr)
             << "\nAnd the sizeof memory stored by content of the pointer is: "
             << sizeof(*yPtr) << " bytes and is same as memory size of int" 
             << endl;

    } // end main

/********************************************************************

RESULT:

    $ ./S5_SP_PointerDemo
    As yPtr is initialized to null, hence value of yPtr is: 0

    The address of y is 0x7fff5a5efaf4
    The value of yPtr is 0x7fff5a5efaf4

    The value of y is 5
    The value of *yPtr is 5

    The updated value of y after y = 9 is 9
    The updated value of *yPtr is 9

    The Updated value of y after *yPtr = 11 is 11
    The updated value of *yPtr is 11

    Showing that * and & are inverses of each other. 
    &*yPtr = 0x7fff5a5efaf4
    *&aPtr = 0x7fff5a5efaf4

    The sizeof memory stored by Pointer: 8
    And the sizeof memory stored by content of the pointer is: 4 bytes and is same as memory size of int

********************************************************************/

