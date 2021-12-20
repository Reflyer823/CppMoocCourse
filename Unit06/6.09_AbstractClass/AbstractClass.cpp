/*
 * AbstractClass.cpp
 *
 *  Created on: 2019年11月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <typeinfo>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void printShape(Shape& s) {
	std::cout << s.toString() << std::endl;
	std::cout << "Type name: " << typeid(s).name() << std::endl;
//	if (typeid(s) == typeid(Circle)) {
//		Circle& c = dynamic_cast<Circle&>(s);
//		std::cout << "radius = " << c.getRadius() << std::endl;
//	}
//	if (typeid(s) == typeid(Rectangle)) {
//		Rectangle& r = dynamic_cast<Rectangle&>(s);
//		std::cout << "width = " << r.getWidth() << std::endl;
//		std::cout << "height = " << r.getHeight() << std::endl;
//	}
	if (Circle* c = dynamic_cast<Circle*>(&s); c != nullptr) {
		std::cout << "radius = " << c->getRadius() << std::endl;
	}
	if (Rectangle* r = dynamic_cast<Rectangle*>(&s); r != nullptr) {
		std::cout << "width = " << r->getWidth() << std::endl;
		std::cout << "height = " << r->getHeight() << std::endl;
	}
}

int main() {
//	Shape s{Color::green, true};
	Circle c{2.0, Color::red, false};
	Rectangle r{2.0, 4.0, Color::yellow, true};

	std::cout << c.toString() << std::endl;
	std::cout << r.toString() << std::endl;
	std::cout << "c area = " << c.getArea() << std::endl;
	std::cout << "r area = " << r.getArea() << std::endl;

//	Shape *pc{&c}, *pr{&r};
//
//	std::cout << pc->toString() << std::endl;
//	std::cout << pr->toString() << std::endl;
//	std::cout << "c area = " << pc->getArea() << std::endl;
//	std::cout << "r area = " << pr->getArea() << std::endl;
//
//	Shape &rc{c}, &rr{r};
//
//	std::cout << rc.toString() << std::endl;
//	std::cout << rr.toString() << std::endl;
//	std::cout << "c area = " << rc.getArea() << std::endl;
//	std::cout << "r area = " << rr.getArea() << std::endl;

	printShape(c);
	printShape(r);

	return 0;
}
