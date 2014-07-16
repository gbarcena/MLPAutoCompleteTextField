//
//  DemoTableViewController.h
//  MLPAutoCompleteDemo
//
//  Created by Gustavo Barcena on 7/15/14.
//  Copyright (c) 2014 Mainloop. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLPAutoCompleteTextFieldDelegate.h"

@class DEMODataSource;
@class MLPAutoCompleteTextField;

@interface DemoTableViewController : UITableViewController <UITextFieldDelegate, MLPAutoCompleteTextFieldDelegate>

@property (strong, nonatomic) IBOutlet DEMODataSource *autocompleteDataSource;


@end
