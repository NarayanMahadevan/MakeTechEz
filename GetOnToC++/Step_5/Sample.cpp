#include <iostream>
using namespace std;

int rabbits(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return rabbits(n-1) + rabbits(n-2);
	}
}

int rabbit(int);
int previousMonth(int n){return rabbit(n-1);}
int penultimateMonth(int n){return rabbit(n-2);}
int rabbit(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return previousMonth(n) + penultimateMonth(n);
	}
}

int recursive_power_function(int m, int n){
	if(n == 1){
		return m;
	}else if(n == 0){
		return 1;
	}else{
		return m*recursive_power_function(m,n-1);
	}
}

int recursive_factorial_function(int n){
	if(n == 1){
		return 1;
	}else{
		return n * recursive_factorial_function(n-1);
	}
}
int factorial_function(int);
int base(){ return 1; }
int recurse(int n){ return n * factorial_function(n-1); }

int factorial_function(int n){
	if(n == 0){
		return base();
	}else{
		return recurse(n);
	}
}
int main(){
	cout << "FIRST PROGRAM" << endl
		 << "At the end of month 1, there is " << rabbits(1) << endl
		 << "At the end of month 2, there are " << rabbits(2) << endl
		 << "At the end of month 3, there are " << rabbits(3) << endl
		 << "At the end of month 4, there are " << rabbits(4) << endl
		 << "At the end of month 5, there are " << rabbits(5) << endl
		 << "SECOND PROGRAM" << endl 
		 << "At the end of month 1, there is " << rabbit(1) << endl
		 << "At the end of month 2, there are " << rabbit(2) << endl
		 << "At the end of month 3, there are " << rabbit(3) << endl
		 << "At the end of month 4, there are " << rabbit(4) << endl
		 << "At the end of month 5, there are " << rabbit(5) << endl;
		 
	cout << recursive_power_function(2,3) << endl;
	cout << recursive_factorial_function(3) << endl;
	cout << factorial_function(3) << endl;
}
