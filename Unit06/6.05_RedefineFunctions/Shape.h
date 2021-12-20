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
	static std::array<std::string, 7> colorName;
public:
	Shape();
	Shape(Color color, bool filled);
	Color getColor() const;
	void setColor(Color color);
	bool isFilled() const;
	void setFilled(bool filled);
	std::string colorToString();
	std::string filledToString();
	std::string toString();
};

#endif /* SHAPE_H_ */
