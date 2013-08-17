#Tutorial Three

This tutorial is about class inheritance. 

[Inheritance](#Inheritance)   
[Designing Classes and Class Heirarchies](#Design)   

<a name="Inheritance"/>
###Inheritance
Inheritance is one of the key concepts that distinguish object oriented programing from traditional programming. 
Inheritance allows for classes to share variables and functions. 
Inheritance creates parent and child classes in which the child class has access to everything in the parent class. 
An example is the boxCar class from the previous tutorial. The boxCar class can be seen a a child of a container class as well as a railroadCar class.
These classes can be defined as such,
```
//Global Variables
const double pi = 3.14159;
const double currentYear = 2013;
//Classes
class container{
	public:
		int percentLoaded;
		//Default constructor
		container(){}
};

class railroadCar{
	public:
		int yearBuilt;
		//Default constructor
		railroadCar(){}
		//Functions
		int age(){ return currentYear-yearBuilt; }
};
```
There are two ways to define the boxCar class from this stage. You can create the class with just the container and railroadCar classes as the parents, however this limits the reusability of the program. 
A container can be many different shapes. A boxCar has a box container, however if you wanted to create a tankCar class, it would have a cylindracal container. 
To fix this problem, a box and cylinder class can be created that have the container class as their parent.
```
class box : public container{
	public:
		double height, width, length;
		//Default constructor
		box(){}
		//Functions
		double volume(){return height*width*length; }
};

class cylinder : public container{
	public:
		double radius, lengtoh;
		//Default constructor
		cylinder(){}
		//Functions
		double volume(){ return pi*radius*radius*length;}
};
```
"class box: public container" is the syntax for defining a child class. This means the the box class is a child of the container class and has access to all variables and functions in the container class.
Now that all the parents classes have been created, it is possible to create the boxCar and tankCar class. 
```
class boxCar : public railroadCar, public box{
	public:
		//Default constructor
		boxCar(){height = 10.5; width = 9.5; length = 40.0; }
};

class tankCar : public railroadCar, public cylinder{
	public:
		//Default constructor
		tankCar(){radius = 3.5; length = 40.0; }		
};
```
Note that the boxCar as well as the tankCar are children of two classes. In other words, boxCar extends railroadCar and box while tankCar extends railroadCar and cylinder.
Children can override the functions of their parents. For example, if a gondalaCar class extends railroadCar and box, but it needs a different volume function.
```
class gondalaCar : public railroadCar, public box{
	public:
		//Default constructor
		gondalaCar(){height = 6.0; width = 9.5; length = 40.0; }
		//Overiding the volume function
		double volume() {return 1.2 * height * width * length; }
};
```
Now when a gondalaCar class object uses its volume functions, it will use the volume function its its class, not the one in box class. 

<a name="Design"/>
###Designing Classes and Class Hierarchies
There are several principles on how to design classes and class hierarchies.
1.Explicit-representation principle-Whenever there is a natural catogory that your program needs to work, there should be a class that corresponds to that category
	Example:In the above program, there are natural catagories corresponding to the various sort of cars and containers
2.No-duplication principle-Variables and functions should be distributed among class definitions to make sure there is no duplication of identical code.
	Example:In the abomve program, length, width, and height are member variables and the volume member function are in the box class not in the boxCar oand gondolaCar classes.
3.Look-it-up principle-A program should look up a frequently needed answer, rather then computing that answer. 
4.Keep-it-simple principle-If a program or function becomes to complex, break it into smaller functions so it is easier to debug and maintain. 
5.Modularity principle-Dvide large programs into logically coherent modules, each of which occupies its own file. 
	

