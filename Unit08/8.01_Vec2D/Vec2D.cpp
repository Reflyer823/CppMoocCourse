/*
 * Vec2D.cpp
 *
 *  Created on: 2019年11月12日
 *      Author: Reflyer
 */

#include "Vec2D.h"

Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;
}

Vec2D::~Vec2D() {
}

std::string Vec2D::toString() const {
	return std::string("(" + std::to_string(this->x_) + ", " + std::to_string(this->y_) + ")");
}

Vec2D Vec2D::add(const Vec2D& v) const {
	return Vec2D(this->x_ + v.x_, this->y_ + v.y_);
}

Vec2D Vec2D::add(double val) const {
	return Vec2D(this->x_ + val, this->y_ + val);
}

Vec2D Vec2D::subtract(const Vec2D& v) const {
	return Vec2D(this->x_ - v.x_, this->y_ - v.y_);
}

Vec2D Vec2D::subtract(double val) const {
	return Vec2D(this->x_ - val, this->y_ - val);
}

double Vec2D::dot(const Vec2D& v) const {
	return (this->x_ * v.x_ + this->y_ * v.y_);
}

Vec2D Vec2D::multiply(double val) const {
	return Vec2D(this->x_ * val, this->y_ * val);
}

Vec2D Vec2D::negative() const {
	return Vec2D(-(this->x_), -(this->y_));
}

Vec2D& Vec2D::increase() {
	this->x_++; this->y_++;
	return (*this);
}

Vec2D& Vec2D::decrease() {
	this->x_--; this->y_--;
	return (*this);
}

double& Vec2D::at(int index) {
	if (0 == index)
		return this->x_;
	else if (1 == index)
		return this->y_;
	else
		throw std::out_of_range("at() only accepts 0 or 1 as parameter");
}

double Vec2D::magnitude() const {
	return sqrt(this->x_ * this->x_ + this->y_ * this->y_);
}

double Vec2D::direction() const {
	return atan(this->y_ / this->x_);
}

int Vec2D::compareTo(const Vec2D& v) const {
	double m1 = this->magnitude();
	double m2 = v.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 > m2 ? 1 : -1);
}
