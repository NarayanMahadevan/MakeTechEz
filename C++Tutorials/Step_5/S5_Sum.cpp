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
