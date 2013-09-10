    //
    //  Program Name - S2_CreateClassesAndObjects.cpp
    //  Series: GetOnToC++ Step: 2
    //
    //  Purpose: This program defines Box Car and Tank Car class. Creates
    //           corresponding objects of Box Car and Tank Car and calls member 
    //			 function to computes the Volume of the Box Car and Tank Car.
    //
    //  Compile: g++ S2_CreateClassesAndObjects.cpp -o S2_CreateClassesAndObjects
    //  Execute: ./S2_CreateClassesAndObjects
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Use the mathematics library, which contains a declaration for M_PI: 
    #include <math.h>

    // Global Variables 

    // CurrentYear is a Global Vairable and indicates the current year     
    int gCurrentYear = 2013;

    // Section 1A - Box Car Class Defined Here
    class BoxCar {

        // public accessor Specifies member variables and functions can be accessed 
        // outside the class anywhere within the scope of the class object.
        public:
 
            // Section 2A - Box Car Class Member Variables Defined Here
            // Attributes of Box Car are length, width and height
            double mLength, mWidth, mHeight; 

            // Section 3A - Box Car Class Constructor Defined Here

            // Section 4A - Box Car Class Member Functions Defined Here

    };

    // Section 1B - Tank Car Class Defined Here
    class TankCar {
        
        // public accessor Specifies member variables and functions can be accessed 
        // outside the class anywhere within the scope of the class object.
        public:
            // Section 2B - Tank Car Class Member Variables Defined Here
            // Attributes of Tank Car are radius and length
            double  mRadius, mLength; 

            // Section 3B - Tank Car Class Constructor Defined Here

            // Section 4B - Tank Car Class Member Functions Defined Here

    };

    main ( ) { 

        // Size of Box Car and Tank Car Class
        cout << "Size of BoxCar Class = " << sizeof(BoxCar) << endl;
        cout << "Size of TankCar Class = " << sizeof(TankCar) << endl;
        
        // Declaration of Local Variables 

        // Variabes for Box Car
        double length = 0.0, width = 0.0, height = 0.0;
        
        // Vairables for Tank Car which is a Cylinder
        double radius = 0.0, lengthOfTankCar = 0.0;

        // Section 5A - Create BoxCar Object and Assign values to its member 
        // variable

        // Read in the Variables of Box Car and Tank Car
        cout << "Please Enter the Length, Width and Height of the Box Car." 
        	 << endl;
        cin >> length >> width >> height;  
        
        // Section 6A - Calling Member Function volume to calculate the Volume of 
        // BoxCar Object
        
        // Section 5B - Create TankCar Object and Assign values to its member 
        // variable
        
        cout << "Please Enter the Radius and Length of the Tank Car." << endl;
        cin >> radius >> lengthOfTankCar;  
        
        // Section 6B - Calling Member Function volume to calculate the Volume of 
        // TankCar Object
        
        // Display the Result
    }


