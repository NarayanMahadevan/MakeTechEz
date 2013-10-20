#include <iostream>
using namespace std;

void sum(int a, int b, int sum*){
	*sum = a + b;
}

int main(){
	int a = 1, b = 2, sum = 0;
	sum(a,b,&sum);
	cout << sum << endl;
}
