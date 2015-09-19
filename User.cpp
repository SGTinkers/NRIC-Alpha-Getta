//
//  User.cpp
//  NRICAlphaGetta_v02
//
//  Created by Muhd Mirza on 16/9/15.
//
//

#include "User.h"

static int DEFAULT_NUMS[] = {2,7,6,5,4,3,2};
static char alphabets[] = {'A','B','C','D','E','F','G','H','I','J','Z'};
static int user[7], results[7];
static const int SIZE = 7;

User::User() {
	divNum = 11;
	total = 0;
	FINAL_ANS = 0;
}

/***************************************/

// Created this function to get every input
// by the user. And store it in user[]
bool User::getInput() {
	string input;
	
	cout << "Enter your NRIC(numbers only): ";
	cin >> input;
	
	if (input.length() != SIZE) {
		cout << "Input length must be 7!\n";
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
	
	cout << endl;
	
	return true;
}

/***************************************/

// Multiply user[] with DEFAULT_NUMS[]
void User::multiply() {
	for(int j=0; j<SIZE; j++) {
		results[j] = user[j] * DEFAULT_NUMS[j];
	}
}

/***************************************/

// This is to check if the mulitply() is working
// properly or not.
// This function is created for debugging purpose only;
void User::printMultiply() {
	for(int i=0; i<SIZE; i++) {
		cout << user[i] << " * " << DEFAULT_NUMS[i] << " = " << results[i] << "\n";
	}
	cout << endl;
}

/***************************************/

// Sum altogether in results[]
// store it in total
void User::sum() {
	for(int i=0; i<SIZE; i++) {
		total += results[i];
	}
}

/***************************************/

// This is to print out the total.
// This function is created for debugging purpose only;
void User::printSum() {
	cout << "The total is: " << total << endl;
	cout << endl;
}

/***************************************/

// total divide by divNum to get the remainder
// and store it in FINAL_ANS
void User::division() {
	FINAL_ANS = total % divNum;
}

/***************************************/

// This is to print out the FINAL_ANS
// This function is created for debugging purpose only;
void User::printFinalAns() {
	cout << "Remainder is: " << FINAL_ANS << endl;
	cout << endl;
}

void User::checkAlphabet() {
	// Checks if the FINAL_ANS
	// equals the case number.
	
	alphabetNo = -1; // start with -1 to allow easy flow with for loop
	
	for (int i = 10; i >= 0; i--) {
		alphabetNo++;
		
		if (FINAL_ANS == i) {
			if (FINAL_ANS == 1) {
				alphabetNo = 10;
			} else if (FINAL_ANS == 0) {
				alphabetNo = 9;
			}
			
			break; // break once match is found
		}
	}
	
	cout << username.getName() << "The last alphabet on your IC is: " << alphabets[alphabetNo] << "\n" << endl;
}