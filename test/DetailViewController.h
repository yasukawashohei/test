//
//  DetailViewController.h
//  test
//
//  Created by yasukawa on 2013/02/21.
//  Copyright (c) 2013年 yasukawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
