/*
 * Circle.h
 *
 *  Created on: 2019年10月20日
 *      Author: Reflyer
 */

#pragma once

class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);
};
