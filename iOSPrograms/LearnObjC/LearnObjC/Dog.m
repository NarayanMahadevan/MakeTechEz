//
//  Dog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "Dog.h"

@implementation Dog {
    // Section F: Instance Variable available only the implementation file is defined here
    NSDictionary *_DogTemperament;
    NSDictionary *_DogAggression;
    NSDictionary *_DogIntelligence;
}

// Section A: @synthesize directive
@synthesize name = mName;
@synthesize breed = mBreed;
@synthesize color = mColor;
@synthesize age = mAge;

// Section B: Accessor Methods are implemented here

// getter methods
- (NSString*) name {
    return mName;
}

- (NSString*) breed {
    return mBreed;
}

- (NSString*) color {
    return mColor;
}

// setter methods
- (void) setName: (NSString*) aName {
    mName = aName;
}

- (void) setBreed: (NSString*) aBreed {
    mBreed = aBreed;
}

- (void) setColor: (NSString*) aColor {
    mColor = aColor;
}

// Section C: Class Method to Initialize (init) is implemented here

+(id)alocAndInitName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor
              AndAge:(NSNumber*)aAge
{
    Dog* myDog = [[Dog alloc] init];
    return [myDog initName:aName Breed:aBreed Color:aColor AndAge:aAge];
}

// Section D: Instance Method to Initialize (init) is implemented here

// This method is over written from the super class.
// Since all the properties are using @synthesize directive, this init method is called
// during memory allocation

-(id)init {
    self = [super init];
    if (self) {
        // Set the values for the local instance variable
        _DogTemperament = [[NSDictionary alloc] initWithObjectsAndKeys:
                           @" Dogs are fearless, and willing to defend",
                           @"Doberman",
                           @" Dogs are active and have willingness to learn",
                           @"German Shepherds",
                           nil];
        
        _DogAggression = [[NSDictionary alloc] initWithObjectsAndKeys:
                           @" Dogs are extremely high on stranger-directed aggression",
                           @"Doberman",
                           @" Dogs have a reputation as being very safe",
                           @"German Shepherds", 
                           nil];
    
        _DogIntelligence = [[NSDictionary alloc] initWithObjectsAndKeys:
                          @" Dogs are ranked the 5th most intelligent dog",
                          @"Doberman", 
                          @" Dogs are ranked the 3rd most intelligent dog",
                          @"German Shepherds",
                          nil];
    }
    return self;
}

-(id)initName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge
{
    mName = aName;
    mBreed = aBreed;
    mColor = aColor;
    mAge = aAge;
    return self;
}

// Section E: Instance Method to describe Dogs Behaviour is implemented here

-(void) temperament {
    NSString* resText = [mBreed stringByAppendingString:
                                [_DogTemperament objectForKey:mBreed]];
    NSLog(@"Temperament of %@", resText);
}

-(void) aggression {
    NSString* resText = [mBreed stringByAppendingString:
                         [_DogAggression objectForKey:mBreed]];
    NSLog(@"Temperament of %@", resText);
}

-(void) intelligence {
    NSString* resText = [mBreed stringByAppendingString:
                         [_DogIntelligence objectForKey:mBreed]];
    NSLog(@"Intelligence: %@", resText);
}

@end
