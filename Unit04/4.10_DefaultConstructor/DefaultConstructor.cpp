/*
 * DefaultConstructor.cpp
 *
 *  Created on: 2019年10月21日
 *      Author: Reflyer
 */

#include <iostream>

class Circle {
private:
	double radius;
public:
	Circle(double radius) : radius{radius} {
		std::cout << "Circle Constructor : " << this->radius << std::endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

class Square {
private:
	double side;
public:
	Square(double side) : side{side} {}
	double getArea() {
		return side * side;
	}
};

class Combo {
public:
	Circle c{1.0};
	Square s{1.0};
	Combo() = default;
	Combo(double radius, double side) :
		c{radius}, s{side} {}
	Combo(double radius) {
		c = Circle{radius};
	}
};

int main() {
	Combo combo1;
	std::cout << combo1.c.getArea() << std::endl;
	std::cout << combo1.s.getArea() << std::endl;
	Combo combo2{2.0, 2.0};
	std::cout << combo2.c.getArea() << std::endl;
	std::cout << combo2.s.getArea() << std::endl;
	Combo combo3{2.0};
	std::cout << combo3.c.getArea() << std::endl;
	std::cout << combo3.s.getArea() << std::endl;
	return 0;
}
