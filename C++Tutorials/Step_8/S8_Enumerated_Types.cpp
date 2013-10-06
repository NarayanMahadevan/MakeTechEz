#include <iostream>
using namespace std;
//Enum where the 4th number has the value of 5
enum{zero, one, two, three, five = 5, six};
	
int main(){
	//Pringting the different values
	cout << "The first value is " << zero << endl
		 << "The second value is " << one << endl
		 << "The third values is " << two << endl
		 << "The fourth value is " << three << endl
		 << "The fifth value is " << five << endl
		 << "The sixth value is " << six << endl;
	
}
