/*
 * ObjectAsArgument.cpp
 *
 *  Created on: 2019年10月21日
 *      Author: Reflyer
 */

#include <iostream>
#include "Circle.h"

void print(Circle c) {
	std::cout << c.getArea() << std::endl;
}

void print_(Circle& c) {
	std::cout << c.getArea() << std::endl;
}

void print(Circle* c) {
	std::cout << c->getArea() << std::endl;
}

int main() {
	Circle ca[]{1.0, 2.0, 3.0};
	print(ca);
	print(ca[1]);
	print_(ca[2]);
	return 0;
}
