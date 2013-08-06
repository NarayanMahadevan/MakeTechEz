// Chapters 1-8
#Tutorial One

This tutorial is meant to teach how to complie and run C++ programs as well as create basic ones. 

######Table of Contents
[Compiling and Running](#CompilingAndRunning)   
[Declaring Variables](#DeclaringVariables)   
[Arithmetic Expressions](#ArithmeticExpressions)   
[Inputs from Keyboard](#Inputs)   
[Simple Functions](#SimpleFunctions)   
[Procedure Abstraction](#Abstraction)   
[Local and Global Variables](#Variables)   

<a name="CompilingAndRunning"/>
###Compiling and Running


<a name="DeclaringVariables"/>
###Declaring Variables
Variables is an identifier that serves as a name for a chunk of computer memory. 
Data types determine the size of the chunk that the variable refers too as well as how the data is interpreted.
This chunk of memory holds the variables value.
Variable Declaration:
```no-highlight
int height;
int width;
int length;
```
Each one of the variables above is an integer because they are preceded by the data-type-declaring int.
Multiple variables of the same data type can be declared on the same line. 
```no-highlight
int height, width, length;
```
#####Take note of the commas seperating each variable
Variable assignment is when a value is assinged to a varible. This can either be done when the variable is intialized,
```no-highlight
int height = 11, width = 9, length = 40;
```
or after it has been created. 
```no-highlight
int height, width, length;
height = 11; 
width = 9;
length = 40;
```
Variable values can be changed after they have been assigned using the assignment opperator "="
```no-hightlight
int result, height = 11, width = 9, length = 40;
result = height;
result = result * width;
result = result * length;
```



<a name="ArithmeticExpressions"/>
###Arithmetic Expressions
C++ can do all the basic arithmetic opperation using the "+,-,*,/" operators
```no-highlight
6+3		//Add
6-3		//Subtract
6*3		//Multiple
6/3		//Divide
```
When dividng integers, the division operator does not round but truncates the quotient.
The modulus operator "%" produces the remainder.
```no-highlight
5/3		//Divide, evaluates to 1
5%3		//Divide, evalues to the remainder, 2
```
C++ follows traditional order of operations of Parenthesis, Multiplication/Division, Addition/Subtraction
```
6+3*2		//Value is 12
(6+3)*2		//Value is 18
```


<a name="Inputs"/>
###Inputs from Keyboard
C++ has an input operator ">>". This input operator takes input from the keyboard and stores it in variables.
```
int height, width, length;
cin >> height;
cin >> width;
cin >> length;
```
In this program, when three integers are inputed, the first is stored in the hieght variable, the second in width and the third in lenght.
This code can be written in one line similir to the output operator.
```
int height, width, length;
cin >> height >> width >> length;
```
<a name="SimpleFunctions"/>
###Simple Functions
Functions is a procedure withen a progam that does the same routine everytime it is run, no matter what variables are inputed.
An example of a function is one that computers the volume of a box given the length, width and height.
```
int boxVolume(int h, int w, int l){
	return h*w*l;
}
```
This function has the name boxVolume, returns the data type int, and takes in 3 integers as parameters. This function can be called in the main functions as such:
```
main(){
	int height = 9, width = 11, length = 40;
	cout boxVolume(height, width, length);
}
```
Overriding functions is when two functions with the same name are created, but with different paramters. For example:

```
int boxVolume(int h, int w, int l){
	return h*w*l;
}

double boxVolume(double h, double w, double l){
	return h*w*l;
}
```
When the boxVolume function is called with 3 doubles as parameters, the second function is run. 

Functions dont have to return a data type. 
```
void displayBoxVolume(int h, int w, int l){
	cout << "The volume of the box car is " << h*w*l << endl;
}
```
Precceding the function name with void means that it does not return any data type. The use of this type of function is seen below:
```
void displayBoxVolume(int h, int w, int l){
	cout << "The volume of the box car is " << h*w*l << endl;
}
main(){
	int height = 9, width = 11, length 40;
	dispayBoxVolume(height, width, length);
}
```
Functions simplify programs and allows programs to reuse code. 

<a name="Abstraction"/>
###Procedure Abstraction


<a name="Variables"/>
###Local and Global Variables
Local variables are variables that are created and used within a specific function. Once the function ends, the variable memory is cleared. 
Global variables are variables that are created whent the program is started. They can be used throughout the program and are not limited to a specfic function. 
```
double pi = 3.14;
double getVolume(int radius){
	return 4/3 * pi *radius * radius * radius;
}
double returnPi(){
	return pi;
}
main(){
	int radius = 3;
	double volume = getVolume(radius);
	double piCopy = returnPi();
}
```
In thie code, pi is a global variable. Radius is a local variable. 
Pi can be used in multiple functions. To make this program make more sense, pi should be a constant variable so that no function can change it variable. 
```
const double pi = 3.14;
```
By typing const before double, after pi is first intialized, it can not be changed by any function. 
