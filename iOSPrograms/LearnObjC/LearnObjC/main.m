//
//  main.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 15/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "Dog.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSLog(@"Hello, World!");
        
    }
    Dog* aDog = [[Dog alloc] initWithName:@"Sweety" Breed:@"Dobberman" AndColor:@"Black"];
    aDog.mName = @"Stacy";
    return 0;
}

