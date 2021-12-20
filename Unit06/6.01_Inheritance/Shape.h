/*
 * shape.h
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <array>

enum class Color {
	black,
	white,
	red,
	green,
	blue,
	yellow,
	grey
};

class Shape {
private:
	Color color{Color::black};
	bool filled{false};
public:
	Shape() = default;

	Shape(Color color, bool filled) : color{color}, filled{filled} {}

	Color getColor() const {
		return color;
	}

	void setColor(Color color) {
		this->color = color;
	}

	bool isFilled() const {
		return filled;
	}

	void setFilled(bool filled) {
		this->filled = filled;
	}

	std::string toString() {
		std::array<std::string, 7> colorName {"black", "white", "red", "green", "blue",
			"yellow", "grey"};
		return "Shape: " + colorName[static_cast<int>(color)] + " " +
				(filled ? "filled" : "not filled");
	}
};

#endif /* SHAPE_H_ */
