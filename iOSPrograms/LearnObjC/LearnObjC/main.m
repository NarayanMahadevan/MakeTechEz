//
//  main.m
//  LearnObjC
//
//  Created by Narayan Mahadevan on 15/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "NewDog.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSLog(@"Hello, World!");
        
        NewDog* aDog = [[NewDog alloc] init];
        aDog.name = @"Stacy";
        aDog = [aDog initName:@"Stacy" Breed:@"Doberman" Color:@"Black" AndAge:[NSNumber numberWithInt:5]];
        [aDog temperament];
        
        NewDog* secDog = [[NewDog alloc] init];
        secDog.name = @"Stormy";
        secDog.breed = @"German Shepherd";
//        secDog = [secDog initName:@"Stormy" Breed:@"German Shepherd" Color:@"Black" AndAge:[NSNumber numberWithInt:5]];
        [secDog temperament];
    }
    return 0;
}

