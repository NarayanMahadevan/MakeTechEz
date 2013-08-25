#Recursion and Function Prototypes

["Recursion"](#Recursion)   


<a name="Recursion"/>
In the previous tutorial, you learned how to repeat a computation using iteration statements. In this section, you will learn how to repeat computations using recursive function calls.   
__Recursion__ is when a function calls upon its self withen its definition.   
There are two parts to writing recurions, the __base case__ and the __recursive step__.   
Take for example how fast rabbits multiply with the following assumptions. 
*	Female rabbits mature 1 month after birth.
*	Once mature, female rabbits have one female child each month.
*	At the beginning of the first month, there is one immature female rabbit.
*	Rabbits live forever.
*	There are always enough males to mate with the mature females. 
According to these assumptions, the number of females at the end of the _nth_ month is the number of females at the end of the previous month plus the number of females that gave birth in the current month. Naturally the number of females that gave birth in the current month is the number of mature females at the end of the last month, which is the number of females two months prior to the current month.   
_Rabits(n) = Rabits(n-1) + Rabits(n-2)_   
Recursion allows us to create function using this formula.   
The first step is to create the base case. The base case is what breaks out of reccursion and allows the program to exit.   
In this case, the base case are the two numbers that cause the above formula to be invalid. 
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
In the above code, the base case is n=0 and n=1. If we are in the the 0th or 1st month, there is only one rabbit. 

	
