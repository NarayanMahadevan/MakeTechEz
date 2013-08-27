//
//  NewDog.h
//  LearnObjC
//
//  Created by Narayan Mahadevan on 25/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewDog : NSObject
{
    NSString* name;
}

- (NSString*) name;
- (void) setName: (NSString*) aName;

@property (nonatomic, strong) NSString* name;

@end
