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
static int SIZE = 7;

User::User() {
	divNum = 11;
	total = 0;
	FINAL_ANS = 0;
}

/***************************************/

// Created this function to get every input
// by the user. And store it in user[]
void User::getInput() {
	string input;
	
	cout << "Enter your NRIC(numbers only): ";
	cin >> input;
	
	if (input.length() != SIZE) {
		cout << "Invalid input! Length must be 7!\n";
		getInput();
	} else {
		string tmpArr[7];
	
		for (int i = 0; i < SIZE; i++) {
			tmpArr[i] = input[i];
			
			int tmp = atoi(tmpArr[i].c_str());
			
			user[i] = tmp;
		}
	}

	cout << endl;
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
	for(int i=0; i<7; i++) {
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
	switch (FINAL_ANS) {
		case 1:
			alphabetNo = 10;
			break;
		case 0:
			alphabetNo = 9;
			break;
		case 2:
			alphabetNo = 8;
			break;
		case 3:
			alphabetNo = 7;
			break;
		case 4:
			alphabetNo = 6;
			break;
		case 5:
			alphabetNo = 5;
			break;
		case 6:
			alphabetNo = 4;
			break;
		case 7:
			alphabetNo = 3;
			break;
		case 8:
			alphabetNo = 2;
			break;
		case 9:
			alphabetNo = 1;
			break;
		case 10:
			alphabetNo = 0;
			break;
		default:
			cout << "Sorry, something went wrong. The program is terminated!\n" << endl;
			break;
	}
	
	cout << username.getName() << ", the last alphabet on your IC is: " << alphabets[alphabetNo] << "\n" << endl;
}