//
//  pfAppDelegate.h
//  Reading List
//
//  Created by David Payette on 2/22/13.
//  Copyright (c) 2013 Payette Forward. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface pfAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
