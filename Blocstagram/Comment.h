//
//  Comment.h
//  Blocstagram
//
//  Created by Nathan Boosinger on 12/2/15.
//  Copyright © 2015 Nathan Boosinger. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
