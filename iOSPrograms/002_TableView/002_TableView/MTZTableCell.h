//
//  MTZTableCell.h
//  002_TableView
//
//  Created by Narayan Mahadevan on 29/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import <Foundation/Foundation.h>

// To custmize the table cell, this class must derive from UITableViewCell

@interface MTZTableCell : UITableViewCell

// Defines three instance variables to associated with the table cell view in Interface Builder

// IBOutlet is like an indicator to associate the instances variables with the elements in the Table
// View Cell (i.e. MTZTableCell.xib),the keyword “IBOutlet” lets Interface Builder know that they’re
// allowed to make connection.

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;


@end
