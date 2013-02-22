//
//  pfMasterViewController.h
//  Reading List
//
//  Created by David Payette on 2/22/13.
//  Copyright (c) 2013 Payette Forward. All rights reserved.
//

#import <UIKit/UIKit.h>

@class pfDetailViewController;

#import <CoreData/CoreData.h>

@interface pfMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) pfDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
