    //
    //  Program Name - S2_Box.cpp
    //  Series: GetOnToC++ Step: 2
    //
    //  Purpose: This program demonstrates declaration of Member Variables of Box 
    //           class, creation of Box Object and calculating volume of the Box.
    //
    //  Compile: g++ S2_Box.cpp -o S2_Box
    //  Execute: ./S2_Box
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>

    using namespace std;

    class Box
    {
       public:
          double mLength;   // Length of a box
          double mWidth;    // Width of a box
          double mHeight;   // Height of a box
    };

    /*
     * This function calculates the Volume of the Box 
     * Input Param: box Object of user defined data type Box
     * return: volume of the Box
     * Note: Here the scope of box Parameters is local to this function 
     * and hence it is call-by-value and the box object will have its own
     * memory
     */    
    double volumeOfBox(Box box) {
        double boxCarVol = 0.0;
        
        // Box Car Volume Computation using Arithmatic Operations
        boxCarVol = box.mHeight * box.mWidth * box.mLength;
        
        // Returns the Box Car Volume
        return boxCarVol;
    }

    int main( )
    {
        // Creating box1 and box2 as Object of Box Class
        Box box1;        // Declare instance box1 of type Box
        Box box2;        // Declare instance box2 of type Box
       
        // Since memory is allocated, box1 and box2 will have definite 
        // memory size. 

        // Calculating the size of box1 Object
        cout << "Size of box1 Object = " << sizeof(box1) << endl;

        // Calculating the size of box2 Object
        cout << "Size of box2 Object = " << sizeof(box2) << endl;
        
        double volume = 0.0;     // Store the volume of a box here
     
        // box 1 specification. Assigning value to member variables
        box1.mHeight = 4.0; 
        box1.mLength = 6.0; 
        box1.mWidth = 8.0;

        // box 2 specification
        box2.mHeight = 10.0;
        box2.mLength = 12.0;
        box2.mWidth = 14.0;
       
        // volume of box 1
        volume = volumeOfBox(box1);
        cout << "Volume of Box1 : " << volume <<endl;

        // volume of box 2
        volume = volumeOfBox(box2);
        cout << "Volume of Box2 : " << volume <<endl;
        return 0;
    }
