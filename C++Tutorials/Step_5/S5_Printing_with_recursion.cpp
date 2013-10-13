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

