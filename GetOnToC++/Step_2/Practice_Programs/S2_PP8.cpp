#include <iostream>
using namespace std;

int main(){
	double first,second,third;
	cout << "Please enter three non-zero numbers" << endl;
	cin >> first >> second >> third;
	
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

	return 0;
}
