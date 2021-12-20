/*
 * Vec2D.h
 *
 *  Created on: 2019年11月12日
 *      Author: Reflyer
 */

#ifndef VEC2D_H_
#define VEC2D_H_

#include <iostream>
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
	friend std::ostream& operator<<(std::ostream& stream, const Vec2D& v);
	friend std::istream& operator>>(std::istream& stream, Vec2D& v);
	Vec2D add(const Vec2D& v) const;
	Vec2D add(double val) const;
	Vec2D operator+(const Vec2D& v) const;
	Vec2D operator+(double val) const;
	Vec2D& operator+=(const Vec2D& v);
	Vec2D subtract(const Vec2D& v) const;
	Vec2D subtract(double val) const;
	Vec2D operator-(const Vec2D& v) const;
	Vec2D operator-(double val) const;
	Vec2D& operator-=(const Vec2D& v);
	double dot(const Vec2D& v) const;
	Vec2D multiply(double val) const;
	double operator*(const Vec2D& v) const;
	Vec2D operator*(double val) const;
	friend Vec2D operator*(double val, const Vec2D& v);
	Vec2D negative() const;
	Vec2D operator-() const;
	Vec2D& increase();
	Vec2D& operator++();
	Vec2D operator++(int dummy);
	Vec2D& decrease();
	Vec2D& operator--();
	Vec2D operator--(int dummy);
	double& at(int index);
	double& operator[](const int& index);
	double& operator[](const double& index);
	double magnitude() const;
	double operator*() const;
	operator double() const;
	double direction() const;
	int compareTo(const Vec2D& v) const;
};

#endif /* VEC2D_H_ */
