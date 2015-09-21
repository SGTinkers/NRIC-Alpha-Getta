//
//  User.m
//  NRICApp
//
//  Created by Muhd Mirza on 19/9/15.
//  Copyright © 2015 Muhd Mirza. All rights reserved.
//

#import "User.h"

@implementation User {
	NSArray *default_nums, *alphabets;
	NSMutableArray *user, *results;
	NSNumber *SIZE;
	
	NSNumber *divNum;
	NSNumber *total;
	const NSNumber *FINAL_ANS;
	
	NSString *inputString;
	
	NSNumber *alphabetNo;
}

- (id)init {
	self = [super init];
	
	if (self) {
		default_nums = [NSArray arrayWithObjects:@2, @7, @6, @5, @4, @3, @2, nil];
		alphabets = [NSArray arrayWithObjects:@'A',@'B',@'C',@'D',@'E',@'F',@'G',@'H',@'I',@'J',@'Z', nil];
		user = [[NSMutableArray alloc]init];
		results = [[NSMutableArray alloc]init];
		
		SIZE = [NSNumber numberWithInteger:7];
		
		divNum = [NSNumber numberWithInteger:11];
		total = [NSNumber numberWithInteger:0];
		FINAL_ANS = [NSNumber numberWithInteger:0];
		
		alphabetNo = [NSNumber numberWithInteger:-1];
	}
	
	return self;
}

- (BOOL)lengthIsCorrect: (NSString*)input {
	BOOL success = false;

	NSNumber *inputSize = [NSNumber numberWithInteger:input.length];

	if ([inputSize isEqualToNumber:SIZE]) {
		inputString = input;
		success = true;
	}
	
	return success;
}

- (BOOL)isNumber {
	BOOL success = false;
	
	NSCharacterSet *set = [NSCharacterSet decimalDigitCharacterSet];
	
	for (int i = 0; i < SIZE.intValue; i++) {
		NSString *tmp = [inputString substringWithRange:NSMakeRange(i, 1)];
	
		if ([set characterIsMember:tmp]) {
			[user addObject:tmp];
			
			success = true;
		} else {
			success = false;
			break;
		}
	}

	//cout << "Input must be a number!\n";
	
	 return success;
}

// Multiply user[] with DEFAULT_NUMS[]
- (void)multiply {
	for(int j=0; j<SIZE.integerValue; j++) {
		//results[j] = user[j] * DEFAULT_NUMS[j];
		
		NSNumber *n = [user objectAtIndex:j];
		NSNumber *n2 = [default_nums objectAtIndex:j];
		NSNumber *s = [NSNumber numberWithInteger:[n integerValue] * [n2 integerValue]];
		
		[results setObject:s atIndexedSubscript:j];
	}
}

// Sum altogether in results[]
// store it in total
- (void)sum {
	for(int i=0; i<SIZE.integerValue; i++) {
		//total += [results objectAtIndex:i];
		
		NSNumber *n = [NSNumber numberWithInteger:[total integerValue] + [[results objectAtIndex:i] integerValue]];
		total = n;
	}
}

// total divide by divNum to get the remainder
// and store it in FINAL_ANS
- (void)division {
	//FINAL_ANS = total % divNum;
	
	NSNumber *n = [NSNumber numberWithInteger:[total integerValue] % [divNum integerValue]];
	FINAL_ANS = n;
}

- (void)checkAlphabet {
	// Checks if the FINAL_ANS
	// equals the case number.
	
	for (int i = 10; i >= 0; i--) {
			// alphabetNo++;
		NSNumber *n = [NSNumber numberWithInteger:[alphabetNo integerValue] + 1];
		alphabetNo = n;
		
		if ([FINAL_ANS isEqualToNumber:[NSNumber numberWithInt:i]]) {
			if ([FINAL_ANS isEqualToNumber:[NSNumber numberWithInt:1]]) {
				alphabetNo = [NSNumber numberWithInt:10];
			} else if ([FINAL_ANS isEqualToNumber:[NSNumber numberWithInt:0]]) {
				alphabetNo = [NSNumber numberWithInt:9];
			}
			
			break; // break once match is found
		}
	}
	
	//cout << username.getName() << "The last alphabet on your IC is: " << alphabets[alphabetNo] << "\n" << endl;
}

@end
