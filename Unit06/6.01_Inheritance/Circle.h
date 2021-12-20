/*
 * Circle.h
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#pragma once

#include "Shape.h"

class Circle : public Shape {
private:
	double radius;
public:
	Circle();
	Circle(double radius);
	Circle(double radius, Color color, bool filled);
	double getArea() const;
	double getRadius() const;
	void setRadius(double radius);
};
