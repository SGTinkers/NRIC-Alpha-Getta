//
//  User.h
//  NRICApp
//
//  Created by Muhd Mirza on 19/9/15.
//  Copyright © 2015 Muhd Mirza. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

@property NSArray *alphabets;
@property NSNumber *alphabetNo;

- (BOOL)lengthIsCorrect: (NSString*)input;
- (BOOL)isNumber;
- (void)multiply;
- (void)sum;
- (void)division;
- (void)checkAlphabet;

@end
