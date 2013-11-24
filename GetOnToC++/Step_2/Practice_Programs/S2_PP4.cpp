#include <iostream>
using namespace std;

int main(){
	int first, second;
	cout << "Please enter two numbers\n";
	cin >> first >> second;
	if(first%second == 0){
		cout << first << " is a multiple of " << second << endl;
	}else{
		cout << first << " is not a multiple of " << second << endl;
	}
	return 0;
}
