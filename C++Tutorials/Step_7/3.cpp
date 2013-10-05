#include <iostream>
using namespace std;


void addition(int *sum, int x, int y){
	*sum = x + y;
}

int main(){
	int x = 4;
	int y = 5;
	int sum;
	addition(&sum, x, y);
	
	cout << "The sum is " << sum << endl;
	
	return 0;
}
