#include <iostream>
using namespace std;

int main(){
	double first,second,third;
	cout << "Please enter three non-zero numbers" << endl;
	cin >> first >> second >> third;
	
	if(second > first && second > third){
		if(first*first+third*third == second*second){
			cout << "These numbers could represent the sides of a right triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a right triangle\n";
		}
	}else if(third > second && third > first){
		if(first*first+second*second >= third*third){
			cout << "These numbers could represent the sides of a right triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a right triangle\n";
		}
	}else{
		if(second*second+third*third >= first){
			cout << "These numbers could represent the sides of a right triangle\n";
		}else{
			cout << "These numbers could not represent the sides of a right triangle\n";
		}
	}

	return 0;
}
