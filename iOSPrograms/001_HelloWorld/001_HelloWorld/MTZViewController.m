//
//  MTZViewController.m
//  001_HelloWorld
//
//  Created by Narayan Mahadevan on 28/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "MTZViewController.h"

@interface MTZViewController ()

@end

@implementation MTZViewController

@synthesize mMTZViewUtil = _mViewUtil;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    _mViewUtil = [MTZViewUtil alloc];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showMessage
{
    [self.mMTZViewUtil showTitle:@"My First App" Message:@"Hello, World!" CancelButtonTitle:@"OK"];
}

@end
