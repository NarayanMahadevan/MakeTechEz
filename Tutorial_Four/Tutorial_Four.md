#Tutorial Four

[Numerical Predicates](#Predicates)   
[One-Way and Two-Way Conditional Statements](#ConditionalStatements)   
[Iteration Statements](#Iteration)   

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
	cout << "BASIC CONDITIONAL STATEMENT" << endl;
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
	cout << "NESTED CONDITIONAL STATEMENTS" << endl;
	if(temp >= 25){
		if(temp <= 50){
			cout << "The temperature is perfect" << endl;
		}else{
			cout << "the temperature is not perfect" << endl;
		}
	}else{
		cout << "The temperature is not perfect" << endl;
	}
```
In the above code, the inner if-statements are the embedded statements of the outer if-statements. Thus they are only used when the boolean expression returns true.   
One of the most important parts of writing conditional statements is to keep them non-redundent and simple. The more complex and redundent series of conditional statements are, the more likely a bug will appear in the code.   
By keeping the statements non-redundent and simple, it is easier to debug as well as update the code. 
One way to keep statments simple is to combine them using the __and operator, &&__ and the __or operator, ||__.   
The and operator returns _true_ when both its operands are _true_.   
The or operator returns _true_ if one of its operands are _true_.   
The above code can be simplified and become less redundent using these operators.
```
	cout << "CONDITIONAL STATEMENTS WITH THE AND OPERATOR" << endl;
	if(temp >= 25 && temp <= 50){
		cout << "The temperature is perfect" << endl;
	}else{
		cout << "The temperature is not perfect" << endl;
	}
```
This could also be written using the or operator:
```
	cout << "CONDITIONAL STATEMENTS WITH THE OR OPERATOR" << endl;
	if(temp < 25 || temp < 50){
		cout << "The temperature is not perfect" << endl;
	}else{ 
		cout << "The temperature is perfect" << endl; 
```
Both pieces of code do the same thing, and both are better then the original because they are simplier and less redundent. 
Conditional statements are extremly important and useful part of the C++ language.

<a name="Iteration"/>
###Iteration Statements
An __iteration statement__ enables functions to do computations over and over again until a test has been satisfied.   
There are two basic iteration statements in the C++ language. The first is the __while-loop__.   
The while-loop consistes of a boolean expression in parentheses, followed by an embedded statement.   
__while(boolean expression){__   
__embedded statement__    
__}__   
Suppose, for example, you wanted to increase or decrease the temperature by one degree at a time of a train car if it is not perfect. A while loop is a perfect way of doing this. 
```
	cout << "WHILE LOOP" << endl;
	if(temp < 25){
		cout << "It is too cold << endl;
		int counter = temp;
		while(counter <=25){
			counter++;
			cout << "The temperature has been increased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else if(temp > 50){
		cout << "It is too warm << endl;
		int counter = temp;
		while(counter >= 50){
			counter--;
			cout << "The temperature has been decreased to " << temp << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else{
		cout << "The temperature is perfect" << endl;
	}
```
In the above code, the temperature is checked as to whether or not is perfect. If it is not, it is either decreased or increased using a while loop.   
Make sure that in the boolean expression eventually become false. In the above code, by increamenting/decrementing the temperature, the boolean expression used to start the while loop eventually is false and the loops breaks. If the boolean expression is always true, the loop will never end.   
In an event that the loop never ends, you can exit out of the program using control-c.   
The second iteration statement is the __for-loop__.   
The for-loop is a more concise version of the while -loop. It consistes of an entry expression, a boolean expression, and a continuation expression in paranthesis followed by a an embedded statement.    
__for(entry expression; boolean expression; continuation expression){__   
__embedded statement__   
__}__   
The entry expression is only evaluted once, when the for loop is entered. Once the entry expression is evaluated, the boolean expression is evaluated. If the boolean expression is true, then the embedded expression is evaluated, followed by the continuation expression.   
The above code can be defined using a for loop. 
```	
	cout << "FOR LOOP" << endl;
	if(temp < 25){
		cout << "It is too cold << endl;
		for(int counter = temp; counter < 25; ++counter)
			cout << "The temperature has been increased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else if(temp > 50){
		cout << "It is too warm << endl;
		for(int coutner = temp; counter >50; --counter)
			cout << "The temperature has been decreased to " << counter << " degrees" << endl;
		}
		cout << "The temperature is now perfect";
	}else{
		cout << "The temperature is perfect" << endl;
	}
```


	
