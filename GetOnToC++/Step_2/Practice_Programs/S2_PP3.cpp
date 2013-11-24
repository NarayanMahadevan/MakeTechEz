#include <iostream>
using namespace std;

int main(){
	int entry;
	cout << "Please enter a number\n";
	cin >> entry;
	if(entry%2 == 0){
		cout << "This number is even\n";
	}else{
		cout << "This number is odd\n";
	}
	return 0;
}
