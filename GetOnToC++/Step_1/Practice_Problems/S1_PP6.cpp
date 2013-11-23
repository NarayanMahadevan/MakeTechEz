#include <iostream>
using namespace std;

double const pi = 3.14159;

int main(){
	double total_miles, cost_per_gallon, avg_miles, parking_fee, tolls;
	cout << "Please the following information" << endl
		  << "1)Total Miles Driven per Day\n2)Cost per Gallon of Gas\n3)Average Miles per Gallon\n4)Parking Fees per Day\n5)Tolls per Day" << endl;
	cin  >> total_miles >> cost_per_gallon >> avg_miles >> parking_fee >> tolls;
	double cost_per_day = total_miles/avg_miles*cost_per_gallon+parking_fee+tolls;
	cout << "Your cost per day is " << cost_per_day << endl;
	return 0;
}
