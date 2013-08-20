#Tutorial Two

This tutorial is meant to teach the basics of classes.

######Table of Contents
[Creating Classes and Objects](#ClassesAndObjects)   
[Explaining Member Functions](#MemberFunctions)   
[Explaining Constructor Member Functions](#Constructors)   
[Explaining Reader and Writer Member Functions](#ReaderAndWriter)   
[Practice Problems](#Practice)   

<a name="ClassesAndObjects"/>
###Creating Classes and Objects
A class is a grouping of variables and functions that define a certain object. 
When a class object is created, the varibles and functions are tied to that object. 
The syntax for creating a basic class is 
```
class boxCar{
```
"class" states that the following is a new class. 
"boxCar" is the name of the class.
"{" marks the beggining of the class.
Inside the class there can be constructors, variables and funcions. 

Constructors, variables and functions can be either public, private or protected. 
If it is public, everything which is aware of the class, is aware of the classes public section.
If it is private, nothing but the class has access to this section.
If it is protected, only the class and its children have access to the protected section.(This will be explained in more detail in the next tutorial)
To declare a constructor, variable or function as either public, private or protected, the syntax is as follows
```
	public:
		boxCar();
		boxCar(double h, double w, double l);
		double volume();
		double readHeight(), readWidth(), readLength();
		void writeHeight(double h), writeWidth(double w), writeLength(double l);
	private:
		double height, width, length;
```
#####Remember the colon
"double height, width, length;" are known as member variables. These variables are tied to the class it was defined in.
The rest of the code are function declarations that must be implemented later on in the program.
To end a class and continues with a program, type 
```
};
```
#####Remeber the ending semicolon
The next few sections go over what each individual piece of code means as well as how it is implemented in the program. 

<a name="Constructors"/>
###Explaining Constructor Member Functions
Constructors are a special type of function for classes. 
Constructors are different from other type of functions in two ways. 
	1.A constructor's name is the same as the class
	2.Constructors do not have a return-value data type
The purpose of a constructor is to intilize member variables in new class objects. 
Constructors can have parameters. If a constructor does not, it is called a default constructor, and the member variables are set to default values. 
Constructors with parameters have no special name. The parameters are used to set the values of the member variables. 
In the code above, "boxCar()" is the default constructor, while "boxCar(double h, double w, double l)" is the second constructor. 
The syntax to implement these constructors are
```
boxCar::boxCar(){
	height = 10.5; width = 9.5; length = 40.0;
}

//Constructors
boxCar::boxCar(double h, double w, double l){
	height = h; width = w; length = l;	
}
```
"boxCar" tells the compiler what class the function is part of. 
"::" seperates the the class name from the function name
"boxCar()" is the name of the function and since this function has the same name as the class, it means that is is a constructor. 
Everything after the "{" is the code of the function. 
Both of these constructors intilize the member variables of the class to either the default values, or the values passed in through the parameters.


<a name="MemberFunctions"/>
###Explaining Member Functions
Member functions are functions that are tied to a class. 
Member functions are declared in the class definition and implimented using the same sytax as constructors. 
```
double boxCar::volume(){
	return height * width * length;
}
```
All functions have access to the member variables of the class.
#####Notice that the return data-value type is written before the name of the class

<a name="ReaderAndWriter"/>
###Explaining Reader and Writer Member Functions
Reader and Writer functions are special functions for the sole purpose of either reading or writing private member variables
When variables are declared as private, they can not be seen or changed outside the class declaration.
Reader functions return the variables. 
```
double boxCar::readHeight(){ return height; }
double boxCar::readWidth(){ return width; }
double boxCar::readLength(){ return length; }
```
Writer functions take in a new value as a parameter and change the value of the variable. 
```
void boxCar::writeHeight(double h){ height = h; }
void boxCar::writeWidth(double w){ width = w; }
void boxCar::writeLength(double l){ length = l; }
```
It is good practice to always have reader and writer functions for every class you create. 

<a name = "UsingClasses"/>
###Using Classes
To use a class, an instance of it must be created. 
To create an instance of a class, the following syntax is used
```
int main(){
	boxCar a;
	boxCar b(10.5,9.5,30.0);
```
This code creates two box cars, a and b. A has the default values for height, width and length while b has the specified values for its member variables. 
To see what the values for the height, width and length the reader functions must be used. 
```
	cout << "The height of the default box car is " <<a.readHeight() << endl
		 << "The width of the default box car is " <<a.readWidth() << endl
		 << "The length of the default box car is " <<a.readLength() << endl
		 << "The height of the specified box car is " <<b.readHeight() << endl
		 << "The width of the specified box car is " <<b.readWidth() << endl
		 << "The length of the specified box car is " <<b.readLength() << endl
```
Notice that to call a member function of a class,the syntax is the objects name, a period, then the function name. 
The same syntax can be used to call member functions as well as the writer functions.
```
	cout << "The volume of the default box car is " << a.volume() << endl
		 << "The volume of the specified box car is " << b.volume() << endl
	cout << "The volume of the default box car is " << a.volume() << endl
		 << "The volume of the specified box car is " << b.volume() << endl
	cout << "Writing the box car's length as 30.00" << endl;
		a.writeLength(30.00);
	cout << "The volume of the changed box car is " << a.volume() << endl
	return 0;
}
```


<a name="Practice"/>
###Practice Problem
Define a tankCar class with private member variables raidus and height, a public volume member function, a default constructor, a constructor with two parameters, and reader and writer functions. The volume of a tank car is pi*radius^2*height   
Define a flatCar class with private member variables length and width, a public volume member function, a default constructor, a constructor with two parameters, and reader and writer functions.The volume of a flat car is 8.25*width*length.

