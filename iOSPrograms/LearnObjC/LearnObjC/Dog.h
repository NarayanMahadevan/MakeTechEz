//
//  Dog.h
//  LearnObjC
//
//  Created by MakeTechEz on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

// #import directive is like C’s #include directive, except that it makes sure that the same file is never
// included more than once.

// The following imports the Foundation Framework. If you want to import most or all of the header file of
// a framework, import the framework’s umbrella header file, which has the same name as the framework.

// The Foundation framework provides many primitive object classes and data types, making it fundamental
// to app development. It defines classes to manage Strings (NSString), manage numbers NSNumber, manage
// Collections NSArray and NSDictionary, etc

#import <Foundation/Foundation.h>

@interface Dog : NSObject
{
    // Section 1: Instance Variables declared here
    NSString* name;
    NSString* breed;
    NSString* color;
}

// Section 2: Accessor Methods i.e. getter and setter methods are declared here

// getter methods
- (NSString*) name;
- (NSString*) breed;
- (NSString*) color;

// setter methods
- (void) setName: (NSString*) aName;
- (void) setBreed: (NSString*) aBreed;
- (void) setColor: (NSString*) aColor;


// Section 3: Properties are declared here
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* breed;
@property (nonatomic, strong) NSString* color;
@property (nonatomic, strong) NSNumber* age;

// This property defines if the dog is a Police Dog and defines a new setter method 
@property (nonatomic, assign, setter=isPoliceDog:) BOOL isPoliceDog;


// Section 4: Class Methods and Instance Methods declared here

// Class Method to initialize Dog Object
+(id)alocAndInitName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor
              AndAge:(NSNumber*)aAge;

// Instance Methods to Set Dog Object Properties
-(id)initName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge;

// Instance Methods to describe Dogs Behaviour such as temperament, aggression, intelligence etc
-(void) temperament;

-(void) aggression;

-(void) intelligence;

@end
