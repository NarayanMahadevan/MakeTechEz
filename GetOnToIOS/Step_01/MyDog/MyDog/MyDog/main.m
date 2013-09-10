//
//  main.m
//  MyDog
//
//  Created by Narayan Mahadevan on 06/09/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <Foundation/Foundation.h>

// Section A: Import file pertaining to MyDog Project.
// This tells the compiler where to look when Dog Object is create and
// methods are invoked

#import "Dog.h"

// This line declares a function called main. All of the code in your
// app that provides some type of processing or logic is encapsulated
// into functions; the main function is what kicks off the whole app.

// The int part of int main means the return value of main returns an
// integer such as 10 or -2. The (int argc, const char * argv[]) bits
// in parentheses are the arguments, or inputs, to the function.
int main(int argc, const char * argv[])
{

    // Autorelease pools are used to manage memory. Automatic Memory
    // Management is done for all the objects in between the curly braces
    @autoreleasepool {
        
        // Section B: Object Creation
        
        // Creating Dog Objects for Doberman and German Shepherd
        Dog* myDoberman = [[Dog alloc] init];
        Dog* myGermanShepherd = [[Dog alloc] init];
        
        // The following method Dog Object is initialized without calling
        // Objects Setter Property
        // Here dog is directly initialized after allocation by calling the
        // initName:Breed:Color:AndAge method
        Dog* myDog = [[Dog alloc] initName:@"Sweety" Breed:@"Doberman"
                                     Color:@"Black" AndAge:[NSNumber numberWithInt:10]];

        // Here allocation and initialization of dog object is done by calling
        // the Dog's Class Method
        Dog* myDog1 = [Dog alocAndInitName:@"Topsy" Breed:@"German Shepherd"
                                     Color:@"Black" AndAge:[NSNumber numberWithInt:10]];
        
        
        // Section C: Set Properties
        // Note that the compiler internally convert the following code to
        // setter method during compile-time
        myDoberman.name = @"Stacy";
        myDoberman.age = [NSNumber numberWithInt:10];
        [myDoberman setName:@"Stacy"];
        
        // Section D: Invoke Methods on Dog Object to know Dogs Behaviour
        
    }
    return 0;
}

