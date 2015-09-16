// Title: NRIC(Alpha)Getta
// Version: 0.2.1 Alpha Build
// Author: mofodox
// Date: 22 June 2013

#include <iostream>
#include <string>

#include "Heading.h"
#include "User.h"

using namespace std;

// main
int main (int argc, char * const argv[]) {
	Heading printHeading;
	printHeading.getHeading();
	
	// set the username to name
	Name username;
	username.setName();
	
	cout << "Hello " << username.getName() << ", please provide your NRIC NUM and follow the instructions given.\n" << endl;
	
	User user;
	
	user.getInput();
	user.multiply();
	user.printMultiply(); // this is for debugging purpose
	
	user.sum();
	user.printSum(); // this is for debugging purpose
	
	user.division();
	user.printFinalAns(); // this is for debugging purpose
	
	user.checkAlphabet();
	
    return 0;
}
