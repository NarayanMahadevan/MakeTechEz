#include <iostream>
#include <cmath>
using namespace std;


void is_triangle(double first, double second, double third){
		
	if(second > first && second > third){
		if(first+third >= second){
			cout << "These numbers could represent the sides of a triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a triangle\n";
		}
	}else if(third > second && third > first){
		if(first+second >= third){
			cout << "These numbers could represent the sides of a triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a triangle\n";
		}
	}else{
		if(second+third >= first){
			cout << "These numbers could represent the sides of a triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a triangle\n";
		}
	}
}


int main(){
	double first,second,third;
	cout << "Please enter three non-zero numbers" << endl;
	cin >> first >> second >> third;
	is_triangle(first,second,third);
	return 0;
}
