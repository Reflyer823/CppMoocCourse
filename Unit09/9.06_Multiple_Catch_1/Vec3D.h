/*
 * Vec3D.h
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#ifndef VEC3D_H_
#define VEC3D_H_

#include <cmath>
#include <limits>

#include "RangeException.h"
#include "ZeroException.h"

class Vec3D {
public:
	constexpr static int DIMENSION = 3;
private:
	double vec[DIMENSION] {1.0, 1.0, 1.0};
	static bool isSame(double x, double y);
public:
	Vec3D() = default;
	Vec3D(double x, double y, double z) {
		vec[0] = x;
		vec[1] = y;
		vec[2] = z;
	}
	double& operator [] (const int& index) {
		if (index >= 0 && index <= 2) {
			return vec[index];
		} else {
			throw RangeException(DIMENSION, index);
		}
	}
	Vec3D operator / (const double divisor) {
		if (isSame(divisor, 0.0))
			throw ZeroException();
		else {
			Vec3D v = (*this);
			for (auto& i : v.vec) {
				i /= divisor;
			}
			return v;
		}
	}
};

bool Vec3D::isSame(double x, double y) {
	return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
}

#endif /* VEC3D_H_ */
