    //
    //  Program Name - S3_SP_CarModel.cpp
    //  Series: GetOnToC++ Step: 3 Side Program
    //
    //  Purpose: This program uses enum to show the car Model
    //
    //  Compile: g++ S3_SP_CarModel.cpp -o S3_SP_CarModel
    //  Execute: ./S3_SP_CarModel
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    // Defining enum of car models
    typedef enum {
        FORD,
        HONDA,
        NISSAN,
        PORSCHE
    } CarModel;

    main ( ) { 
        
        CarModel myCar = NISSAN;
        switch (myCar) {
            case FORD:
            case PORSCHE:
                cout << "You like Western cars?" << endl;
                break;
            case HONDA:
            case NISSAN:
                cout << "You like Japanese cars?" << endl;
                break;
            default:
                break;
        }
    }
