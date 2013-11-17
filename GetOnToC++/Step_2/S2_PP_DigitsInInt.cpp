    //
    //  Program Name - S2_PP_DigitsInInt.cpp
    //  Series: GetOnToC++ Step: 4 Side Program
    //
    //  Purpose: Write a Program to Find Number of Digits in a Integer
    //
    //  Compile: g++ S2_PP_DigitsInInt.cpp -o S2_PP_DigitsInInt
    //  Execute: ./S2_PP_DigitsInInt
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    using namespace std;

    int main() 
    { 
        int n = 0, count = 0, reverse = 0; 
        cout << "Enter an integer: "; cin >> n;

        while (n != 0)
        { 
            reverse = reverse * 10;
            cout << "Inner Reverse: " << reverse << " n%10 " << n%10 << endl;
            reverse = reverse + n%10;
            cout << "Inner Reverse: " << reverse << endl;
            n = n/10; 
            ++count; 
        } 

        cout << "Number of digits: " << count << endl; 
        cout << "Reverse of entered number is: " << reverse << endl;
        return 0;
    } 
