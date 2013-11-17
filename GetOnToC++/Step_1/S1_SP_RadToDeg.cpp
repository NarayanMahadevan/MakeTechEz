    //
    //  Program Name - S1_SP_RadToDeg.cpp
    //  Series: GetOnToC++ Step: 1 Main Program
    //
    //  Purpose: Write a Program to convert Radians to Degrees using a Macro.
    //           The formulae is deg = rad * (180/pi)
    //
    //  Compile: g++ S1_SP_RadToDeg.cpp -o S1_SP_RadToDeg
    //  Execute: ./S1_SP_RadToDeg
    //
    //  Created by Narayan Mahadevan on 10/11/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Defining a Macro to specify the value of pi. 
    #define PI 3.14159

    // Defining a Macro to convert Radians to Degrees
    #define RAD_TO_DEG(radians) (radians * (180.0 / PI))

    // Creating a new Data Type ColorComponent of unsigned char
    typedef unsigned int ColorComponent;

    main ( ) { 
        double angle = PI / 2; 
        cout << "Radians to Degree is: " << RAD_TO_DEG(angle) << endl;

        // Setting the RGB color value        
        ColorComponent red = 255;
        ColorComponent green = 160;
        ColorComponent blue = 0;    

        cout << "Paint job has R value: " << red << " G value: " << green 
             << " and B value: " << blue << endl;

        cout << "Display a Hollow Box" << endl;        
        cout << "*********\n";
        cout << "*\t*\n";
        cout << "*\t*\n";
        cout << "*\t*\n";
        cout << "*\t*\n";
        cout << "*********\n";
    }
