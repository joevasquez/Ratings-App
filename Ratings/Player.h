//
//  Player.h
//  Ratings
//
//  Created by Joe Vasquez on 8/19/14.
//  Copyright (c) 2014 Joe Vasquez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end