/*
 * Circle.cpp
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#include "Circle.h"

Circle::Circle() : Circle{1.0} {}

Circle::Circle(double radius) : radius{radius} {}

Circle::Circle(double radius, Color color, bool filled) : Shape{color, filled},
		radius{radius} {}

double Circle::getArea() const {
	return 3.14 * radius * radius;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

std::string Circle::toString() {
	return "Circle: radius=" + std::to_string(radius) + ", " +
			colorToString() + ", " + filledToString();
}
