    //
    //  Program Name - S5_SP_ArrayOfPointers.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: This program demonstrates array of pointers using string array 
    //           suit having hearts, diamonds, clubs and spades to represend 
    //           the deck of cards. Traverse through the first dimensional array 
    //           of rows and show the characters in each element of second 
    //           dimensional array of columns. Also show that even in 2D array 
    //           all the elements of the array are co-located in memory
    //
    //  Compile: g++ S5_SP_ArrayOfPointers.cpp -o exe/S5_SP_ArrayOfPointers
    //  Execute: exe/S5_SP_ArrayOfPointers
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <string>
     
    using namespace std;
    const int MAX = 4;
     
    int main ()
    {
        // Declare 
        const char * const suit[ MAX ] = { "Hearts", "Diamonds", 
                                           "Clubs", "Spades" };
        const char * suitPtr = suit[0]; int cntr = 0;
        int suitLength = 0;

        for (int i = 0; i < MAX; i++)
        {
            suitLength += strlen(suit[i]);
            cout << "Value of suit[" << i << "] = " << suit[i] << endl;
            
            cntr = 0; 

            suitPtr = suit[i]; 
            
            // Traverses in the while loop till the empty character is found
            while (*suitPtr) 
            {
                cout << "Value of suit[ " << i << " ][ "<< cntr << "] = " << *(suitPtr) << endl;
                cntr++; suitPtr++;
            }
            cout << endl;
        }

        // Note this loop shows that the 2D Arrays or Array of Pointers 
        // behave like single dimensional array as we can navigate using 
        // suitPtr to print all characters of all the 4 elements of the 
        // suit array. This is because in array, the whole memory block
        // is co-located...

        cout << "Total characters in suit array is: " <<  suitLength << endl;    
        cntr = 0; suitPtr = suit[0];   
        // Traverses in the while loop till the empty character is found
        while (*suitPtr ) 
        {
            if (cntr >= suitLength) break;
            cout << *(suitPtr) << " ";
            cntr++; suitPtr++;
            if (!(*suitPtr)) { 
                cout << *(suitPtr) << " "; 
                suitPtr++;
            }                    
        }

        cout << endl;
        return 0;
    }

/********************************************************************

RESULT:

    $ exe/S5_SP_ArrayOfPointers
    Value of suit[0] = Hearts
    Value of suit[ 0 ][ 0] = H
    Value of suit[ 0 ][ 1] = e
    Value of suit[ 0 ][ 2] = a
    Value of suit[ 0 ][ 3] = r
    Value of suit[ 0 ][ 4] = t
    Value of suit[ 0 ][ 5] = s

    Value of suit[1] = Diamonds
    Value of suit[ 1 ][ 0] = D
    Value of suit[ 1 ][ 1] = i
    Value of suit[ 1 ][ 2] = a
    Value of suit[ 1 ][ 3] = m
    Value of suit[ 1 ][ 4] = o
    Value of suit[ 1 ][ 5] = n
    Value of suit[ 1 ][ 6] = d
    Value of suit[ 1 ][ 7] = s

    Value of suit[2] = Clubs
    Value of suit[ 2 ][ 0] = C
    Value of suit[ 2 ][ 1] = l
    Value of suit[ 2 ][ 2] = u
    Value of suit[ 2 ][ 3] = b
    Value of suit[ 2 ][ 4] = s

    Value of suit[3] = Spades
    Value of suit[ 3 ][ 0] = S
    Value of suit[ 3 ][ 1] = p
    Value of suit[ 3 ][ 2] = a
    Value of suit[ 3 ][ 3] = d
    Value of suit[ 3 ][ 4] = e
    Value of suit[ 3 ][ 5] = s

    Total characters in suit array is: 25
    H e a r t s  D i a m o n d s  C l u b s  S p a d e s  

********************************************************************/

