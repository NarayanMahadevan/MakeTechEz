#Arrays

[Arrays of Numbers](#Numbers)   
[Arrays of Class Objects](#Objects)   

<a name="Numbers"/>
###Array of Numbers
A one-dimensional array is a collection of places where objects are stored and retrieved using an integer index.   
Each object in the array is called an element of the array.   
Arrays are zero-indexed, meaning that the first element of an array is element 0, the second element is element 1 and so on.   
The number of bytes allocated for each obect in the array depends on what type of object is being stored in the array. If the array stores _long_ objects, then the number of bytes allocated is 8 bytes per integer, but if the array stores _int_ objects, the number of bytes allocated is 4 bytes per number.   
Note that all the elements of an array in C++ must be of the same type.   
To define a __global array__, the following code must be written outside of any function.   
```
#include <iostream>
using namespace std;
int main(){
	int example[10];
```
There are three parts too this code that define the array.
- __int__ specifies that the array contains integer objects. 
- __example__ specifies that the array has the name example.
- __[10]__ specifies that the array contains 10 objects.    

Once an array has been created, it can be written and read into from the various locations in the array, each which is indentified by its numerical indexes.   
To write into a array, an assignment statment,similar to how variables values are assigned, in which the array name and bracketed integer index appear on the left side of the statement. The value being assigned appears on the right side of the statment. An example can be seen below.   
```
	example[3] = 2;
```
Once a value has been written to an array, it can be read by writting an expression containing the name of the array and the bracketed integer index.   
```
	cout << example[3] << endl;
```
The code above will return the value at this place in the array, which is 2.   
Note that the bracketed integer index can be an integer variable instead of an integer.   

<a name="Objects"/>
###Array of Class Objects
An array can be used to store not only number, but class objects as well.   
Suppose an array was defined using the cylinder class defined in Tutorial Three, without the container inheritance.
```
	cylinder oil_tanks[3];
```
The above array holds cylinder objects would have 16 bytes stored for each place in the arrray since the two variables of the object are doubles.   
Setting the values to these cylinder objects are the same as setting the value to any other type of array. 
```
	oil_tanks[0].radius = 5; oil_tanks[0].length = 40.0;
	oil_tanks[1].radius = 3; oil_tanks[1].length = 60.0;
	oil_tanks[2].radius = 2; oil_tanks[2].length = 10.0;
```
Reading the object variables are the same as well.   
```
	cout << oil_tanks[0].volume() << endl;
	cout << oil_tanks[1].volume() << endl;
	cout << oil_tanks[2].volume() << endl;
}
```
Arrays are useful for storing multiple objects. However they are not the only data structure for doing this. Other data structures will be discusses in later tutorials. 


