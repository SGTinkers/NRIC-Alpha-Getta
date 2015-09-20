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
	
	[self.nric setText:@"Enter your NRIC(numbers only)"];
	[self.button setTitle:@"Get Letter" forState:UIControlStateNormal];
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
	// Dispose of any resources that can be recreated.
}

- (IBAction)getLetter:(id)sender {
	NSString *string = [self.textField text];
	NSLog(@"%@\n", string);
	
	if (![user lengthIsCorrect:string]) {
		NSLog(@"Hello\n");
	
		UIAlertController *c = [UIAlertController alertControllerWithTitle:@"Alert" message:@"Input length must be 7!" preferredStyle:UIAlertControllerStyleActionSheet];
		UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^ (UIAlertAction*action) {
			NSLog(@"OK\n");
		}];
		UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault handler:nil];
		[c addAction:okAction];
		[c addAction:cancelAction];
		
		[self presentViewController:c animated:YES completion:nil];
	}
}

@end
