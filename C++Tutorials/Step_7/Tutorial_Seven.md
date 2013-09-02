#Pointers

[New Class Objects At Run Time](#Objects)   


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
```
cptr -> radius;
cptr -> volume();
cptr -> radius = 3.9;
```
The first line of code is how variables are accesed from pointers. The second is how functions are accesed, and the third is how variables are written. 
