    //
    //  Program Name - S5_SP_Pointer2Pointer.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates pointer to a pointer
    //
    //  Compile: g++ S5_SP_Pointer2Pointer.cpp -o exe/S5_SP_Pointer2Pointer
    //  Execute: exe/S5_SP_Pointer2Pointer
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main() 
    {
        int  var;
        int  *ptr;
        int  **pptr;

        var = 3000;

        // take the address of var
        ptr = &var;

        // take the address of ptr using address of operator &
        pptr = &ptr;

        // take the value using pptr
        cout << "Value of var :" << var << endl;
        cout << "Address of ptr is: " << ptr << " And Value is:" << *ptr << endl;
        cout << "Address of pptr is: " << pptr << " Value of *pptr:" << *pptr << endl;
        cout << "Value available at **pptr :" << **pptr << endl;

        return 0;
    }

/********************************************************************

RESULT:

    $ ./S5_SP_Pointer2Pointer
    Value of var :3000
    Address of ptr is: 0x7fff5a9f4af4 And Value is:3000
    Address of pptr is: 0x7fff5a9f4ae8 Value of *pptr:0x7fff5a9f4af4
    Value available at **pptr :3000

********************************************************************/

