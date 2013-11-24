#include <iostream>
using namespace std;

int main(){
	int entry, entry_copy, digit_counter = 0;
	cout << "Please enter a number\n";
	cin >> entry;
	entry_copy = entry;
	if(entry < 0){
		entry = -entry;
	}
	while(entry > 0){
		entry = entry/10;
		digit_counter++;
	}
	cout << "The number of digits in " << entry_copy << " is " << digit_counter << endl;
	return 0;
}
