//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Nathan Boosinger on 12/3/15.
//  Copyright © 2015 Nathan Boosinger. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
