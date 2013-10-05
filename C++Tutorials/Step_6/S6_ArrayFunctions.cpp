#include <iostream>
using namespace std;



void print_array(int input[], int size){
	for(int x = 0; x < size; x++){
		cout << input[x] << " " << endl;
	}
}

int main(){
	int example[3] = {1, 3, 5};
	print_array(example, 3);
	return 0;
}
