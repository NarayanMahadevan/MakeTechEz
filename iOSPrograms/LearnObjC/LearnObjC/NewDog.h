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
    @private
        NSString* name;
}

- (NSString*) name;
- (void) setName: (NSString*) aName;

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* breed;
@property (nonatomic, strong) NSNumber* age;

// Instance Methods to Set Dog Object Properties
-(id)initName:(NSString*)aName Breed:(NSString*)aBreed Color:(NSString*)aColor AndAge:(NSNumber*)aAge;

// Instance Methods to describe Dogs Behaviour such as temperament, aggression, intelligence etc
-(void) temperament;


@end
