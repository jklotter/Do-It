//
//  MasterViewController.h
//  Do-It
//
//  Created by Dan Brajkovic on 1/27/14.
//  Copyright (c) 2014 Dan Brajkovic. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
