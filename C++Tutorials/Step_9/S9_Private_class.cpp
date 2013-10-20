//
//  Program Name - S9_Private_class.cpp
//  Series: GetOnToC++ Step: 9
//
//  Purpose: This program explains how to use constructors inside of constructors
//
//  Compile: g++ S9_Private_class.cpp -o S9_Private_class
//  Execute: ./S9_Private_class
//
//  Created by Narayan Mahadevan on 18/08/13.
// 

#include <iostream>
#include <cstdlib>

using namespace std;

class Test{
   private :
            int a, b;
            Test(int _a, int _B)/> : a(_a), b(_B)/> { }

   public :
            int sum() { return (a+B)/>; }
            int display() { cout << sum() << endl; }

};

int main(){
   Test Obj = Test(10, 20); //error!

   Obj.display();
   return (EXIT_SUCCESS);
}
