/*
 * GenericAdd.cpp
 *
 *  Created on: 2019年11月23日
 *      Author: Reflyer
 */

#include <iostream>

//template <typename T>
//T add(T x, T y) {
//	return (x + y);
//}

template <typename T, typename S>
auto add(T x, S y) {
	return (x + y);
}

int main() {
	std::cout << add(2, 3.2) << std::endl;
	return 0;
}
