#Tutorial Three

This tutorial is about class inheritance. 

[Inheritance](#Inheritance)   
[Using Class Inheritance](#Using)   
[Designing Classes and Class Heirarchies](#Design)   
[Practice Problem](#Practice)   

//
//  Program Name - S3_Classes.cpp
//  Series: GetOnToC++ Step: 3
//
//  Purpose: This program designs multiple car classes and their class heirarchies
//
//  Compile: g++ S3_DesigningClasses.cpp -o S3_DesigningClasses
//  Execute: ./S3_DesigningClasses
//
//  Created by Narayan Mahadevan on 18/08/13.
//  
#include <iostream>
using namespace std;

//Section 1 - Inheritance

int main(){
    //Section 2 - Using Class Inheritance

}
```
<a name="Inheritance"/>
###Section 1: Inheritance
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

###Side Step
This program shows how class inheritance stops code duplication
```
#include <iostream>
using namespace std;

class human{
	public:
		int age,height;
		string name,gender;
		human(){};
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
};
 	
class studentInheritance:public human{
	public:
		int graduationYear;
		studentInheritance(){age = 18; height = 65; name = "Bob"; gender = "Male"; graduationYear = 2016; }
		int graduationYearReader(){return graduationYear; }
};

class teacherInheritance:public human{
	public:
		int startYear;
		teacherInheritance(){age = 40; height = 65; name = "Ryan"; gender = "Male"; startYear = 1985; }
		int startYearReader(){return startYear; }
};

class studentNoInheritance{
	public:
		int age,height, graduationYear;
		string name,gender;
		studentNoInheritance(){age = 18; height = 65; name = "Bob"; gender = "Male"; graduationYear = 2016; }
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
		int graduationYearReader(){return graduationYear; }
};

class teacherNoInheritance{
	public:
		int age,height,startYear;
		string name,gender;
		teacherNoInheritance(){age = 40; height = 65; name = "Ryan"; gender = "Male"; startYear = 1985; }
		int startYearReader(){return startYear; }
		int ageReader(){return age; }
		int heightReader(){ return height; }
		string nameReader(){ return name; }
		string genderReader(){ return gender; }
};

int main(){
	studentInheritance a;
	studentNoInheritance b;
	teacherInheritance x;
	teacherNoInheritance y;
	cout << "Both student and teacher classes create identical students and teachers. To test this, return the different variables that define a student or teacher and see that they are the same. However, using inheritance avoids code duplication. " << endl;
	return 0;
	
}
```
<a name="Using"/>
Creating classes that are children of other classes are the same as creating normal classes. They are also able to use their functions and their parents functions.
```
boxCar b;
b.percentLoaded = 50;
b.yearBuilt = 1968;
cout << "The age of the boxCar is " << b.age() << endl;
cout << "The load percentage of the boxCar is " << b.percentLoaded << endl;
cout << "The volume of the boxCar is " << b.volume() << endl;
```

<a name="Design"/>
###Designing Classes and Class Hierarchies
There are several principles on how to design classes and class hierarchies.
1.Explicit-representation principle-Whenever there is a natural catogory that your program needs to work, there should be a class that corresponds to that category.   
	Example:In the above program, there are natural catagories corresponding to the various sort of cars and containers.   
2.No-duplication principle-Variables and functions should be distributed among class definitions to make sure there is no duplication of identical code.   
	Example:In the abomve program, length, width, and height are member variables and the volume member function are in the box class not in the boxCar oand gondolaCar classes.   
3.Look-it-up principle-A program should look up a frequently needed answer, rather then computing that answer.   
4.Keep-it-simple principle-If a program or function becomes to complex, break it into smaller functions so it is easier to debug and maintain.   
5.Modularity principle-Dvide large programs into logically coherent modules, each of which occupies its own file.   

<a name="Practice"/>
###Practice Problem
1.Tie the flatCar class created in the previous tutorial into the above hierarchy.   
2.Create a sphere class that is a container. Include appropiate member variables, constructors and functions.   
3.Create a liquidGasCar class that is a sphere and a railroadCar. A liquidGasCar contains either two or three spheres of gas. Make sure to not duplicate code. 

