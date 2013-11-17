//
//  NewDog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 25/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "NewDog.h"

// Section F: Class Variable available only for the implementation
// file is defined here
static NSDictionary* _DogTemperament;
static BOOL _IsStaticVarInit = false;

@implementation NewDog {
    NSString *mTemperament;
}

@synthesize name = mName;
@synthesize breed = mBreed;
@synthesize age = mAge;

- (NSString*) name {
    return mName;
}

- (void) setName: (NSString*) aName {
    mName = aName;
}

-(id)init {
    self = [super init];
    if (self) {
        initStaticVars();
    }
    return self;
}

// This method is defined in the implementation file and its purpose is to
// allocate memory and initialize the static variables
void initStaticVars() {
    
    NSString* res = _IsStaticVarInit? @"Yes!" : @"No!";
    NSLog(@"_IsStaticVarInit: %@", res);
    if (_IsStaticVarInit) return;
    
    // Set the values for the local instance variable
    _DogTemperament = [[NSDictionary alloc] initWithObjectsAndKeys:
                       @" Dogs are fearless, and willing to defend",
                       @"Doberman",
                       @" Dogs are active and have willingness to learn",
                       @"German Shepherd",
                       nil];
    _IsStaticVarInit = true;

}

-(id)initName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge
{
    mName = aName;
    mBreed = aBreed;
    mAge = aAge;
    return self;
}

-(void) temperament {
    if (mTemperament == NULL)
        mTemperament = [mBreed stringByAppendingString:
                               [_DogTemperament objectForKey:mBreed]];
    NSLog(@"Temperament of %@ is %@", mName, mTemperament);
}



@end
