//
//  Dog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 18/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "Dog.h"

@implementation Dog

-(id)initWithName:(NSString*)aName Breed:(NSString*)breed AndColor:(NSString*) color
{
    mName = aName;
    mBreed = breed;
    mColor = color;
    return self;
}


@end
