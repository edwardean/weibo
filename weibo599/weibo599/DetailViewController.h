//
//  DetailViewController.h
//  weibo599
//
//  Created by Vincent Song on 8/17/12.
//  Copyright (c) 2012 Vincent Song. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
