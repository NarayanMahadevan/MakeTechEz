//
//  MTZUtil.h
//  MTZUtility
//
//  Created by Narayan Mahadevan on 01/08/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MTZUtil : NSObject

//
// List of Class and Object Methods
//

// Checks whether the class is available at run time
+(Boolean) isClassAvailable:(NSString*) className;

// Get the class if available at run time for the class name. If not then return nil
+(Class) getIfClassAvailable:(NSString*) className;

// Check whether a method in a class is available at runtime
+(Boolean) checkMethodAvailable:(SEL) methName inClass: (Class) class;

// Check whether a instance method is available at runtime
+(Boolean) checkInstanceMethodAvailable:(SEL) methName inClass: (Class) class;

// Check whether a instance method is available at runtime
+(Boolean) checkMethodAvailable:(SEL) methName inInstance: (id) object;

// Helpful Method to get function Name. Here methName is derived by passing
// __FUNCTION__ as the argument
+ (NSString*) getMethodName:(const char*) methName;

// Helpful Method to get Class Name from Object
+ (NSString*) getClassName:(NSObject*) obj;

// Helpful Method to check if the Object is of perticular class inheritence
// Returns a Boolean value that indicates whether the receiver is an instance of
// given class or an instance of any class that inherits from that class.
+ (BOOL) isObject:(NSObject*) obj OfKind: (Class) class;

// Helpful Method to check if the Object is exactly of perticular class
// Returns a Boolean value that indicates whether the receiver is an instance of a
// given class.
+ (BOOL) isObject:(NSObject*) obj OfClass: (Class) class;

//
// List of Methods to load and serialize plist
//

// Load the Disctionary for the given Property List File Name
+(NSDictionary*) loadPList:(NSString*) pListName;

// Method to serialize property list into xml and save in the specified directory.
// This returns the XML Data
+(NSData*)savePList:(id) pList asXMLDataInDir:(NSString*) dir;

//
// List of Array Methods
//

// Create and array object and initialize the same with list of objects
+ (id)initArrayWithObjects:(id)firstObj, ... NS_REQUIRES_NIL_TERMINATION;

//
// List of Logging Methods
//

+ (void) logBool: (NSString*) text Value: (BOOL) result;
+ (void) logInt: (NSString*) text Value: (NSInteger) value;
+ (void) logDouble: (NSString*) text Value: (double) value;
+ (void) logMessage: (NSObject*) value;
+ (void) logMethod: (const char*) methName Value: (NSObject*) value;
+ (void) logMessage: (NSString*) text Value: (NSObject*) value;


@end
