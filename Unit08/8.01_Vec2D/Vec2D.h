/*
 * Vec2D.h
 *
 *  Created on: 2019年11月12日
 *      Author: Reflyer
 */

#ifndef VEC2D_H_
#define VEC2D_H_

#include <string>
#include <stdexcept>
#include <cmath>

class Vec2D {
private:
	double x_, y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
	std::string toString() const;
	Vec2D add(const Vec2D& v) const;
	Vec2D add(double val) const;
	Vec2D subtract(const Vec2D& v) const;
	Vec2D subtract(double val) const;
	double dot(const Vec2D& v) const;
	Vec2D multiply(double val) const;
	Vec2D negative() const;
	Vec2D& increase();
	Vec2D& decrease();
	double& at(int index);
	double magnitude() const;
	double direction() const;
	int compareTo(const Vec2D& v) const;
};

#endif /* VEC2D_H_ */
