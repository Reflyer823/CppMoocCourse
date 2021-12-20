/*
 * Rectangle.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : width{width}, height{height} {}

Rectangle::Rectangle(double width, double height, Color color, bool filled) :
	Shape{color, filled}, width{width}, height{height} {}

Rectangle::Rectangle() : Rectangle(1.0, 1.0) {}

double Rectangle::getHeight() const {
	return height;
}

void Rectangle::setHeight(double height) {
	this->height = height;
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::getArea() const {
	return (width * height);
}
