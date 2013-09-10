    //
    //  Program Name - S2_Circle.cpp
    //  Series: GetOnToC++ Step: 2
    //
    //  Purpose: This program defines Circle and Square Shape and computes its area
    //
    //  Compile: g++ S2_Circle.cpp -o S2_Circle
    //  Execute: ./S2_Circle
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Use the mathematics library, which contains a declaration for M_PI: 
    #include <math.h>

    class Circle {
        public:
            // Member Variable mRadius. m indicates member vairable
            int mRadius;

        // This method is a Member Function as it computes the area using 
        // attribute of the circle.
        // Member Functions are covered in the Section 4 of Step 2
        double area() { 
            // M_PI is a macro defined in Math.h and its value is 3.14159            
            return M_PI*mRadius*mRadius;
        }

    } aCircle; // Note that the class definition ends with semicolon. 
               // Here a global variable aCircle is difined of type Circle

    // Main Function as the execution starts at the main function
    main ( ) { 
        // Section 1 - Declaration of Variables 
        int rad = 10;

        // Assigning value to aCircle Objects member variable.
        // Notice that the member variable mRadius is accessed using access 
        // operator (.) 
        aCircle.mRadius = rad;

        // Notice that the area() function takes Circle Data type as Parameter
        cout << "Area of the Circle = " << aCircle.area() << endl;

        // Calculating the size of Circle class
        // Note since the Circle class holds one integer vairable radius and 
        // hence size of user defined data type Circle is 4 bytes.
        cout << "Size of Circle Class = " << sizeof(Circle) << endl;
        
        // Calculating the size of Circle Object aCircle
        cout << "Size of Circle Object = " << sizeof(aCircle) << endl;
    }
