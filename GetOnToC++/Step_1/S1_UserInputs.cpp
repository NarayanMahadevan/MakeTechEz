    //
    //  Program Name - S1_UserInputs.cpp
    //  Series: GetOnToC++ Step: 1
    //
    //  Purpose: This program picks up an integer from the console and assigns  
    //           that integer to a variable to compute 
    //
    //  Compile: g++ S1_UserInputs.cpp -o S1_UserInputs
    //  Execute: ./S1_UserInputs
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    main ( ) { 
          int height, width, length;
          cout << "Please type three integers." << endl;
          cin >> height;  
          cin >> width;   
          cin >> length;  
          cout << "The volume of a " 
               << " box car is " << height * width * length << endl; 
    }

    /*
      On executing the program, the following lines are displayed on screen
      Please type three integers.                     <-- Your program types 
      11 9 40                                         <-- You type 
      The volume of a box car is 3960.                <-- Your program types 
    */
