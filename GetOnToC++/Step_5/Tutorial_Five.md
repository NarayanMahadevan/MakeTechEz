#Recursion and Function Prototypes

[Recursion](#Recursion)   
[Function Prototypes](#Prototypes)   
[Practice](#Practice)

<a name="Recursion"/>
###Recursion 
In the previous tutorial, you learned how to repeat a computation using iteration statements. In this section, you will learn how to repeat computations using recursive function calls.   
__Recursion__ is when a function calls upon its self withen its definition.   
There are two parts to writing recurions, the __base case__ and the __recursive step__.   
Take for example how fast rabbits multiply with the following assumptions. 
*	Female rabbits mature 1 month after birth.
*	Once mature, female rabbits have one female child each month.
*	At the beginning of the first month, there is one immature female rabbit.
*	Rabbits live forever.
*	There are always enough males to mate with the mature females.   

According to these assumptions, the number of females at the end of the _nth_ month is the number of females at the end of the previous month plus the number of females that gave birth in the current month.  Naturally the number of females that gave birth in the current month is the number of mature females at the end of the last month, which is the number of females two months prior to the current month.   
_Rabits(n) = Rabits(n-1) + Rabits(n-2)_   
Recursion allows us to create function using this formula.   
The first step is to create the base case. The base case is what breaks out of reccursion and allows the program to exit.   
In this case, the base case are the two numbers that cause the above formula to be invalid. 
The recursive step is when the fucntion is called withen it self. In this case, it is when the formula above is used. 
```
#include <iostream>
using namespace std;

int rabbits(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return rabbits(n-1) + rabbits(n-2);
	}
}
```
In the above code, the base case is n=0 and n=1. If we are in the the 0th or 1st month, there is only one rabbit. The recursive step is called whenever n is not 0 or 1.   
Recurssion is hard to visualize, so lets take this program above step by step when rabbits(5) is called. 
- rabbits(5) = rabbits(4) + rabbits(3)
- rabbits(5) = rabbits(3) + rabbits(2) + rabbits(2) + rabbits(1)
- rabbits(5) = rabbits(2) + rabbits(1) + rabbits(1) + rabbits(0) + rabbits(1) + rabbits(0) + 1
- rabbits(5) = rabbits(1) + rabbits(0) + 1 + 1 + 1 + 1 + 1 +1
- rabbits(5) = 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 8.

Both versions of the program accomplish the same goal, however the first does it in less steps and is easier to understand. This does not mean that 

These are the steps the program takes when rabbits(5) is called. The base case stops the reccursion from continueing by return 1 instead of a function call. 
Recursion provides elegant solutions for complicated solutions, however it does have its downsides. 
- Recusion produces slower programs due to the number of function calls needed. 
- Recursion has problems with larger arguments because the number of function calls in a recurive chain of calls is usually limited to 100. 

These problems can be worked around by creating different compilers, however this is not done with C++.

<a name="Prototypes"/>
###Function Prototypes
C++ ordinarily requires the definition of a function to be written before it is called. For basic programs, this is an easy rule to follow, however sometimes functions call upon other functions.   
To solve the ordering problem of what order the functions have to be defined in, functions prototypes must be used.   
To see the need of function prototypes, the above problem of finding the number of female rabbits in a given month using two auxiliary functions instead of recursion.   
The new formula is    
_rabbits(n) = previousMonthRabbits(n) + penultimateMonthRabbits(n)_   
It is the same formula, however it uses auxillary functions instead of just function. 
The two auxillary functions are defined as such:
__int previousMonth(int n){return rabbit(n-1);}__   
__int penultimateMonth(int n)P{return rabbit(n-2);}__   
Note the problem with this code. Both functions call the rabbits function, however the rabbits function has not yet been defined. Defining the rabbit function before these two functions does not solve the problem either because the rabbit function calls upon the auxillary functions. The solution is function prototypes. 
```
int rabbit(int);
```
A prototypes is just the declaration of the function. It is not definined. No code for the function is written. Prototypes should be at the beggining of the program. 
with the prototype written, the two auxiallry functions will work as well as the definition of the rabbit function. 
```
int previousMonth(int n){return rabbit(n-1);}
int penultimateMonth(int n){return rabbit(n-2);}
int rabbit(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return previousMonth(n) + penultimateMonth(n);
	}
}
```
Note that writting the program this way is still a type of recursion. Recursion is hard to visualize so, like above, lets take this program above step by step when rabbit(5) is called. 
- rabbit(5) = previousMonth(5) + penultimateMonth(5)
- rabbit(5) = rabbit(4) + rabbit(3)
- rabbit(5) = previousMonth(4) + penultimateMonth(4) + previousMonth(3) + penultimateMonth(3)
- rabbit(5) = rabbit(3) + rabbit(2) + rabbit(2) + rabbit(1)
- rabbit(5) = previousMonth(3) + penultimateMonth(3) + previousMonth(2) + penultimateMonth(2) + previousMonth(2) + penultimateMonth(2) + 1
- rabbit(5) = rabbit(2) + rabbit(1) + rabbit(1) + rabbit(0) + rabbit(1) + rabbit(0) + 1
- rabbit(5) = previousMonth(2) + penultimateMonth(2) + 1 + 1 + 1 + 1 + 1 + 1
- rabbit(5) = rabbit(1) + rabbit(0) + 1 + 1 + 1 + 1 + 1 +1
- rabbit(5) = 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 8.

Both versions of the program accomplish the same goal, however the first does it in less steps and is easier to understand. This does not mean that using auxillary functions is bad. There are problems that need the usage of auxillary functions to do simply, this example is just not one of them. 
It is simple to see that these two functions do the same thing by running them side by side using the following main function. 
```
int main(){
	cout << "FIRST PROGRAM" << endl
		 << "At the end of month 1, there is " << rabbits(1) << endl
		 << "At the end of month 2, there are " << rabbits(2) << endl
		 << "At the end of month 3, there are " << rabbits(3) << endl
		 << "At the end of month 4, there are " << rabbits(4) << endl
		 << "At the end of month 5, there are " << rabbits(5) << endl
		 << "SECOND PROGRAM" << endl 
		 << "At the end of month 1, there is " << rabbit(1) << endl
		 << "At the end of month 2, there are " << rabbit(2) << endl
		 << "At the end of month 3, there are " << rabbit(3) << endl
		 << "At the end of month 4, there are " << rabbit(4) << endl
		 << "At the end of month 5, there are " << rabbit(5) << endl;
}	 
```

<a name="Practice"/>
###Practice
1.Write a recursive function that takes two positive integers and calculates m^n   
2.Write a recursive function that takes one positive integer and calculates n! where n! = _n*(n-1)*(n-2)*...*1_   
3.Convert the function is problem two, to a program consisting of three cooperating functions, _factorial_, _base_, and _recurse_.   
The function should look like this:   
__int factorial(n){__   
__if(n==0){__   
__return base();__   
__}else{__   
__return recurse(n);__   
__}__   
The recurse function must call the factorial function. This means that a function prototype is needed. 
