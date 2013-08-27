//
//  NewDog.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 25/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "NewDog.h"

@implementation NewDog

@synthesize name = mName;

- (NSString*) name {
    return mName;
}

- (void) setName: (NSString*) aName {
    mName = aName;
}


@end
