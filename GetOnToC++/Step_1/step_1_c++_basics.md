# Step 1: Get On To C/C++ Basics

In this step C++ Basics is introduced by writing a executable program for the Problem Statement defined below. The Concepts introduced in this step are:

1. [**Declaration of Variables**](#declare_vars)
2. [**Local and Global Variables**](#local_global_vars) 
3. [**Write Functions**](#write_functions)
4. [**Arithmatic Operators, Output & Input Operators and Assignment Operators**](#operators)

## Problem Statement
#  
In this step lets write a Program that reads User Defined Inputs to compute the volume of a Box Car and Tank Car and Outputs the result onto the Console.

Here Box Car is a Rectangular Car having length, breadth and height while the tank car is cylindrical having radius and length.

**Main Program**

Lets create a S1_ComputeVolume.cpp file and declare the main function and the place holders for Variables, Input & Output Operators, Functions, and Global Variables.

    //
    //  Program Name - S1_ComputeVolume.cpp
    //  Series: GetOnToC++ Step: 1
    //
    //  Purpose: This program computes the Volume of the Box Car and the Tank Car  
    //
    //  Compile: g++ S1_ComputeVolume.cpp -o S1_ComputeVolume
    //  Execute: ./S1_ComputeVolume
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //
    
    #include <iostream>
    using namespace std;
        
    // Section 2 - Global Variables 

    main ( ) { 
        // Section 1 - Declaration of Variables 
    
        // Section 4 - Output & Input Operators 

    }

    // Section 3 - Write Functions
 
<a name="declare_vars"/></a>
## Section 1: Declaration of Variables
#  
As the first step lets learn how to declare variables. As mentioned above the parameters to compute volume of Rectangular Car are Length, Breadth and Height while the parameters that compute the volume of Tank Car are Radius and the Length. These parameters are nothing but Variables in C/C++

The format for Veriable Definition is as shown below

![Declare Variables](https://raw.github.com/NarayanMahadevan/MakeTechEzResources/master/images/DeclareVariables.png) 

**Data Type** can be C++ built-in data types are char, short, int, long, float, double, etc or User Defined Data Types.

A **Variable** with name length refers to chunk of computer memory. The variable's data type determines the size of the memory. Here variable belongs to the double data type, the chunk of memory involved is likely to contain 64 bits (1 byte = 8 bits).

The **Assignment Operator (=)** assigns value to the variable length,

The double **Value** of 20.5 is stored in the variable length.

**SIDE STEP**

If you are curious about how much memory your C++ implementation allocates for the various data types, you can compile and execute the following program, which uses the sizeof operator to determine data-type size:

	//
    //  Program Name - S1_SizeOfVar.cpp
    //  Series: GetOnToC++ Step: 1
    //
    //  Purpose: This program outputs the size of C++ in built data types using  
    //           sizeof operator 
    //
    //  Compile: g++ S1_SizeOfVar.cpp -o S1_SizeOfVar
    //  Execute: ./S1_SizeOfVar
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //
    
    #include <iostream>
    using namespace std;

    main ( ) { 
  		cout << "Data Type    Bytes" << endl 
       		 << "char         " << sizeof(char) << endl 
       		 << "short        " << sizeof(short) << endl 
             << "int          " << sizeof(int) << endl 
             << "long         " << sizeof(long) << endl 
             << "float        " << sizeof(float) << endl 
             << "double       " << sizeof(double) << endl 
             << "long double  " << sizeof(long double) << endl; 
    }
    
***
**NOTE:** You can include comments in C++ programs in two ways. 

1. // short comments that appear in single line
2. /\* Long Comments that appear in multiple lines \*/ 
***

**Main Program**

Lets declare the variables for the Problem Statement

        // Section 1 - Declaration of Variables 
        
        /* 
         1. The Vairbles defined below are Local Variables and are local to this 
            main function. 
         2. All Variables are of data type double(holds 8 bytes or 64 bits memory) 
            and intialized to 0.0
        */
        
        // Variabes for Box Car
        double length = 0.0, breadth = 0.0, height = 0.0;
        
        // Vairables for Tank Car which is a Cylinder
        double radius = 0.0, cylLength = 0.0;


<a name="local_global_vars"/></a>
## Section 2: Local and Global Variables
#  
**Local Vairable -** 

1. A variable declared inside a function definition is said to be a **local variable**.
2. The memory allocated for Function Parameters and Local Variables are **reallocated** as soon as the corresponding function has finished executing, so parameters and local variables are said to have **dynamic extent**.
3. Function Parameters and local variables can be evaluated and assigned only in the function in which they are declared. Accordingly, parameters and local variables are said to have **local scope**.

**Global Vairable -** 

1. A variable defined outside of any function definition is said to be a **global variable**.
2. The memory set aside for a global variable is never reallocated, so global variables are said to have **static extent**.
3. Global variables can be evaluated and assigned at any point in a program after they are defined, so global variables are said to have **universal scope**. 

**Main Program**

Lets declare the Global Vairables to indicate the current year and the mathamatical constant Pi

    // Section 2 - Global Variables 
    
    // CurrentYear is a Global Vairable and indicates the current year     
    int gCurrentYear = 2013;

    /*
     * PI is a Global Variable and is also a Mathematical Constant as indicated
     * by const directive. This means PI value cannot be re-assigned.
     */
    double PI = 3.14159;

***
**NOTE:** To differentiate between local and global variables, global variable begin with g. The Constant Global Variable are all caps.  
***

<a name="write_functions"/></a>
## Section 3: Write Functions
#  

The problem statement is to compute the volume of the Box Car and the Tank Car. Since the volume will be computed for varying length, breadth and height as well as for varying cylindrical length and radius, its best this computation is done in a volume computing function. The function definition is as follows: 

**Procedure Abstraction** is achieved when computational detail are moved into a function. The benifits are: 

1. Easy to reuse your programs
2. Makes programs easier to read and enables to concentrate on high-level steps
3. Easy to debug program
4. Easy to change and improve code

**Main Program**

Lets declare the functions to compute the volume of the Box Car and the Tank Car

    // Section 3 - Write Functions

    /*
     * This function calculates the Volume of the Box Car
     * Input Param are: ht => height, wt => width, and lt = length
     * return: volume of the Box Car
     * Note: Here the scope of Function Parameters are local to this 
     * function and is called call-by-value  
     */    
    double calcBoxCarVolume(double ht, double wt, double lt) {
        /*
         * The scope of the boxCarVol variable is local to this function.
         * This means the memory is not available outside the function.
         * The local variable boxCarVol stores the volume of the Box Car
         */        
        double boxCarVol = 0.0;
        
        // Box Car Volume Computation using Arithmatic Operations
        
        // Returns the Box Car Volume
        return boxCarVol;
    }

    /*
     * This function calculates the Volume of the Tank Car
     * Input Param are: rad => radius, and lt = length of the cylinder
     * return: volume of the Tank Car
     * Note: Here the scope of Function Parameters are local to this 
     * function and is called call-by-value  
     */    
    double calcTankCarVolume(double ht, double wt, double lt) {
        /*
         * The scope of the tankCarVol variable is local to this function.
         * This means the memory is not available outside the function.
         * The local variable tankCarVol stores the volume of the Tank Car
         */        
        double tankCarVol = 0.0;
        
        // Tank Car Volume Computation using Arithmatic Operations
        
        // Returns the Tank Car Volume
        return tankCarVol;
    }

***
**NOTE:** When the scope of function parameters are local to the function and not available outside the function, such parameters are called **call-by-value**. The scope and extent to which Memory is available for Function Parameters are similar to Local Variable.  
***
 
<a name="operators"/></a>
## Arithmatic Operators, Output & Input Operators and Assignment Operators
#  
This section defines the following:

a. [**Arithmatic Operator**](#arithmatic_operator)
b. [**Output Operator**](#output_operator)
c. [**Assignment Operator**](#assignment_operator)  
d. [**Input Operator**](#input_operator)  
e. [**Operator Precedence and Associativity Table**](#precedence_operator)

<a name="arithmatic_operator"/></a>
### Arithmatic Operators
#  
Arithmatic Operators are either

* **Binary Operator** - Most operators are binary operators; that is, they have two operands. **Binary Operators are +, -, *, / and %** operators for addition, subtraction, multiplication, division, and modulus operator. For e.g. 
  * 6 / 3 => In this case "/" is a division operator and 6 and 3 are Operands
  * 5 % 3 => The Modulus Operator produces the reminder i.e. 2
  * 5 / 3 => Divide, evaluating to 1, rather than 2 or 1.66667
  * 5.0 / 3.0 => Divide, evaluating to 1.66667

* **Unary Operators** - Unary operators, such as the negation operator, -, and unary plus, +, have just one operand, found on the immediate right of the operator.  For e.g. 6 - (-3) => The result is 9. "(-3)" is the unary operator. Unary Operator evaluates from right to left and the precedence of the unary operator is higher than that of Binary Operators +, -, *, or /. More in [**Operator Precedence**](#precedence_operator)

C++ Expressions are evaluated first on Precedence and than if operators have same Precedence then on Associativity i.e. either the expression is evaluated left to right or right to left. 

* **Precedence** - Unary Operators have highest precedense followed by "*, /, %" operators and than by "+ or -" operators. 
* **Associativity** - Unary Operators are evaluated from Right to Left and the remaining Arithmatic Operators Left to Right.

**SIDE STEP**

This program shows how C++ handles precedence and associativity.

    //
    //  Program Name - S1_ArthmaticExpression.cpp
    //  Series: GetOnToC++ 	Step: 1 	
    //
    //  Purpose: This program shows the way C++ handles operator precedence and 
    //           associativity
    //
    //  Compile: g++ S1_ArthmaticExpression.cpp -o S1_ArthmaticExpression
    //  Execute: ./S1_ArthmaticExpression
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //
    
    #include <iostream>
    using namespace std;

    main ( ) { 

        // Equivalent to 6 + (3 * 2) = 12 And not (6 + 3) * 2 = 18
        cout << "Expression = 6 + 3 * 2, with Higher Precedense: " 
             << 6 + 3 * 2 << endl; 

        // Equivalent to 6 - (-3) = 9 
        cout << "Expression = 6 - -3, with Unary Opetrator -3: " 
             << 6 - -3 << endl; 

        // Equivalet to: (6 / 3) / 2 = 1
        cout << "Expression = 6 / 3 / 2, with Same Precedense (L to R): " 
             << 6 / 3 / 2 << endl;       
           
        // Equivalent to (6 / 3) * 2 = 4 And not 6 / (3 * 2) = 1     
        cout << "Expression = 6 / 3 * 2, with Same Precedense (L to R): " 
             << 6 / 3 * 2  << endl;

        // Equivalent to (6 * 3) / 2 = 9 And not 6 * (3 / 2) = 6    
        cout << "Expression = 6 * 3 / 2, with Same Precedense (L to R): " 
             << 6 * 3 / 2  << endl;
    }
    
<a name="output_operator"/></a>
### Output Operator
#  

Lets see how C++ handles output statements essentially cout and the output operator (<<). 

a. **cout** - cout is actually a variable, and like all variables, it is the name of a chunk of memory
b. **Output Operator "<<"** - The chunk of memory held by cout vairable is only useful to output operator to display on the console.

***

For e.g.

cout << "The volume of the box car is " << 10 * 9 * 40 << endl; 

Output Operator is evaluated from Left to Right. So cout first stores the String "The volume of the box car is " then after display it replaces the String with the value of the expression  10 * 9 * 40 and then endl i.e. new line.  

Also Note that the **Output Operator has precendence lower than the Arithmatic Operator** and hence the volume 10 * 9 * 40 is computed first before assigning to cout variable.
***

<a name="assignment_operator"/></a>
### Assignment Operator
#  

The assignment operator, =, like all operators in C++, produces a value. The assignment operator has the lowest precedence and the associativity is from right to left. Thus for e.g.

int volume = 10 * 9 * 40;

First the value 10 * 9 * 40 is computed because of higher precedence and the value 3600 is assigned to the variable volume bacause of right to left associativity.

<a name="input_operator"/></a>
### Input Operator
#  
<a name="precedence_operator"/></a>
### Operator Precedence and Associativity Table
#  
