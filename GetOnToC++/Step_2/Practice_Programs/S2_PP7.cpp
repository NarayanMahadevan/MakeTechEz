#include <iostream>
using namespace std;

int main(){
	int entry, entry_copy, entry_reverse = 0,n;
	cout << "Please enter a number\n";
	cin >> entry;
	entry_copy = entry;
	do{
		n = entry%10;
		entry = entry/10;
		entry_reverse = entry_reverse*10+n;
	}while(entry>0);
	
	if(entry_copy == entry_reverse){
		cout << "The number is a palindrome\n";
	}else{
		cout << "The number is not a palindrome\n";
	}
	return 0;
}
