#include <iostream>

int main(){
	int temp;
	cin >> temp;
	cout << "BASIC CONDITIONAL STATEMENT" << endl;
	if(temp < 25){
		cout << "It is too cold << endl;
	}else if(temp > 50){
		cout << "It is too warm << endl;
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
	if(temp < 25 || temp < 50){
		cout << "The temperature is not perfect" << endl;
	}else{ 
		cout << "The temperature is perfect" << endl; 
