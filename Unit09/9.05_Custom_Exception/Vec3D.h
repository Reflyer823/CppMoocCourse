/*
 * Vec3D.h
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#ifndef VEC3D_H_
#define VEC3D_H_

#include "RangeException.h"

class Vec3D {
private:
	double vec[3] {1.0, 1.0, 1.0};
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
			throw RangeException(3, index);
		}
	}
};

#endif /* VEC3D_H_ */
