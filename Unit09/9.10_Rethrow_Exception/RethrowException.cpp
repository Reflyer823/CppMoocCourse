/*
 * RethrowException.cpp
 *
 *  Created on: 2019年11月23日
 *      Author: Reflyer
 */

#include <iostream>

void f() {
	try {
//		throw;
		throw std::logic_error("Throw in f()");
	} catch (const std::exception& e) {
		std::cout << "catched in f(): " << e.what() << std::endl;
		throw;
	}
}

int main() {
	try {
		f();
	} catch (const std::exception& e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
	return 0;
}
