/*
 * Rectangle.h
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, Color color, bool filled);
	double getHeight() const;
	void setHeight(double height);
	double getWidth() const;
	void setWidth(double width);
	double getArea() const override;
	std::string toString();
};

#endif /* RECTANGLE_H_ */
