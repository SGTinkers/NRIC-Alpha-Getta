//
//  Name.h
//  NRICAlphaGetta_v02
//
//  Created by Muhd Mirza on 16/9/15.
//
//

#ifndef __NRICAlphaGetta_v02__Name__
#define __NRICAlphaGetta_v02__Name__

#include <stdio.h>
#include <iostream>

using namespace std;

class Name {
	public:
		Name();
	
		void setName();
		string getName();
	
	private:
		string name;
};

#endif /* defined(__NRICAlphaGetta_v02__Name__) */
