//
//  Name.cpp
//  NRICAlphaGetta_v02
//
//  Created by Muhd Mirza on 16/9/15.
//
//

#include "Name.h"

Name::Name() {
	
}

void Name::setName() {
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
}

string Name::getName() {
	return name;
}