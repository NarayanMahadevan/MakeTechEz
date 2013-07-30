//
//  MTZTableViewController.h
//  002_TableView
//
//  Created by Narayan Mahadevan on 29/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <UIKit/UIKit.h>

// The “UITableViewDelegate” and “UITableViewDataSource” are known as protocol in Objective-C.
// This program shows all receipies in a Table View.

// UITableView is the class that displays the list in a table row format. This is added through XIB

// MTZTableViewController implements 2 protocols UITableViewDelegate and UITableViewDataSource

// UITableViewDataSource - UITableView gets the list of data to be displayed from UITableViewDataSource
// UITableViewDataSource protocol declares two required methods (tableView:cellForRowAtIndexPath and
// tableView:numberOfRowsInSection) that has to be implemented.

// UITableViewDelegate, on the other hand, deals with the appearance of the UITableView.
// Optional methods of the protocols let you manage the height of a table row, configure section headings
// and footers, re-order table cells, etc. As well as, handles the row selection

// In the default style of table view cell, the location and size of the thumbnail are fixed as well as
// text to be displayed in each cell

@interface MTZTableViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@end
