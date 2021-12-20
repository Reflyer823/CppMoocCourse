/*
 * Main.cpp
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#include <iostream>
#include "Circle.h"

int main() {
	Circle ca1[]{1.0, 2.0, 3.0};
	Circle ca2[] = {Circle{4.0}, Circle{5.0}, Circle{6.0}};

	ca1[2].setRadius(2.0);
	ca2[0].setRadius(5.0);

	auto ta1{0.0}, ta2{0.0};

	for(int i = 0; i < 3; i++) {
		std::cout << ca1[i].getArea() << std::endl;
		ta1 += ca1[i].getArea();
	}
	std::cout << std::endl;
	for(auto x: ca2) {
		std::cout << x.getArea() << std::endl;
		ta2 += x.getArea();
	}
	std::cout << std::endl;
	std::cout << "Total Area1: " << ta1 << std::endl;
	std::cout << "Total Area2: " << ta2 << std::endl;

	return 0;
}
