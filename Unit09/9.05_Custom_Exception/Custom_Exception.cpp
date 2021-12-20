/*
 * Custom_Exception.cpp
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#include <iostream>
#include "Vec3D.h"

int main() {
	Vec3D v {1.0, 2.0, 3.0};
	try {
		std::cout << "v[2] = " << v[2] << std::endl;
		std::cout << "v[5] = " << v[5] << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception: " << e.what() << std::endl;
		if (typeid(e) == typeid(RangeException)) {
			auto& re = dynamic_cast<RangeException&>(e);
			std::cout << "dimension: " << re.getDimension() << std::endl;
			std::cout << "index: " << re.getIndex() << std::endl;
		}
	}
	return 0;
}
