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

bool isPrime(int p){
  int i = 2;
  if (i==p) return 1;//or better  if (i*i>p) return 1;
  if (p%i == 0) return 0;
  return isPrime (p, i+1);
}

int main(){
  int p;
  cout << "Enter a number" << endl;
  cin >> p;
  if(isPrime(p) == true){
    cout << p << " is prime" << endl;
  }else{
    cout << p << " is not prime" << endl;
}
    
