//
//  Dog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "Dog.h"

// Optional Section A1: Implementation Variable - Local to the
// implementation file is defined here

// The vairables are declared static only one instance object needs
// to be created across all Dog Objects
static NSDictionary *_DogTemperament;
static NSDictionary *_DogAggression;
static NSDictionary *_DogIntelligence;
static BOOL _IsStaticVarInit = false;

@implementation Dog {
    // Optional Section A2: Implementation Variable - Instance Variable
    // available only to this implementation file is defined here
    // This variable maintains Dog Objects temperament, aggression and intelligence
    NSString *mTemperament;
    NSString *mAggression;
    NSString *mIntelligence;
}

// Section B: @synthesize directive
@synthesize name = mName;
@synthesize breed = mBreed;
@synthesize color = mColor;
@synthesize age = mAge;
@synthesize isPoliceDog = mIsPoliceDog;

// Section C: Accessor Methods are implemented here

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

// Section D: Class Method to Initialize (init) is implemented here

+(id)alocAndInitName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor
              AndAge:(NSNumber*)aAge
{
    Dog* myDog = [[Dog alloc] init];
    return [myDog initName:aName Breed:aBreed Color:aColor AndAge:aAge];
}

// Section E: Instance Method to Initialize (init) is implemented here

// This method is over written from the super class.
// Since all the properties are using @synthesize directive, this init method is called
// during memory allocation

-(id)init {
    self = [super init];
    // By default all dogs are not Police Dog
    mIsPoliceDog = false;
    if (self) {
        initStaticVars();
    }
    return self;
}

// This method is local to the implementation file and its purpose is to
// allocate memory and initialize the static variables
void initStaticVars() {
    
    // Checks if the static variables are already initialized. If not then
    // the memory is allocated and initialized.
    if (_IsStaticVarInit) return;
    
    // Set the values for the local static variable
    _DogTemperament = [[NSDictionary alloc] initWithObjectsAndKeys:
                       @"Fearless, and willing to defend",
                       @"Doberman",
                       @"Active and willingness to learn",
                       @"German Shepherd",
                       nil];
    
    _DogAggression = [[NSDictionary alloc] initWithObjectsAndKeys:
                      @"Extremely high on stranger-directed aggression",
                      @"Doberman",
                      @"Being very safe",
                      @"German Shepherd",
                      nil];
    
    _DogIntelligence = [[NSDictionary alloc] initWithObjectsAndKeys:
                        @"Ranked 5th most intelligent dog",
                        @"Doberman",
                        @"Ranked 3rd most intelligent dog",
                        @"German Shepherd",
                        nil];
    _IsStaticVarInit = true;
    
}

-(id)initName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge
{
    initStaticVars();
    mName = aName;
    mBreed = aBreed;
    mColor = aColor;
    mAge = aAge;
    return self;
}

// Section F: Instance Method to describe Dogs Behaviour is implemented here

-(void) temperament {
    if (mTemperament == NULL)
        mTemperament = [_DogTemperament objectForKey:mBreed];
    NSLog(@"Temperament of my %@ the %@ Dog is %@", mName, mBreed,
          mTemperament);
}

-(void) aggression {
    if (mAggression == NULL)
        mAggression = [_DogAggression objectForKey:mBreed];
    NSLog(@"Aggression of my %@ the %@ Dog is %@", mName, mBreed,
          mAggression);
}

-(void) intelligence {
    if (mIntelligence == NULL)
        mIntelligence = [_DogIntelligence objectForKey:mBreed];
    NSLog(@"Intelligence of my %@ the %@ Dog is %@", mName, mBreed,
          mIntelligence);
}

// This method is over-written from NSObject and Returns a string that
// represents the contents of the receiving class.
- (NSString *)description {
    return [NSString stringWithFormat:
            @"My Dogs name is %@, Breed is %@, and Color is %@",
            mName, mBreed, mColor];
}

@end
