//
//  ViewController.h
//  NRICApp
//
//  Created by Muhd Mirza on 14/9/15.
//  Copyright (c) 2015 Muhd Mirza. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property IBOutlet UILabel *nric;
@property IBOutlet UITextField *textField;
@property IBOutlet UIButton *button;

- (IBAction)getLetter:(id)sender;

@end

