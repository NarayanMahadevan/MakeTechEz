#Tutorial One

This tutorial is meant to teach how to complie and run C++ programs as well as create basic ones. 

######Table of Contents
[Parts of a Simple Program](#ProgramSection)   
[Declaring Variables](#Variables)   
[Simple Functions](#SimpleFunctions)   
[Procedure Abstraction](#Abstraction)   
[Main Function](#MainFunction)   

<a name="ProgramSection"/>
###Parts of a Simple Program
There are two major parts to all simple programs. The program body, which contains the functions, and the main.   
The main is what is executed when a program is run. The body cotains the code for what is run in the main.   
The functions in the body has to be declared and/or defined before they can be called in the main.   
The start to most simple functions should have the code 
```
#include <iostream>
```
This code imports the input-output library. Other types of imports will be talked about in a later tutorial.    
The input-output library allows you to use the "<<" and the ">>" operator. The "<<" operator allows for a program to display data. The ">>" operator allows for a program to take input from a keyboard.

<a name="Variables"/>
###Declaring Variables
Variables is an identifier that serves as a name for a chunk of computer memory.   
Data types determine the size of the chunk that the variable refers too as well as how the data is interpreted.   
This chunk of memory holds the variables value.   
A variables is declared by preceding the name of the variable with the data type.      
An example is __int height__    
The above variable height is an integer because its name is preceded by the data-type-declaring int.   
Multiple variables of the same data type can be declared on the same line.   
__int height, width, length;__
####Take note of the commas seperating each variable
Variable assignment is when a value is assinged to a varible. This can either be done when the variable is intialized,   
__int height = 11, width = 9, length = 40;__   
or after it has been created.    
__int height; height = 11__   
Variable values can be changed after they have been assigned using the assignment opperator "="    

<a name="SimpleFunctions"/>
###Simple Functions
Functions is a procedure withen a progam that does the same routine everytime it is run, no matter what variables are inputed.
```
int boxCarVolume(int h, int w, int l){
	return h*w*l;
}
```
This function has the name boxVolume, returns the data type int, and takes in 3 integers as parameters.   

Overriding functions is when two functions with the same name are created, but with different paramters. For example:

```
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

void displayBoxCarVolume(double h, double w, double l){
	cout << "The volume of the box car is " << h*w*l << endl;
}
```
Precceding the function name with void means that it does not return any data type.   
Functions simplify programs and allows programs to reuse code.   
Note that all the variables in the above code are local variables.    
Local variables are variables that are created and used within a specific function. Once the function ends, the variable memory is cleared.   
Global variables are variables that are created whent the program is started. They can be used throughout the program and are not limited to a specfic function.   
A Global Variables is declared outside of any function.   
<a name="Abstraction"/>
###Procedure Abstraction
Moving computational details into a function is known as procedural abstraction.    
The key virtue of this is that it makes programs easy to reuse. Other virtues of procedural abstraction is that is hides the computation, and it makes your program easier to debug.    
The final benefit of procedural abstraction is it allows the programmer to change how the computation is done easily.    

<a name="MainFunction"/>
###Main Function
Variables, functions and input/output operators can be combined to create a very simple c++ program. 
The first step is to declare the variables that are going to be needed. 
```
int main(){
	int height, width, length,stretch = 10;
```
Note that height,width and length do not yet have a value.    
The next step is to get inputs from the user as to what the height, width and length are going to be
```
	cout << "Please enter the height, width and length of the box car\n";
	cin >> height >> width >> length;
```
When the program is run, the line after the __<<__ operator will be printed. The user then imputs three numbers which becomes the value of height, width and length.   
For example, if the input is 60,450,20. The height is 60, the width is 450 and the lenght is 20.    
Now, the next step is to use the functions we created to display the volume of the box car. 
```
	displayBoxCarVolume(height,width,length);
```
To show that the other volume function, we print out th volume of the car with the stretch added to the variable. 
```
	cout << "The volume of an elongated box car is " 
		 << boxCarVolume(height, width, length + stretch)
		 << endl;
```
Finally, do the same thing with doubles instead of integers to show that the overriding functions work. 
```
double doubleHeight, doubleWidth, doubleLength;
	cin >> doubleHeight >> doubleWidth >> doubleLength;
	displayBoxCarVolume(doubleHeight, doubleWidth, doubleLength);
	cout << "The volume of an elongated box car is " 
		 << boxCarVolume(doubleHeight, doubleWidth, doubleLength + (double)stretch)
		 << endl;
```
End the main with a return statement and the program is done. 
```
	return 0;
}
```
