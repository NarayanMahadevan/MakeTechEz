#include <iostream>
using namespace std;

int main(){
	int first,second,third,max,min;
	cout << "Please enter three numbers" << endl;
	cin >> first >> second >> third;
	int sum = first + second + third;
	int average = sum/3;
	
	if(second > first && second > third){
		max = second;
	}else if(third > second && third > first){
		max = third;
	}else{
		max = first;
	}
	
	if(second < first && second < first){
		min = second;
	}else if(third < second && third < first){
		min = third;
	}else {
		min = first;
	}
	cout << "The sum of these numbers are " << sum << endl
		  << "The average of these numbers are " << average << endl
		  << "The largest number is " << max << endl
		  << "The smallest number is " << min << endl;
	return 0;
}
