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
6+3  	//Add
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


<a name="Abstraction"/>
###Procedure Abstraction


<a name="Variables"/>
###Local and Global Variables
