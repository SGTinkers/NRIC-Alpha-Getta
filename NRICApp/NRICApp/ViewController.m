//
//  ViewController.m
//  NRICApp
//
//  Created by Muhd Mirza on 14/9/15.
//  Copyright (c) 2015 Muhd Mirza. All rights reserved.
//

#import "ViewController.h"
#import "User.h"

@interface ViewController ()

@end

@implementation ViewController {
	User *user;
}

@synthesize nric, textField, button;

- (void)viewDidLoad {
	[super viewDidLoad];
	
	user = [[User alloc]init];
	
	[self.nric setText:@"Enter your NRIC\n(numbers only)"];
	[self.nric setNumberOfLines:0];
	
	[self.button setTitle:@"Get Letter" forState:UIControlStateNormal];
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}

- (IBAction)getLetter:(id)sender {
	NSString *string = [self.textField text];
	
	if (![user lengthIsCorrect:string]) {
		UIAlertController *c = [UIAlertController alertControllerWithTitle:@"Alert" message:@"Input length must be 7!" preferredStyle:UIAlertControllerStyleAlert];
		UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^ (UIAlertAction*action) {
			self.textField.text = @"";
		}];
		[c addAction:okAction];
		
		[self presentViewController:c animated:YES completion:nil];
	} else {
		if ([user isNumber]) {
			NSLog(@"OK\n");
		}
	}
}

@end
