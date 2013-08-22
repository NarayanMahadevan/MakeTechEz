//
//  StringUtil.m
//  MTZUtility
//
//  Created by Narayan Mahadevan on 01/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "StringUtil.h"
#import "MTZUtil.h"
//
//  StringUtil.m
//  HelloWorld
//
//  Created by Narayan Mahadevan on 19/06/13.
//  Copyright (c) 2013 Narayan Mahadevan. All rights reserved.
//

#import "StringUtil.h"
#import <objc/runtime.h>

@implementation StringUtil

- (NSString*)description
{
    NSString* className = [MTZUtil getClassName:self];
    NSMutableString* desc = [NSMutableString stringWithString:@"Your Object is a: "];
    [desc appendString:className];
    return desc;
}

+ (const char *) convertNStringToCString:(NSString*) str
{
    return [str UTF8String];
}

+ (NSString*) appendString:(NSString*) str1 with:(NSString*) str2
{
    return [str1 stringByAppendingString:str2];
}

+ (NSString*) convertCStringToNSString:(const char*) cStr
{
    NSString* resStr = [NSString stringWithUTF8String: cStr];
    return resStr;
}

+ (BOOL) isStringEqual:(NSString*) str1 ToString: (NSString*) str2
{
    if ([str1 isEqualToString:str2]) return true;
    if ([str1 length] != [str2 length]) return false;
    NSRange range = [str1 rangeOfString:str2];
    if (range.location == NSNotFound) return false;
    return true;
}

+ (BOOL) isStringEqualIgnoreCase:(NSString*) str1 ToString: (NSString*) str2
{
    if ([str1 length] != [str2 length]) return false;
    NSRange range = [str1 rangeOfString:str2 options:NSCaseInsensitiveSearch];
    if (range.location == NSNotFound) return false;
    return true;
}


+ (NSInteger) literalSearch:(NSString*) str inOrig: (NSString*) orgStr
{
    return [StringUtil searchString:str inOrig:orgStr options:NSLiteralSearch];
}

// Case In-Sensitive Search
+ (NSInteger) ignoreCaseSearch:(NSString*) str inOrig: (NSString*) orgStr
{
    return [self searchString:str inOrig:orgStr options:NSCaseInsensitiveSearch];
}

+ (NSInteger) searchString:(NSString *)str inOrig:(NSString *) orgStr
{
    NSRange range = [orgStr rangeOfString:str];
    if (range.location == NSNotFound) return -1;
    return range.location;
}

+ (NSInteger) searchString:(NSString*) str inOrig: (NSString*) orgStr options: (NSStringCompareOptions) options
{
    NSRange range = [orgStr rangeOfString:str options:options];
    if (range.location == NSNotFound) return -1;
    return range.location;
}

+ (void) testStrings
{
    NSString *simpleStr = @"Simple String";
    NSString *str2 = @"simple string";
    [MTZUtil logMethod:__FUNCTION__ Value:simpleStr];
    [MTZUtil logMessage:@"Simple Str" Value: simpleStr];
    NSString* key = @"string";
    NSInteger pos = [self ignoreCaseSearch:key inOrig:simpleStr];
    [MTZUtil logInt:@"Search Str Pos" Value: pos];
    [MTZUtil logBool:@"Is String Equal" Value:[self isStringEqualIgnoreCase:simpleStr ToString:str2]];
}

@end
