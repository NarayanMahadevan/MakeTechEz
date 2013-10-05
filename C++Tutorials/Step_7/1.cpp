#include <iostream>
using namespace std;

int main(){
	int x = 4;
	int y = 5;
	int *a = &x;
	int *b = &y;
	int **c = &a;
	
	cout << "*a = " << *a << endl
		 << "*b = " << *b << endl;
	*c = &y;
	cout << "*a now = " << *a << endl
		 << "*b now = " << *b << endl;
	return 0;
}
