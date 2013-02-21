//
//  MasterViewController.h
//  test
//
//  Created by yasukawa on 2013/02/21.
//  Copyright (c) 2013年 yasukawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
