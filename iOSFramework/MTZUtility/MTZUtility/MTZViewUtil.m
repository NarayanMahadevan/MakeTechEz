//
//  MTZViewUtil.m
//  001_HelloWorld
//
//  Created by Narayan Mahadevan on 28/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "MTZViewUtil.h"
#import <UIKit/UIKit.h>


@implementation MTZViewUtil

-(IBAction)showTitle:(NSString*) title
             Message:(NSString*) message CancelButtonTitle:(NSString*) buttonTitle
{
    UIAlertView *alert = [[UIAlertView alloc]
                                    initWithTitle:title message:message delegate:nil
                                    cancelButtonTitle:buttonTitle  otherButtonTitles:nil];
    
    // Display the Hello World Message
    [alert show];
}

@end
