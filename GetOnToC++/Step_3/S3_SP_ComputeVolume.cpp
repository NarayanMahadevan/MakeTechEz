    //
    //  Program Name - S3_SP_ComputeVolume.cpp
    //  Series: GetOnToC++ Step: 3 Side Program
    //
    //  Purpose: This program computes the Volume of the Box Car and the Tank Car  
    //
    //  Compile: g++ S3_SP_ComputeVolume.cpp -o S3_SP_ComputeVolume
    //  Execute: ./S3_SP_ComputeVolume
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Use the mathematics library, which contains a declaration for M_PI: 
    #include <math.h>
        
    // Function Definition - The Function Prototype and Body are defined together
    // Before the main

    /*
     * This function calculates the Volume of the Box Car
     * Input Param are: ht => height, wt => width, and lt = length
     * return: volume of the Box Car
     * Note: Here the scope of Function Parameters are local to this 
     * function and is called call-by-value  
     */    
    double calcBoxCarVolume(double ht, double wt, double lt) {
        /*
         * The scope of the boxCarVol variable is local to this function.
         * This means the memory is not available outside the function.
         * The local variable boxCarVol stores the volume of the Box Car
         */        
        double boxCarVol = 0.0;
        
        // Box Car Volume Computation using Arithmatic Operations
        boxCarVol = ht * wt * lt;
        
        // Returns the Box Car Volume
        return boxCarVol;
    }

    /*
     * This function calculates the Volume of the Tank Car
     * Input Param are: rad => radius, and l = length of the cylinder
     * return: volume of the Tank Car
     * Note: Here the scope of Function Parameters are local to this 
     * function and is called call-by-value  
     */    
    double calcTankCarVolume(double rad, double l) {
        /*
         * The scope of the tankCarVol variable is local to this function.
         * This means the memory is not available outside the function.
         * The local variable tankCarVol stores the volume of the Tank Car
         */        
        double tankCarVol = 0.0;
        
        // Tank Car Volume Computation using Arithmatic Operations
        tankCarVol = M_PI * rad * rad * l;
        
        // Returns the Tank Car Volume
        return tankCarVol;
    }


    main ( ) { 
        
        // Declaration of Variables 

        /* 
         1. The Vairbles defined below are Local Variables and are local to this 
            main function. 
         2. All Variables are of data type double(holds 8 bytes or 64 bits memory) 
            and intialized to 0.0
        */
        // Variabes for Box Car
        double length = 0.0, width = 0.0, height = 0.0;
        
        // Vairables for Tank Car which is a Cylinder
        double radius = 0.0, lengthOfTankCar = 0.0;

        // Output & Input Operators

        // Reading the User inputs and setting the values of length, width and
        // height of the Box Car
        cout << "Please Enter the Length, Width and Height of the Box Car - ";
        cin >> length >> width >> height;  
        
        // Reading the User inputs and setting the values of radius and length
        // of the Tank Car
        cout << "Please Enter the Radius and Length of the Tank Car - ";
        cin >> radius >> lengthOfTankCar;  

        // Function Call

        // Calling Function calcBoxCarVolume to calculate the Volume of Box Car
        double boxCarVol = calcBoxCarVolume(height, width, length);
        cout << "The volume of the Box Car is " << boxCarVol << endl; 

        // Calling Function calcTankCarVolume to calculate the Volume of Tank Car
        double tankCarVol = calcTankCarVolume(radius, lengthOfTankCar);
        cout << "The volume of the Tank Car is " << tankCarVol << endl; 
    }


