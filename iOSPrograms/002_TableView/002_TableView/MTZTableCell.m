//
//  MTZTableCell.m
//  002_TableView
//
//  Created by Narayan Mahadevan on 29/07/13.
//  Copyright (c) 2013 MakeTechEz. All rights reserved.
//

#import "MTZTableCell.h"

// This class serves as the data model of custom cell specified using interface builder
@implementation MTZTableCell

// The “@synthesize” keyword tells compiler to automatically generate code for accessing the
// properties we declared earlier. If you forget to include this directive, Xcode will complain

// Here _nameLabel, _prepTimeLabel, etc are the alternate name like typedef to the class properties.
// typedef name is optional, if defined then the impl file can access the class property using the
// typedef name or else using self.propertyName e.g. self.nameLabel

@synthesize nameLabel = _nameLabel;
@synthesize prepTimeLabel = _prepTimeLabel;
@synthesize thumbnailImageView = _thumbnailImageView;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}




@end
