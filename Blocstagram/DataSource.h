//
//  DataSource.h
//  Blocstagram
//
//  Created by Nathan Boosinger on 12/3/15.
//  Copyright © 2015 Nathan Boosinger. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
