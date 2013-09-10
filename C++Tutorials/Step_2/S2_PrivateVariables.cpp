//
//  Program Name - S2_PrivateVariables.cpp
//  Series: GetOnToC++ Step: 2
//
//  Purpose: This program creates a boxCar class with contructors, functions and private variables 
//
//  Compile: g++ S2_PrivateVariables.cpp -o S2_Variables
//  Execute: ./S2_Variables
//
//  Created by Narayan Mahadevan on 18/08/13.
//  
#include <iostream>
using namespace std;

class secureClass{
	public:
		secureClass(){ password = 12345; };
		secureClass(double p){password = p; };
		double readPassword(){ return password; };
	private:
		double password;
};

class insecureClass{
	public:
		double password;
		insecureClass(){ password = 98769; };
		insecureClass(double p){password = p; };
};
		
int main(){
	secureClass secure;
	insecureClass insecure;
	cout << "The secure class password is " << secure.readPassword() << endl;
	cout << "The insecure class password is " << insecure.password << endl;
	insecure.password  = 6584;
	cout << "The insecure class password can be changed because the password variable is not private. " << insecure.password << endl;
	return 0;
}
