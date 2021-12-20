/*
 * Multiple_Catch_1.cpp
 *
 *  Created on: 2019年11月18日
 *      Author: Reflyer
 */

#include <iostream>
#include "Vec3D.h"

int main() {
	Vec3D v {1.0, 2.0, 3.0};
	try {
		std::cout << (v / 0.0)[0] << std::endl;
	} catch (RangeException& e) {
		std::cout << "exception: " << e.what() << std::endl;
		std::cout << "dimension: " << e.getDimension() << std::endl;
		std::cout << "index: " << e.getIndex() << std::endl;
	} catch (ZeroException& e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
	return 0;
}
