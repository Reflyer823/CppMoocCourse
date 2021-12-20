/*
 * Bad_Alloc.cpp
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#include <iostream>

int main() {
	try {
		for (int i = 1; i <= 10000; i++) {
			auto* p = new long long int[700000];
			std::cout << i << " array" << std::endl;
		}
	} catch (std::bad_alloc& e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
	return 0;
}
