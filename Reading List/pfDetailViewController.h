//
//  pfDetailViewController.h
//  Reading List
//
//  Created by David Payette on 2/22/13.
//  Copyright (c) 2013 Payette Forward. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pfDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
