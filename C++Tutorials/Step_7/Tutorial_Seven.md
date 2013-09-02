#Pointers

[New Class Objects At Run Time](#Objects)   
[Storing Pointers in Class Objects](#Storing)   


<a name="Objects"/>
###New Class Objects At Run Time
Normally, when a global variable is defined, the C++ compiler allocates memory to hold the object corresponding to the variable type.   
In this tutorial, you will learn an alternative whereby the C++ compiler allocates a small piece of memory for a __pointer__ at compile time, and waits until run time to allocate memory for the object.   
A __pointer__ is a chunk of memory that holds the adress of an object. A __pointer name__ idetifies a chunk of memory containing the adress of the object.   
A pointer is defined the same way any other global variable is defined, however there is an asterisk appears before the pointer name. 
```
#include <iostream>
using namespace std;

double d:
double *dptr;
cylinder c;
cylinder *cptr;
```
__double *dptr__ makes dptr a pointer, and the memory allocated for ptr is expected to containt the adress of a chunk of memory allocated for a floating-point number of type double.   
This means that dptr idetifies the locates of an adress whereas *dptr idetifies the location of the floating-point number identified by the adress.   
Each C++ program has a large chunk of memory called the __free store__. The __new__ operator allocates memory from this chunk of memory for a specific object at run time.   
The expression __new double__ alloactes the memory required to hold a double object.   
You can tie a pointer to a run time allocated memory chunk using the following statement:
```
dptr = new double;
cptr = new cylinder;
```
When the above statement is used for the class object, the default constructor is called.   
Now that *cptr value is a cylinder object, you can use *cptr in larger expression involving the class operators and variables.   
The following code is how operators and functions can be accessed. 

__cptr -> radius;__   
__cptr -> volume();__   
__cptr -> radius = 3.9;__   
The first line of code is how variables are accesed from pointers. The second is how functions are accesed, and the third is how variables are written. 

<a name="Storing"/>
###Storing Pointers in Class Objects
Pointers are extreamly usefull for creating arrays that allocate space only at runtime.   
Arrays of pointers use alot less space then array of objects.   
Defining a array of pointers is the same ad defining a normal pointer:
```
cylinder *oil_tank_pointers[100];
```
Accessing thie array is the same as any nomral array.   
__*oil_tank_pointers[4]__ refers to the 5th pointer in the array.   
Accessing the varibales and functions of the classes in the array are the same as a normal pointer.   
__*oil_tank_pointers[4]->radius__ gives the value of the radius of the 5th pointer in the array.   
All of this combined can create an effecient program to compute the volume of many tanks.   
First, the pointers in the array have to be intialized and assigned values. 
```
int main(){
	int limit;
	double raidus, length;
	for(limit = 0; cin >> radius >> length; ++limit){
		oil_tank_pointers[limit] = new cylinder;
		oil_tank_pointers[limit] -> radius = radius;
		oil_tank_pointers[limit] -> length = length;
	}
```
This for-loop will endlessly ask for inputs for the radius and length. Each time, the input will be stored in a cylinder object. 
The next part is to take the array of cylinders pointers and find the total volume. 
```
	double sum = 0.0;
	for(int counter = 0; counter < limit; ++counter){
		sum = sum + oil_tank_pointers[counter] -> volume();
	}
	cout << "The total volume in the " << limit << " storage tanks is " << sum << endl;
}
```
This program is extremly efficient because cylinder obects, which are each 16 bytes, are only created when they have to be. The rest of the space in the array are pointers which are alot smaller.   

