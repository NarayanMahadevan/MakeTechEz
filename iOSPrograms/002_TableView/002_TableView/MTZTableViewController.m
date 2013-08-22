//
//  MTZTableViewController.m
//  002_TableView
//
//  Created by Narayan Mahadevan on 29/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "MTZTableViewController.h"
#import "MTZTableCell.h"
#import <MTZUtility/MTZUtility.h>
#import <MTZUtility/MTZViewUtil.h>
#import <MTZUtility/MTZUtil.h>

@interface MTZTableViewController ()

@end

@implementation MTZTableViewController {
    // Instance Variable to hold table data.
    // Since fixed hence NSArray is used. If dynamic NSMutableArray needs to be used
    // This variables are like Private Variables available only the implementation file
    NSArray *tableData;
    NSArray *thumbnails;
    NSArray *prepTime;
    MTZViewUtil *viewUtil;
}

// This is the default method that gets called when the View is loaded
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // Initialize table data
    tableData = [NSArray arrayWithObjects:@"Egg Benedict", @"Mushroom Risotto", @"Full Breakfast", @"Hamburger", @"Ham and Egg Sandwich", @"Creme Brelee", @"White Chocolate Donut", @"Starbucks Coffee", @"Vegetable Curry", @"Instant Noodle with Egg", @"Noodle with BBQ Pork", @"Japanese Noodle with Pork", @"Green Tea", @"Thai Shrimp Cake", @"Angry Birds Cake", @"Ham and Cheese Panini", nil];
    
    // Initialize thumbnails
    thumbnails = [NSArray arrayWithObjects:@"egg_benedict.jpg", @"mushroom_risotto.jpg", @"full_breakfast.jpg", @"hamburger.jpg", @"ham_and_egg_sandwich.jpg", @"creme_brelee.jpg", @"white_chocolate_donut.jpg", @"starbucks_coffee.jpg", @"vegetable_curry.jpg", @"instant_noodle_with_egg.jpg", @"noodle_with_bbq_pork.jpg", @"japanese_noodle_with_pork.jpg", @"green_tea.jpg", @"thai_shrimp_cake.jpg", @"angry_birds_cake.jpg", @"ham_and_cheese_panini.jpg", nil];
    
    // Initialize Preparation Time
    prepTime = [NSArray arrayWithObjects:@"30 min", @"30 min", @"20 min", @"30 min", @"10 min", @"1 hour", @"45 min", @"5 min", @"30 min", @"8 min", @"20 min", @"20 min", @"5 min", @"1.5 hour", @"4 hours", @"10 min", nil];
    
    // Find the Path of recipes.plist and Load the file content and read the data into arrays
    NSDictionary *dict = [MTZUtil loadPList:@"recipes"];
    tableData = [dict objectForKey:@"RecipeName"];
    thumbnails = [dict objectForKey:@"Thumbnail"];
    prepTime = [dict objectForKey:@"PrepTime"];
    
    viewUtil = [MTZViewUtil alloc];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

// This method specifies how many data rows are their. Its a mandatory method..
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [tableData count];
}

// This method is called by iOS automatically each time before a table row is displayed.
// The indexPath parameter contains the row number (as well as the section number) of the table row. 
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *simpleTableIdentifier = @"SimpleTableItem";
    
    // dequeueReusableCellWithIdentifier - Used by the delegate to acquire an already allocated cell,
    // in lieu of allocating a new one.
    // UITableViewCell is the default table view cell for showing the table items
    //    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:simpleTableIdentifier];
    
    // MTZTableCell Custom Class must be specified in the identity inspector
    // Once identified, the properties of the class like the image view, label myst be linked to the
    // corresoinding ui controls specified in the xib file.
    MTZTableCell *cell = (MTZTableCell *) [tableView dequeueReusableCellWithIdentifier:
                                           simpleTableIdentifier];
    
    if (cell == nil) {
//        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:
//                                        simpleTableIdentifier];
        NSArray *nib = [[NSBundle mainBundle] loadNibNamed:@"MTZTableCell" owner:self options:nil];
        cell = [nib objectAtIndex:0];
    }
    
    cell.nameLabel.text = [tableData objectAtIndex:indexPath.row];
    cell.thumbnailImageView.image = [UIImage imageNamed:[thumbnails objectAtIndex:indexPath.row]];
    cell.prepTimeLabel.text = [prepTime objectAtIndex:indexPath.row];

    return cell;
}

// This method is added to indicate the table height is changed to 78. This method is defined in
// UITableViewDelegate protocol
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 78;
}

// Tells the delegate that the specified row is now selected.
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [MTZUtil logMethod:__FUNCTION__ Value:indexPath];
    // To display a check mark when a row is selected in the accessory view
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    if (cell.accessoryType == UITableViewCellAccessoryCheckmark) {        
        // Setting the Cell Accessory to none
        cell.accessoryType = UITableViewCellAccessoryNone;
        
        // This deselects the row with animation
        [tableView deselectRowAtIndexPath:indexPath animated:YES];
    } else {
        // Show alert message of the selected row
        [viewUtil showTitle:@"Row Selected" Message:[tableData objectAtIndex:indexPath.row]
                  CancelButtonTitle:@"OK"];
        
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
    }
        
}



@end
