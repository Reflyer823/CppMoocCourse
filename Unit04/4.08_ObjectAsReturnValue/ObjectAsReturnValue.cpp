/*
 * ObjectAsReturnValue.cpp
 *
 *  Created on: 2019年10月21日
 *      Author: Reflyer
 */


#include <iostream>
#include "Circle.h"

int main() {
	Circle c{1.0};
	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;
	return 0;
}
