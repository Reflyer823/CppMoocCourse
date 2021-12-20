/*
 * Shape.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include "Shape.h"

std::array<std::string, 7> Shape::colorName {"black", "white", "red", "green", "blue",
			"yellow", "grey"};

Shape::Shape() = default;

Shape::Shape(Color color, bool filled) : color{color}, filled{filled} {}

Color Shape::getColor() const {
	return color;
}

void Shape::setColor(Color color) {
	this->color = color;
}

bool Shape::isFilled() const {
	return filled;
}

void Shape::setFilled(bool filled) {
	this->filled = filled;
}

std::string Shape::colorToString() {
	return colorName[static_cast<int>(color)];
}

std::string Shape::filledToString() {
	return (filled ? "filled" : "not filled");
}

std::string Shape::toString() {
	return "Shape: " + colorToString() + ", " + filledToString();
}
