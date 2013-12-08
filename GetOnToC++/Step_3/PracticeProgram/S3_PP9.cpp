#include <iostream>
using namespace std;


double parking_cost(double hour){
	double cost = 2 + (hour-3)*.5;
	if(cost > 10){
		return 10;
	}else{
		return cost;
	}
}	


int main(){
	double hour1, hour2, hour3;
	cin >> hour1 >> hour2 >> hour3;
	cout << "Car		Hour		Charge" << endl
		  << "1		" << hour1 << "		" << parking_cost(hour1) << endl
		  << "2		" << hour2 << "		" << parking_cost(hour2) << endl
		  << "3		" << hour3 << "		" << parking_cost(hour3) << endl
		  << "TOTAL		" << hour1+hour2+hour3 << "		" << parking_cost(hour1) + parking_cost(hour2) + parking_cost(hour3) << endl;
	return 0;
}
