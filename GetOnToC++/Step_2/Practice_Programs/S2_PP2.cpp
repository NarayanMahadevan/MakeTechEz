#include <iostream>
using namespace std;

int main(){
	int first, second, third, fourth, fifth, max, min;
	cout << "Please enter five numbers\n";
	cin  >> first >> second >> third >> fourth >> fifth;
	
	if(first > second && first > third && first > fourth && first > fifth){
		max = first;
	}else if(second > first && second > third && second > fourth && second > fifth){
		max = second;
	}else if(third > first && third > second && third > fourth && third > fifth){
		max = third;
	}else if(fourth > first && fourth > third && fourth > second && fourth > fifth){
		max = fourth;
	}else{
		max = fifth;
	}
		
	if(first < second && first < third && first < fourth && first < fifth){
		min = first;
	}else if(second < first && second < third && second < fourth && second < fifth){
		min = second;
	}else if(third < first && third < second && third < fourth && third < fifth){
		min = third;
	}else if(fourth < first && fourth < third && fourth < second && fourth < fifth){
		min = fourth;
	}else{
		min = fifth;
	}
	
	cout << "The largest integer is " << max << endl;
	cout << "The smallest integer is " << min << endl; 
	
	return 0;
}
