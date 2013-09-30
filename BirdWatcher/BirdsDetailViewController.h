//
//  BirdsDetailViewController.h
//  BirdWatcher
//
//  Created by Dom Lamendola on 9/30/13.
//  Copyright (c) 2013 edu.dom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
