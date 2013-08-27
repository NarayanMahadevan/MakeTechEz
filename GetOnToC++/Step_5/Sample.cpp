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
}
