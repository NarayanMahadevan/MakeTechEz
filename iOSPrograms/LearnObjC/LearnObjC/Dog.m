//
//  Dog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "Dog.h"

@implementation Dog

@synthesize name = mName;
@synthesize breed = mBreed;
@synthesize color = mColor;
@synthesize age = mAge;

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

-(id)initWithName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge
{
    mName = aName;
    mBreed = aBreed;
    mColor = aColor;
    mAge = aAge;
    return self;
}

@end
