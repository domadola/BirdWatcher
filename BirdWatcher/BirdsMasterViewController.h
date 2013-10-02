//
//  BirdsMasterViewController.h
//  BirdWatcher
//
//  Created by Dom Lamendola on 9/30/13.
//  Copyright (c) 2013 edu.dom. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
