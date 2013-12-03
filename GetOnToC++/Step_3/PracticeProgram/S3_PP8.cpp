//
//  Program Name - S3_PP8.cpp
//  Series: GetOnToC++ Step: 3 Practice Program Num 8
//
//  Purpose: This program writes a Inline function that calculates the volume 
//           of a sphere.
//
//  Compile: g++ S3_PP8.cpp -o S3_PP8
//  Execute: ./S3_PP8
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//


// Inline function that calculates the volume of a sphere.
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159; // define global constant PI 8

// calculates volume of a sphere
inline double sphereVolume( const double radius )
{
    return 4.0 / 3.0 * PI * pow( radius, 3 );
} // end inline function sphereVolume

int main()
{
    double radiusValue;

    // prompt user for radius
    cout << "Enter the length of the radius of your sphere: ";
    cin >> radiusValue; // input radius

    // use radiusValue to calculate volume of sphere and display result
    cout << "Volume of sphere with radius " << radiusValue
         << " is " << sphereVolume( radiusValue ) << endl;
} // end main
