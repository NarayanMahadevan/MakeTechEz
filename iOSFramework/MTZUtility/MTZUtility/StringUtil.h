//
//  StringUtil.h
//  MTZUtility
//
//  Created by Narayan Mahadevan on 01/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StringUtil : NSObject

+ (void) testStrings;
+ (NSString*) convertCStringToNSString:(const char*) cStr;
+ (const char *) convertNStringToCString:(NSString*) str;
+ (NSString*) appendString:(NSString*) str1 with:(NSString*) str2;

+ (BOOL) isStringEqual:(NSString*) str1 ToString: (NSString*) str2;

+ (BOOL) isStringEqualIgnoreCase:(NSString*) str1 ToString: (NSString*) str2;

// Case Sensitive Search
+ (NSInteger) searchString:(NSString*) str inOrig: (NSString*) orgStr;

// Case In-Sensitive Search
+ (NSInteger) ignoreCaseSearch:(NSString*) str inOrig: (NSString*) orgStr;

// Literal Search
+ (NSInteger) literalSearch:(NSString*) str inOrig: (NSString*) orgStr;

// Optional Search
+ (NSInteger) searchString:(NSString*) str inOrig: (NSString*) orgStr options: (NSStringCompareOptions) options;


@end
