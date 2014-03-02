    //
    //  Program Name - S5_SP_PointerArrayDemo.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates pointer and array relationship using
    //           pointer expression and pointer comparisons.
    //
    //  Compile: g++ S5_SP_PointerArrayDemo.cpp -o exe/S5_SP_PointerArrayDemo
    //  Execute: exe/S5_SP_PointerArrayDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <assert.h>
    using namespace std;

    const int MAX = 3;

    int main ()
    {
       int  v[MAX] = {10, 100, 200};
       int  *vPtr = NULL, *qPtr = 0; // assigning ptr to null
       int i = 0;

       // vPtr points to the first element of the array v
       //vPtr = v; qPtr = v + 1;
       //if (vPtr == qPtr) cout << "BOTH ARE EQUAL" << endl;
       //else if (vPtr != qPtr) cout << "BOTH ARE NOT EQUAL" << endl;
       //if (vPtr > qPtr) cout << "vPtr > qPtr" << endl;
       //else if (vPtr < qPtr) cout << "vPtr < qPtr" << endl;

       cout << "Address of vPtr is: " << vPtr << endl;
       while ( vPtr && vPtr <= &v[MAX - 1] ) 
       {
          cout << "Address of v[" << i << "] = ";
          cout << vPtr << endl;

          cout << "Value of v[" << i << "] = ";
          cout << *vPtr << endl;

          // Using Pointer expression to re-reference vPtr
          i++;
          vPtr++;

          // Note that the vPtr points to some junk memory when i >= max
          if (i >= MAX && vPtr != NULL)
             cout << "Address of vPtr pointing to unwanted memory is: " << vPtr 
                  << "\nJUNK Value is: " << *vPtr << endl;
       }
       return 0;
    }


