//
//  Program Name - S1_ComputeVolume.cpp
//  Series: GetOnToC++ Step: 1
//
//  Purpose: This program computes the Volume of the Box Car and the Tank Car  
//
//  Compile: g++ S1_ComputeVolume.cpp -o S1_ComputeVolume
//  Execute: ./S1_ComputeVolume
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
using namespace std;

    
/*
 This program computes the Volume of the Box Car and the Tank Car
 */

// Section 2 - Global Variables 

// CurrentYear is a Global Vairable and indicates the current year     
int gCurrentYear = 2013;

/*
 * PI is a Global Variable and is also a Mathematical Constant as indicated
 * by const directive. This means PI value cannot be re-assigned.
 */
const double PI = 3.14159;

// Section 3 - Write Functions

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
    tankCarVol = PI * rad * rad * l;
    
    // Returns the Tank Car Volume
    return tankCarVol;
}

main ( ) { 
    // Section 1 - Declaration of Variables 

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

    // Section 4 - Output & Input Operators

    // Calling Function calcBoxCarVolume to calculate the Volume of Box Car
    cout << "Please Enter the Length, Width and Height of the Box Car." << endl;
    cin >> length >> width >> height;  
    double boxCarVol = calcBoxCarVolume(height, width, length);
    cout << "The volume of the Box Car is " << boxCarVol << endl; 

    // Calling Function calcTankCarVolume to calculate the Volume of Tank Car
    cout << "Please Enter the Radius and Length of the Tank Car." << endl;
    cin >> radius >> lengthOfTankCar;  
    double tankCarVol = calcTankCarVolume(radius, lengthOfTankCar);
    cout << "The volume of the Tank Car is " << tankCarVol << endl; 
}


