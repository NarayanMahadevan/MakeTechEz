#include <iostream>
using namespace std;

int main(){
	int first, second;
	cout << "Please enter two numbers\n";
	cin  >> first >> second;
	if(first > second){
		cout << first << " is larger\n";
	}else if(second > first){
		cout << second << " is larger\n";
	}else{
		cout << "These numbers are equal";
	}
	return 0;
}
