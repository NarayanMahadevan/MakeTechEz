//
//  MTZViewController.h
//  001_HelloWorld
//
//  Created by Narayan Mahadevan on 28/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MTZViewUtil.h"


@interface MTZViewController : UIViewController

@property (nonatomic, strong) MTZViewUtil *mMTZViewUtil;

-(IBAction)showMessage;

@end
