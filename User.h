//
//  User.h
//  NRICAlphaGetta_v02
//
//  Created by Muhd Mirza on 16/9/15.
//
//

#ifndef __NRICAlphaGetta_v02__User__
#define __NRICAlphaGetta_v02__User__

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include "Name.h"

using namespace std;

class User {
	public:
		User();
	
		void getInput();
		void multiply();
		void printMultiply();
		void sum();
		void printSum();
		void division();
		void printFinalAns();
		void checkAlphabet();
	
private:
	int divNum, total, FINAL_ANS, alphabetNo;
	Name username;
};

#endif /* defined(__NRICAlphaGetta_v02__User__) */
