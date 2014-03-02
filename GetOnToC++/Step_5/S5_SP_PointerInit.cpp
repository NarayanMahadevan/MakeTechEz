    //
    //  Program Name - S5_SP_PointerInit.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates pointer declaration and assignment.
    //
    //  Compile: g++ S5_SP_PointerInit.cpp -o exe/S5_SP_PointerInit
    //  Execute: exe/S5_SP_PointerInit
    //
    //  Online Execution: http://ideone.com/1EsbCY
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main() 
    {
        // Declare pointer variable yPtr which is a pointer to an integer.
        int *yPtr, y = 5; 

        // Printing yPtr before assignment.
        cout << "\nThe address of yPtr is " << yPtr << endl;

        cout << "\nThe sizeof memory stored by Pointer: " << sizeof(yPtr)
             << endl;

    } // end main

