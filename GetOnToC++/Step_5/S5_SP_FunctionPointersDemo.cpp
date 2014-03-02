    //
    //  Program Name - S5_SP_FunctionPointersDemo.cpp
    //  Series: GetOnToC++ Step: 5 Side Program
    //
    //  Purpose: Demonstrating different ways in which pointers to a function 
    //           can be used
    //
    //  Compile: g++ S5_SP_FunctionPointersDemo.cpp -o exe/S5_SP_FunctionPointersDemo
    //  Execute: exe/S5_SP_FunctionPointersDemo
    //
    //  Created by Narayan Mahadevan on 18/08/13.
    //  Copyright (c) 2013 MakeTechEz. All rights reserved.
    //

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
	// Declare fptr as a pointer to a function of type void (*) (int)
	// fptr can be read as pointer to a function taking int as a parameter and
	// returning void 
    typedef void (*fptr)(int);
    
    // Function Prototype
    void f0( int );
    void f1( int );
    
    // Declare function prototype f2 to take int and function pointer fptr as a 
    // parameter and returning void
    void f2( int, fptr );
    
    
    // Declare function prototype f3 to take int as a parameter and returning 
    // function pointer fptr
    fptr f3( int );
    
    int main() 
    {
    	// Declare f as an array of function pointers of type fptr and having 
    	// Function f1 as its element
    	fptr f[1] = { f1 }; 
    	
        int choice, cntr = 0, MaxChoice = 3;
    	int choiceList[] = {0, 1, 2};
    	choice = choiceList[cntr];

        cout << "Enter a number between 0 and 2, 3 to end: "; 
        cin >> choice;

        while( choice >= 0 && choice<3 )
        {
            if (choice == 0) 
            	// Calling the function f1 using the array of function pointer
            	f[ choice ]( choice );
            else if (choice == 1) 
            	// Calling function f2 passing choice and function f1 as a parameter
            	f2( choice, f[0] );
            else if (choice == 2) {
				// Calling function f3 returning function pointer
            	fptr fptr1 = f3(choice);
            	
		    	// Calling function f1 using the function pointer fptr1
            	fptr1(choice);
            	
				// Assigning fptr function pointer to point to f0
		    	fptr1 = &f0;
		    	
		    	// Calling function f0 using function pointer fptr1
            	fptr1(choice);
            }
            
	        cout << "Enter a number between 0 and 2, 3 to end: "; cin >> choice;
        }
        cout << "Program execution completed." << endl;
        return 0;
    }

    void f0( int choice )
    {
    	cout << "Inside Function f0\n";
    }
    
    void f1( int choice )
    {
    	if (choice == 0)
       		cout << "You entered " << choice << " so function f1 was called\n";
        else if (choice == 1) 
        	cout << "Function f1 is being called from function f2" << endl;
        else if (choice == 2) 
        	cout << "Function f1 is being called from returned function f3" 
        		 << endl;
    	cout << endl;
    }

    void f2( int choice, fptr fptr1  )
    {
       	cout << "You entered " << choice << " so function f2 was called\n";
       	
		// Using function pointer fptr1 to call the underlying function f1 
		// and passing choice variable
    	fptr1(choice);
    }

    fptr f3( int choice )
    {
       cout << "You entered " << choice << " so function f3 was called\n";
       return f1;
    }
