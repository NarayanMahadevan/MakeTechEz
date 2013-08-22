# Step 1: Learn Objective C

<a name="intro"/></a>
## Introduction
#  
Objective-C is the primary programming language for writing software in OS X and iOS. It’s a superset of the C programming language and provides object-oriented capabilities and a dynamic runtime. Objective-C inherits the syntax, primitive types, and flow control statements of C and adds syntax for defining classes and methods.

Objective-C (ObjC) is the first step before programming in iOS. This step will help you understand all you have to know about ObjC write from 


1. [**Definition of new classes**](#create_class)  
2. [**Declaration of Properties and @synthesize directive**](#declare_props) to auto-generate Accessor Methods
3. [**Defining Class and instance methods**](#create_methods)
4. [**Method invocation**](#call_methods)
5. [**Static and dynamic typing**](#typing_var)
6. [**Memory Management**](#manage_memory)
7. [**Blocks**](#set_blocks) — encapsulated segments of code that can be executed at any time
8. [**Working with protocols and categories**](#explain_protocols)

<a name="create_class"/></a>
## Definition of new classes
#  
As in most Object Oriented Languages, ObjeC supports creating your own Data Type by creating a **Class Interface** and ecapsulation of data by creating **Properties** and defining the actions that operate on that data by creating **Methods**. Creating Objects as run-time instance of class having its own in-memory copy of the instance variables declared by its class and pointers to the methods of the class.

A Class in ObjC consists of 

* **Header file** - The header file is essentially a class definition with properties which are attributes of the class and methods that describe the behavior.
* **Implementation file** - The Implementation file is the source file containing the programmong logic by implementing the methods defined in the Header file.

The table below indicates the file name extensions for Header Files and Implementation Files

Extension | Source Type 
:----     | :----------  
.h        | Header files. Header files contain class, type, function, and constant declarations.        
.m        | Implementation files. A file with this extension can contain both Objective-C and C code. It is sometimes called a source file.
.mm       | Implementation files. An implementation file with this extension can contain C++ code in addition to Objective-C and C code. Use this extension only if you actually refer to C++ classes or features from your Objective-C code.       


**Example** - The following will show sample code to define a header file and implementation file of Dog Class which is essentially an Animal. We can describe the Dog's attributes by its Color, Breed, Name, etc as well as Dogs behaviour by Barking, Wagging, Eating, etc. 

#####Comments

The following code sample shows the Comments in ObjC

	//
	//  Dog.h
	//  LearnObjC
	//
	//  Created by MakeTechEz on 18/08/13.
	//  Copyright (c) 2013 MakeTechEz. All rights reserved.
	//

#####Import Foundation Framework

The following code sample uses **#import** directive. This is similar to C’s #include directive, except that it makes sure that the same file is never included more than once. 

Here Foundation Framework is imported. Generally framework is imported to import most or all of the header files contained within the framework. This is done by  importing the framework’s umbrella header file, which has the same name as the framework.

The Foundation framework provides many primitive object classes and data types, making it fundamental to any ObjC development. It defines classes to manage Strings (NSString), manage numbers NSNumber, manage Collections NSArray and NSDictionary, etc. The core classes of Foundation framework is covered in step 2.

	#import <Foundation/Foundation.h>

#####Class Declaration

The class declaration begins with the **@interface** compiler directive and ends with the **@end** directive. The instance variables, properties, and methods appear between these two statements. The class interface is usually stored in the .h file.  

The following sample shows class declaration. The class interface defined is Dog and hence the header file name is Dog.h and the implemntation file is Dog.m. Following the class name (and separated from it by a colon) is the name of the parent class NSObject. In Objective-C, a class can have only one parent.

	@interface Dog : NSObject
	{
		// Section 1: Instance Variables declared here
	}
	// Section 2: Accessor Methods i.e. getter and setter methods are declared here
	// Section 3: Properties are declared here
	// Section 4: Class Methods and Instance Methods declared here
	@end

As you can see in the sample code above, Dog class has 4 sections. Each of the Sections are discussed with code samples.

* Section 1: [**Instance Variables**](@create_variables) 
* Section 2: [**Accessor Methods**](#accessor_methods)
* Section 3: [**Properties**](#declare_props)
* Section 4: [**Class and Instance Methods**](#create_methods)

***
**Note:** Instance Variables and Methods can be called using an Object which is a run-time instance of class having its own in-memory copy. While Class Variables and Methods can be called directly using the Class.
***

 
<a name="create_variables"/></a>
####Instance Variables

Instance Variables are defined within the curly brackets immediately after the class declaration as shown in the sample below. This are essentially read-only variables and setter and getter methods (accessor methods) have to be manually defined to access these variables. Properties are far superior and its advisible to use the same. 

    // Section 1: Instance Variables declared here
    NSString* mName; // Name of the Dog
    NSString* mBreed; // Breed of the Dog
    NSString* mColor; // Color of the Dog

<a name="accessor_methods"/></a>
####Accessor Methods

This section shows how to add getter and setter accessor methods to get and set values to the Instance Vairables. 

***
**Note:** If [**Properties**](#declare_props) were used instead of Instance Variables, [**@synthesize**](#synthesize) feature of ObjC can be used to auto-generate accessor methods.  
***

The getter and setter methods are instance method and indicated by single dash (-) before the method name. Class methods can be called without creating an instance and is indicated by plus (+) sign before the method name.  

The following code sample shows the accessor methods for the instance variables. The getter methods are specified with the same name as the instance variable, while the setter methods are specified by adding "set" word in front of the vairable as shown below

	// Section 2: Accessor Methods i.e. getter and setter methods are declared here

	// getter methods
	- (NSString*) mName;
	- (NSString*) mBreed;
	- (NSString*) mColor;

	// setter methods
	- (void) setMName: (NSString*) name;
	- (void) setMBreed: (NSString*) breed;
	- (void) setMColor: (NSString*) color;

***
**Note: ** The way setter method is defined is exactly the same way the methods are defined in ObjC. See more in [**Class and Instance Methods**](#create_methods)
***

<a name="declare_props"/></a>
## Declaration of Properties and @synthesize Directive
#  
 
