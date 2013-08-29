//
//  Program Name - S1_ArthmaticExpression.cpp
//  Series: GetOnToC++ Step: 1
//
//  Purpose: This program shows the way C++ handles operator precedence and 
//           associativity
//
//  Compile: g++ S1_ArthmaticExpression.cpp -o S1_ArthmaticExpression
//  Execute: ./S1_ArthmaticExpression
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#include <iostream>
using namespace std;

main ( ) { 

    // Equivalent to 6 + (3 * 2) = 12 And not (6 + 3) * 2 = 18
    cout << "Expression = 6 + 3 * 2, with Higher Precedense       : " 
         << 6 + 3 * 2 << endl; 

    // Equivalent to 6 - (-3) = 9 
    cout << "Expression = 6 - -3,    with Unary Opetrator (-3)    : " 
         << 6 - -3 << endl; 

    // Equivalet to: (6 / 3) / 2 = 1
    cout << "Expression = 6 / 3 / 2, with Same Precedense (L to R): " 
         << 6 / 3 / 2 << endl;       
       
    // Equivalent to (6 / 3) * 2 = 4 And not 6 / (3 * 2) = 1     
    cout << "Expression = 6 / 3 * 2, with Same Precedense (L to R): " 
         << 6 / 3 * 2  << endl;

    // Equivalent to (6 * 3) / 2 = 9 And not 6 * (3 / 2) = 6    
    cout << "Expression = 6 * 3 / 2, with Same Precedense (L to R): " 
         << 6 * 3 / 2  << endl;
}
