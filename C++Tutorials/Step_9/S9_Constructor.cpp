#include <iostream>
using namespace std;

class railroad_car{
	public:
		//Default constructor
		railroad_car(){}
		//Functions
		virtual void display_name(){}
		virtual void display_capacity(){}
};

class box{
	public:
		//Default constructor
		box(){}
		//Argument-bearing constructor
		box(double h, double w, double l){
			height = h; width = w; length = l;
		}
		box(double w, double l){
			width = w; length = l;
		}
		//Functions
		double volume(){return height*width*length; }
	protected:
		double read_height(){return height;}
		double read_width(){return width;}
		double read_length(){return length;}
		double height, width, length;
};

class box_car : public railroad_car, public box{
	public:
		//Default constructor
		box_car() : box(10.5,9.5,40.0) {}
		box_car(double l) : box(9.5,40.0) {height = l;}
		virtual double display_height(){read_height();}
		virtual void display_name(){cout << "box_car";}
		virtual void display_capacity(){cout << volume();}
};

int main(){
	box_car a;
	box_car b(11.00);
	cout << "Defaults length is " << a.display_height() << endl
		 << "Specified length is " << b.display_height() << endl;
}
	
