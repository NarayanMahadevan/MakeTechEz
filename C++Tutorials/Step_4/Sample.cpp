#include <iostream>

using namespace std;
//Practice Problem 1
int iterative_power_function(int m, int n){	
	if(m < 0 || n < 0){
		cout << "Input not valid" << endl;
		return -1;
	}else{
		int product = 1;
		for(int x=0; x<n; x++){
			product *= m;
		}
	return product;
	}
}
//Practice Problem 2
int iterative_factorial_function(int n){
	if( n<=0){
		cout << "Input not valid" << endl;
		return -1;
	}else{
		int product = 1;
		for(int x = 1; x <= n; x++){
			product *= x;
		}
	return product;
	}
}

int main(){
	int temp;
	cin >> temp;
	cout << "BASIC CONDITIONAL STATEMENT" << endl;
	if(temp < 25){
		cout << "It is too cold" << endl;
	}else if(temp > 50){
		cout << "It is too warm" << endl;
	}else{
		cout << "The temperature is perfect" << endl;
	}
	
	cout << "NESTED CONDITIONAL STATEMENTS" << endl;
	if(temp >= 25){
		if(temp <= 50){
			cout << "The temperature is perfect" << endl;
		}else{
			cout << "the temperature is not perfect" << endl;
		}
	}else{
		cout << "The temperature is not perfect" << endl;
	}
	
	cout << "CONDITIONAL STATEMENTS WITH THE AND OPERATOR" << endl;
	if(temp >= 25 && temp <= 50){
		cout << "The temperature is perfect" << endl;
	}else{
		cout << "The temperature is not perfect" << endl;
	}
	
	cout << "CONDITIONAL STATEMENTS WITH THE OR OPERATOR" << endl;
	if(temp < 25 || temp > 50){
		cout << "The temperature is not perfect" << endl;
	}else{ 
		cout << "The temperature is perfect" << endl; 
	}
	
	cout << "WHILE LOOP" << endl;
	if(temp < 25){
		cout << "It is too cold" << endl;
		int counter = temp;
		while(counter < 25){
			counter++;
			cout << "The temperature has been increased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else if(temp > 50){
		cout << "It is too warm" << endl;
		int counter = temp;
		while(counter >= 50){
			counter--;
			cout << "The temperature has been decreased to " << temp << " degrees" << endl;
		}
		cout << "The temperature is now perfect" << endl;
	}else{
		cout << "The temperature is perfect" << endl;
	}
	cout << "FOR LOOP" << endl;
	if(temp < 25){
		cout << "It is too cold" << endl;
		for(int counter = temp; counter < 25; ++counter){
			cout << "The temperature has been increased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else if(temp > 50){
		cout << "It is too warm" << endl;
		for(int counter = temp; counter >50; --counter){
			cout << "The temperature has been decreased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else{
		cout << "The temperature is perfect" << endl;
	}
	return 0;

}
