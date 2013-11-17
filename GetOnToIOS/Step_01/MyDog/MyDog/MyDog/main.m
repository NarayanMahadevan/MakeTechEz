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
        
        NSLog(@"In Dog Project");
        // Section B: Object Creation
        
        // Creating Dog Objects for Doberman and German Shepherd
        Dog* myDoberman = [[Dog alloc] init];
        Dog* myGermanShepherd = [[Dog alloc] init];
        
        // Section C: Method Invocation or Messaging 
        
        // The following method Dog Object is initialized without calling
        // Objects Setter Property
        // Here dog is directly initialized after allocation by calling the
        // initName:Breed:Color:AndAge method
        Dog* myDog = [[Dog alloc] initName:@"Sweety" Breed:@"Doberman"
                                     Color:@"Black"
                                     AndAge:[NSNumber numberWithInt:10]];

        // Here allocation and initialization of dog object is done by calling
        // the Dog's Class Method
        Dog* myDog1 = [Dog alocAndInitName:@"Topsy" Breed:@"German Shepherd"
                                     Color:@"Black"
                                     AndAge:[NSNumber numberWithInt:10]];
        
        // Section D: Set Properties
        // Note that the compiler internally convert the following code to
        // setter method during compile-time. So value can be assigned to
        // name property directly instead of [myDoberman setName:@"Stacy"];
        
        // Here setter method is called on each property while in section C
        // the init method is set on all the properties of Dog class
        
        // Setting myDoberman properties
        myDoberman.name = @"Buddy";
        myDoberman.breed = @"Doberman";
        myDoberman.color = @"Black";
        myDoberman.age = [NSNumber numberWithInt:10];
        
        // myGermanShepherd myDoberman properties
        myGermanShepherd.name = @"Rombo";
        myGermanShepherd.breed = @"German Shepherd";
        myGermanShepherd.color = @"Black";
        myGermanShepherd.age = [NSNumber numberWithInt:5];
        
        // Note: The both lines of the following code call the setter method
        //       isPoliceDog. The second line calls explicitly. Also note
        //       the setter method name was changed during Property Settings
        //       to isPoliceDog
        myGermanShepherd.isPoliceDog = true;
        [myGermanShepherd isPoliceDog:true];
        
        // Section E: Invoke Behaviour
        
        // Invoke Methods to understand the Behaviour of Doberman
        [myDoberman temperament];
        [myDoberman aggression];
        [myDoberman intelligence];
        
        // Invoke Methods to understand the Behaviour of German Shepherd
        [myGermanShepherd temperament];
        [myGermanShepherd aggression];
        [myGermanShepherd intelligence];
        
        // Dog Description
        NSLog(@"myDog Object Desc = %@", [myDog description]);
        NSLog(@"myDog1 Object Desc = %@", [myDog1 description]);
    }
    return 0;
}

