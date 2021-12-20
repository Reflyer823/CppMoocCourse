/*
 * Main.cpp
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#include <iostream>
#include "Circle.h"

int main() {
	auto c1 = new Circle{};
	Circle c3{2.0};
	auto c2 = &c3;
	std::cout << (*c1).getArea() << std::endl;
	std::cout << c2->getArea() << std::endl;

	auto c4 = new Circle[3] {1.0, 2.0, 3.0};
	std::cout << std::endl;
	for(int i = 0; i < 3; i++) {
		std::cout << c4[i].getArea() << std::endl;
	}

	delete c1;
	delete [] c4;
	return 0;
}
