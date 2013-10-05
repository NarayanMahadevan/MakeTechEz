#include <iostream>
using namespace std;


int main(){
	int example[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	for(int x = 0; x < 10; x++){
		sum += example[x];
	}
	cout << sum << endl;
	return 0;
}
	
