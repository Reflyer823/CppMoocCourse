/*
 * CopyCtor.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "Square.h"

int Square::numberOfObjects = 0;

int main() {
	Square s1{10.0};
	std::cout << "Square number: " << Square::getNumberOfObjects() << std::endl;
	Square s2{s1};
	std::cout << "Square number: " << Square::getNumberOfObjects() << std::endl;
	Square* s3 = new Square{s2};
	std::cout << "Square number: " << Square::getNumberOfObjects() << std::endl;
	std::cout << "s3 area: " << s3->getArea() << std::endl;
	delete s3;
	std::cout << "Square number: " << Square::getNumberOfObjects() << std::endl;
	return 0;
}
