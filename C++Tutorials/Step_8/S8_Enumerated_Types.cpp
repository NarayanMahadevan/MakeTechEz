#include <iostream>
using namespace std;

enum{zero, one, two, three, five = 5, six};
	
int main(){
	cout << "The first value is " << zero << endl
		 << "The second value is " << one << endl
		 << "The third values is " << two << endl
		 << "The fourth value is " << three << endl
		 << "The fifth value is " << five << endl
		 << "The sixth value is " << six << endl;
	
}
