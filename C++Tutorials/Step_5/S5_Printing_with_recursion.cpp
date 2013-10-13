//
//  Program Name - S5_Printing_with_recursion.cpp
//  Series: GetOnToC++ Step: 5
//
//  Purpose: This program uses recursion to print a number and all the numbers below it. 
//
//  Compile: g++ S5_Printing_with_recursion.cpp -o S5_Printing_with_recursion
//  Execute: ./S5_Printing_with_recursion
//
//  Created by Narayan Mahadevan on 18/08/13.
//
#include <iostream>
using namspace std;

void print(int p)
{
  if (p==0)
     return;
  cout<<p;
  print(p-1);
  return;
}


inf main(){
  int p;
  cout << "Enter a number" << endl;
  cin >> p;
  print(p);
}

