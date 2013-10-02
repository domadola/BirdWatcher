//
//  AddSightingViewController.h
//  BirdWatcher
//
//  Created by Dom Lamendola on 10/1/13.
//  Copyright (c) 2013 edu.dom. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end
