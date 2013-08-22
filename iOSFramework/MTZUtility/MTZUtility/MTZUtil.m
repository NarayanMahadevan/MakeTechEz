//
//  MTZUtil.m
//  MTZUtility
//
//  Created by Narayan Mahadevan on 01/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "MTZUtil.h"

@implementation MTZUtil

//
// List of Class and Object Methods
//

+(Boolean) isClassAvailable:(NSString*) className
{
    if (NSClassFromString(className) != nil) return true;
    return false;
}

+(Class) getIfClassAvailable:(NSString*) className
{
    return NSClassFromString(className);
}

+(Boolean) checkMethodAvailable:(SEL) methName inClass: (Class) class
{
    return [class respondsToSelector:methName];
}

+(Boolean) checkInstanceMethodAvailable:(SEL) methName inClass: (Class) class
{
    return [class instancesRespondToSelector:methName];
}

+(Boolean) checkMethodAvailable:(SEL) methName inInstance:(id)object
{
    return [object respondsToSelector:methName];
}

+ (NSString*) getMethodName:(const char*) methName
{
    return [NSString stringWithUTF8String: methName];
}

+ (NSString*) getClassName:(NSObject*) obj
{
    NSString *className = [[obj class] description];
    [self logMessage:className];
    return className;
}

+ (BOOL) isObject:(NSObject*) obj OfKind: (Class) class
{
    return [obj isKindOfClass:class];
}

+ (BOOL) isObject:(NSObject*) obj OfClass: (Class) class
{
    return [obj isMemberOfClass:class];
}

//
// List of Methods to load and serialize plist
//


+(NSDictionary*) loadPList:(NSString*) pListName
{
    // First retrieving the full path of the plist resource.
    NSString *path = [[NSBundle mainBundle] pathForResource:pListName ofType:@"plist"];
    [self logMessage:@"Path is:" Value:path];
    
    // NSDictionary class provides the necessary methods for managing the dictionary.
    // Here “initWithContentsOfFile” method of NSDictionary class is used to read the
    // key-value pairs in a property list file
    NSDictionary *dict = [[NSDictionary alloc] initWithContentsOfFile:path];
    return dict;
}

+(NSData*)savePList:(id) pList asXMLDataInDir:(NSString*) dir
{
    NSString *path = [[NSBundle mainBundle] pathForResource:dir ofType:@"plist"];
    NSData *xmlData;
    NSString *error;
    
    xmlData = [NSPropertyListSerialization dataFromPropertyList:pList
                                                         format:NSPropertyListXMLFormat_v1_0
                                               errorDescription:&error];
    if(xmlData) {
        error = @"No error creating XML data.";
        [xmlData writeToFile:path atomically:YES];
    }
    
    [self logMessage:error];
    return xmlData;
}

//
// List of Array Methods
//

// Create and array object and initialize the same with list of objects
+ (id)initArrayWithObjects:(id)firstObject, ...
{
    id eachObject;
    // va_list type, and the va_start(), va_arg(), and va_end() methods are macros.
    va_list argumentList = NULL;
    //    NSArray *arr = [[NSArray alloc] initWithObjects:firstObject, argumentList, nil];
    NSMutableArray *array = [NSMutableArray alloc];
    // The first argument isn't part of the varargs list,
    // so we'll handle it separately.
    if (firstObject)
    {
        [array addObject: firstObject];
        // Start scanning for arguments after firstObject.
        va_start(argumentList, firstObject);
        // As many times as we can get an argument of type "id"
        while ((eachObject = va_arg(argumentList, id)))
            [array addObject: eachObject]; // that isn't nil, add it to self's contents.
        va_end(argumentList);        
    }
    return array;
}

//
// List of Logging Methods
//

+ (void) logBool:(NSString *)text Value:(BOOL) result
{
    NSString* res = result? @"Yes!" : @"No!";
    [self logMessage: text Value:res];
}

+ (void) logInt: (NSString*) text Value: (NSInteger) value
{
    NSString* resText = [text stringByAppendingString:@" = %ld"];
    NSLog(resText, value);
}

+ (void) logDouble: (NSString*) text Value: (double) value
{
    NSString* resText = [text stringByAppendingString:@" = %f"];
    NSLog(resText, value);
}

+ (void) logMethod: (const char*) methName Value: (NSObject*) value
{
    [self logMessage:[NSString stringWithUTF8String: methName] Value:value];
}

+ (void) logMessage: (NSObject*) value
{
    [self logMessage: NULL Value:value];
}

+ (void) logMessage: (NSString*) text Value: (NSObject*) value
{
    NSMutableString* mutText = NULL;
    if (text == NULL || [text length] == 0)
        mutText = [NSMutableString stringWithString:@"Log Message"];
    else mutText = [NSMutableString stringWithString:text];
    [mutText appendString:@" = %@"];
    NSLog(mutText, value);
}


@end
