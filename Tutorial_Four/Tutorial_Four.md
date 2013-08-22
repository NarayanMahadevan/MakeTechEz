#Tutorial Four

[Numerical Predicates](#Predicates)   
[One-Way and Two-Way Conditional Statements](#ConditionalStatements)   

<a name="Predicates"/>
###Predicates
Functions that return values that are either true or flase are called predicates. C++ offers several predicates that test the relationship between numbers.

| Predicate     | Purpose       |
| ------------- |:-------------:|
| ==            | Are two numbers equal?                                 |
| !=            | Are two numbers not equal?                             |
| >             | Is the first number greater than the second            |
| <             | Is the first number less than the second?              |
| >=            | Is the first number greater than or equal to the second|
| <=            | Is the first number less than or equal to the second   |

The value of the expression 5==3 is 0, which means false. 
The value of the expression 5!=3 is 1, which means true. 

| Integer Value | Meaning |
| ------------- | ------- |
| 0 | False |
| 1 | True |

Note the ! character followed immeditly by the = character denotes the inequality predicate. 
The ! character alone is not a predicate but a _not_ operator. 
For example !0 == 1 and !1 == 0.
Predicates have a precedence lower then output, input and not operators, but above arithmetic operators(+,-,*,/). Due to this, ceratin expressions need paranthesis around them to function properly.   
The easiest way to solve this problem is to be liberal with paranthesis usage. Use them whether you need them or not. 

<a name="ConditionalStatements"/>
###One-Way and Two-Way Conditional Statements
A __boolean expression__ is an expression that produces a true or false result.   
A __if statement__ contains a boolean expresion in parenthesis, followed by an embedded statement that only occurs when the boolean expression produces a true result.   
An if statement is used in a program when different lines of code has to be executed depending on what condition is met.    
If the specific condition is not met, then the corresponding lines of code will not be executed.   
An example of one such program would be a program that displayed a message depending on what the temperature was. 
```
#include <iostream>
int main(){
	int temp;
	cin >> temp;
	if(temp < 25){
		cout << "It is too cold << endl;
	}else if(temp > 50){
		cout << "It is too warm << endl;
	}else{
		cout << "The temperature is perfect" << endl;
	}
```
In the above code, the conditional statement has three blocks. The first is the _if_ block, followed by the _else if_, and then the _else_ block.   
This is the generic format of any if conditional statement. The _else if_ and _else_ block are not needed to complete the conditional statement. Also there can be more then one _else if_ statements if needed.   
If-statements can be nested in each other. For example
```
	if(temp < 25){
		cout << "It is too cold << endl;
		if(temp > 0){
			cout << "At least it is not freezing << endl;
		}else{
			cout << It is freezing << endl;
		}
	}else if(temp > 50){
		cout << "It is too warm" << endl;
		if(temp < 100){
			cout << "At least it is not boiling << endl;
		}else{
			cout << "It is boiling << endl;
		}
	}
```
In the above code, the inner if-statements are the embedded statements of the outer if-statements. Thus they are only used when the boolean expression returns true.   
One of the most important parts of writing conditional statements is to keep them non-redundent and simple. The more complex and redundent series of conditional statements are, the more likely a bug will appear in the code.   
By keeping the statements non-redundent and simple, it is easier to debug as well as update the code. 
One way to keep statments simple is to combine them using the __and operator, &&__ and the __or operator, ||__.


	
