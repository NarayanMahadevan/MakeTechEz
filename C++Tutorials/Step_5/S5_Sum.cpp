//
//  Program Name - S5_Sum.cpp
//  Series: GetOnToC++ Step: 5
//
//  Purpose: This program uses recursion to fine the sum of a number and all the numbers before it 
//
//  Compile: g++ S5_Sum.cpp -o S5_Sum
//  Execute: ./S5_Sum
//
//  Created by Narayan Mahadevan on 18/08/13.
//
#include <iostream>
using namespace std;

int sum (int num){ 
  if (num==0)
    return 0;
  return (sum(num-1)+(num));
}

int main(){
  int num;
  cout << "Enter a number" << endl;
  cin >> num;
  cout << sum(num) << endl;
}
