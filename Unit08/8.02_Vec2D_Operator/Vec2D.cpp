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
	return std::string("(" + std::to_string(x_) + ", " + std::to_string(y_) + ")");
}

std::ostream& operator<<(std::ostream& stream, const Vec2D& v) {
	stream << '(' << v.x_ << ", " << v.y_ << ')';
	return stream;
}

std::istream& operator>>(std::istream& stream, Vec2D& v) {
	stream >> v.x_ >> v.y_;
	return stream;
}

Vec2D Vec2D::add(const Vec2D& v) const {
	return Vec2D(this->x_ + v.x_, this->y_ + v.y_);
}

Vec2D Vec2D::add(double val) const {
	return Vec2D(this->x_ + val, this->y_ + val);
}

Vec2D Vec2D::operator+(const Vec2D& v) const {
	return this->add(v);
}

Vec2D Vec2D::operator+(double val) const {
	return this->add(val);
}

Vec2D& Vec2D::operator+=(const Vec2D& v) {
	x_ += v.x_;
	y_ += v.y_;
	return (*this);
}

Vec2D Vec2D::subtract(const Vec2D& v) const {
	return Vec2D(this->x_ - v.x_, this->y_ - v.y_);
}

Vec2D Vec2D::subtract(double val) const {
	return Vec2D(this->x_ - val, this->y_ - val);
}

Vec2D Vec2D::operator-(const Vec2D& v) const {
	return this->subtract(v);
}

Vec2D Vec2D::operator-(double val) const {
	return this->subtract(val);
}

Vec2D& Vec2D::operator-=(const Vec2D& v) {
	x_ -= v.x_;
	y_ -= v.y_;
	return (*this);
}

double Vec2D::dot(const Vec2D& v) const {
	return (this->x_ * v.x_ + this->y_ * v.y_);
}

Vec2D Vec2D::multiply(double val) const {
	return Vec2D(this->x_ * val, this->y_ * val);
}

double Vec2D::operator*(const Vec2D& v) const {
	return this->dot(v);
}

Vec2D Vec2D::operator*(double val) const {
	return this->multiply(val);
}

Vec2D operator*(double val, const Vec2D& v) {
	return v.multiply(val);
}

Vec2D Vec2D::negative() const {
	return Vec2D(-x_, -y_);
}

Vec2D Vec2D::operator-() const {
	return Vec2D(-x_, -y_);
}

Vec2D& Vec2D::increase() {
	x_++; y_++;
	return (*this);
}

Vec2D& Vec2D::operator++() {
	x_++; y_++;
	return (*this);
}

Vec2D Vec2D::operator++(int dummy) {
	Vec2D temp = (*this);
	x_++; y_++;
	return temp;
}

Vec2D& Vec2D::decrease() {
	x_--; y_--;
	return (*this);
}

Vec2D& Vec2D::operator--() {
	x_--; y_--;
	return (*this);
}

Vec2D Vec2D::operator--(int dummy) {
	Vec2D temp = (*this);
	x_--; y_--;
	return temp;
}

double& Vec2D::at(int index) {
	if (0 == index)
		return this->x_;
	else if (1 == index)
		return this->y_;
	else
		throw std::out_of_range("at() only accepts 0 or 1 as parameter");
}

double& Vec2D::operator[](const int& index) {
	return at(index);
}

double& Vec2D::operator[](const double& index) {
	return at(static_cast<int>(index));
}

double Vec2D::magnitude() const {
	return sqrt(x_ * x_ + y_ * y_);
}

double Vec2D::operator*() const {
	return sqrt(x_ * x_ + y_ * y_);
}

Vec2D::operator double() const {
	return magnitude();
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
