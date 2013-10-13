//
//  Program Name - S5_Fibonacci.cpp
//  Series: GetOnToC++ Step: 5
//
//  Purpose: This program uses recursion to return a Fibonacci number
//
//  Compile: g++ S5_Fibonacci.cpp -o S5_Fibonacci
//  Execute: ./S5_Fibonacci
//
//  Created by Narayan Mahadevan on 18/08/13.
// 
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
  if (n==0)
      return 0;
  if (n==1)
      return 1;
  return( Fibonacci(n-2) + Fibonacci(n-1) );
}

int main(){
  int n;
  cout << "Enter a number" << endl;
  cin >> n;
  cout<< Fibonacci(n) << endl;
}
