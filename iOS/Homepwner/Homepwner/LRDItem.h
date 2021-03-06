//
//  LRDItem.h
//  Homepwner
//
//  Created by 张林 on 15/6/24.
//  Copyright (c) 2015年 张林. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LRDItem : NSObject <NSCoding>

@property (nonatomic, readwrite) NSString *itemName;
@property (nonatomic, readwrite) NSString *serialNumber;
@property (nonatomic, readwrite) int valueInDollars;
@property (nonatomic, readwrite) NSDate *dateCreated;
@property (nonatomic, readwrite) NSString *imageKey;

-(void) setThumbnailFromImage:(UIImage *) image ;

@end
