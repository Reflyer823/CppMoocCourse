/*
 * StaticMembers.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "Square.h"

int Square::numberOfObjects = 10;

int main() {
	Square s1;
	std::cout << s1.getArea() << " " << s1.getNumberOfObjects() << std::endl;
	Square s2{5.0};
	std::cout << s2.getArea() << " " << Square::getNumberOfObjects() << std::endl;
	return 0;
}
