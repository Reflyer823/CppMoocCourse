/*
 * RedefineFunctions.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Shape s{Color::green, true};
	Circle c{2.0, Color::red, false};
	Rectangle r{2.0, 4.0, Color::yellow, true};

	std::cout << s.toString() << std::endl;
	std::cout << c.toString() << std::endl;
	std::cout << r.toString() << std::endl;

	std::cout << "c area = " << c.getArea() << std::endl;
	std::cout << "r area = " << r.getArea() << std::endl;

	return 0;
}
