/*
 * Main.cpp
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#include <iostream>
#include "Circle.h"
//#include "Circle.h"

int main() {
	Circle c1, c2{2.0};
	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;
}
