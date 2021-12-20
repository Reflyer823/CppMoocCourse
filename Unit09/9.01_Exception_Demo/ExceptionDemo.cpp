/*
 * ExceptionDemo.cpp
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#include <iostream>

int main() {
	int x{0}, y{0};
	std::cin >> x >> y;
	try {
		if (y == 0) throw y;
		std::cout << x / y << std::endl;
	} catch(int e) {
		std::cout << "the second number is " << e << '.' << std::endl;
	}
	return 0;
}
