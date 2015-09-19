//
//  User.m
//  NRICApp
//
//  Created by Muhd Mirza on 19/9/15.
//  Copyright © 2015 Muhd Mirza. All rights reserved.
//

#import "User.h"

@implementation User {
	//int DEFAULT_NUMS[] = {2,7,6,5,4,3,2};
	//char alphabets[] = {'A','B','C','D','E','F','G','H','I','J','Z'};
	//int user[7], results[7];
	NSArray *default_nums, *alphabets, *user, *results;
	const NSNumber *SIZE;
	
	NSNumber *divNum;
	NSNumber *total;
	const NSNumber *FINAL_ANS;
}

- (id)init {
	self = [super init];
	
	if (self) {
		default_nums = [NSArray arrayWithObjects:@2, @7, @6, @5, @4, @3, @2, nil];
		alphabets = [NSArray arrayWithObjects:@'A',@'B',@'C',@'D',@'E',@'F',@'G',@'H',@'I',@'J',@'Z', nil];
		user = [NSArray arrayWithObjects:nil count:7];
		results = [NSArray arrayWithObjects:nil count:7];
		
		SIZE = [NSNumber numberWithInteger:7];
		
		divNum = [NSNumber numberWithInteger:11];
		total = [NSNumber numberWithInteger:0];
		FINAL_ANS = [NSNumber numberWithInteger:0];
	}
	
	return self;
}

- (BOOL)getInput: (NSString*)input {
	NSNumber *inputSize = [NSNumber numberWithInteger:input.length];

	if ([inputSize isEqualToNumber:SIZE]) {
		//<< "Input length must be 7!\n";
		return false;
	} else {
		for (int i = 0; i < SIZE; i++) {
			if (!isdigit(input[i])) {
				cout << "Input must be a number!\n";
				return false;
			} else {
				user[i] = *(input.c_str() + i) - '0';
			}
		}
	}
}

@end
