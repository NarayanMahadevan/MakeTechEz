//Chapter 3: Declaring Variables

#include <iostream>

using namespace std;

int main(){
	int result, height = 11, width = 9, length = 40;
	result = height;
	result = result * width;
	result = result * length;
	// result = height * width * length;  Can also be written this way, but other way shows that variables can be reassigned. 
	cout << "The volume of the box car is  ";
	cout << result;
	cout << endl;
	return 0;
}
