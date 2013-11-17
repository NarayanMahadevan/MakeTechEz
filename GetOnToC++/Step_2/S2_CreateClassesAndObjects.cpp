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

            // Section 3A - Box Car Class Member Functions Defined Here

            /*
             * This member function calculates the Volume of the Box Car
             * return: volume of the Box Car
             * Note: volume is the class member function and can directly access 
             *       the member variables 
             */    
            double volume() {
                /*
                 * The scope of the boxCarVol variable is local to this function.
                 * This means the memory is not available outside the function.
                 * The local variable boxCarVol stores the volume of the Box Car
                 */        
                double boxCarVol = 0.0;
                
                // Box Car Volume Computation using Arithmatic Operations
                boxCarVol = mHeight*mWidth*mLength;
                
                // Returns the Box Car Volume
                return boxCarVol;
            }

    };

    // Section 1B - Tank Car Class Defined Here
    class TankCar {
        
        // public accessor Specifies member variables and functions can be accessed 
        // outside the class anywhere within the scope of the class object.
        public:
            // Section 2B - Tank Car Class Member Variables Defined Here
            // Attributes of Tank Car are radius and length
            double  mRadius, mLength; 

            // Section 3B - Tank Car Class Member Functions Defined Here

            /*
             * This function calculates the Volume of the Tank Car
             * return: volume of the Tank Car
             * Note: volume is the class member function and can directly access 
             *       the member variables 
             */    
            double volume() {
                /*
                 * The scope of the tankCarVol variable is local to this function.
                 * This means the memory is not available outside the function.
                 * The local variable tankCarVol stores the volume of the Tank Car
                 */        
                double tankCarVol = 0.0;
                
                // Tank Car Volume Computation using Arithmatic Operations
                // M_PI is a macro defined in Math.h and its value is 3.14159            
                tankCarVol = M_PI * mRadius * mRadius * mLength;
                
                // Returns the Tank Car Volume
                return tankCarVol;
            }

    };

    main ( ) { 

        // Declaration of Local Variables 

        // Variabes for Box Car
        double length = 0.0, width = 0.0, height = 0.0;
        
        // Vairables for Tank Car which is a Cylinder
        double radius = 0.0, lengthOfTankCar = 0.0;

        // Section 4A - Create BoxCar Object and Assign values to its member 
        // variable

        // Read in the Variables of Box Car and Tank Car
        cout << "Please Enter the Length, Width and Height of the Box Car." 
        	     << endl;
        cin >> length >> width >> height;  

        // Creating myBoxCar object for user defined class BoxCar. Once BoxCar
        // Object is created, corresponding memory for the member variable is 
        // created and can be accessed using the myBoxCar object.         
        BoxCar myBoxCar;

        // Assigning values to the Objects Member Variable
        myBoxCar.mLength = length; 
        myBoxCar.mHeight = height; 
        myBoxCar.mWidth = width; 
        
        // Section 5A - Calling Member Function volume to calculate the Volume of 
        // BoxCar Object
        cout << "The Volume of the Box Car Object of lth: " << myBoxCar.mLength 
             << " Wt: " << myBoxCar.mWidth << " and Ht: " << myBoxCar.mHeight
             << " is " << myBoxCar.volume() << endl;
        
        // Section 4B - Create TankCar Object and Assign values to its member 
        // variable
        
        cout << "Please Enter the Radius and Length of the Tank Car." << endl;
        cin >> radius >> lengthOfTankCar;  
        
        // Creating myTankCar object for user defined class TankCar. Once TankCar
        // Object is created, corresponding memory for the member variable is 
        // created and can be accessed using the myTankCar object.         
        TankCar myTankCar;

        // Assigning values to the Objects Member Variable
        myTankCar.mLength = lengthOfTankCar; 
        myTankCar.mRadius = radius; 

        // Section 5B - Calling Member Function volume to calculate the Volume of 
        // TankCar Object
        cout << "The Volume of the Tan Car Object of lth: " << myTankCar.mLength 
             << " And Rad: " << myTankCar.mRadius << " is " << myTankCar.volume()
             << endl;
    
        // Memory Size of Box Car and Tank Car Class
        cout << "Memory of BoxCar Class = " << sizeof(BoxCar) << endl;
        cout << "Memory of TankCar Class = " << sizeof(TankCar) << endl;        
    }


