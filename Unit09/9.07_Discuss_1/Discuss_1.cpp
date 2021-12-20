/*
 * Discuss_1.cpp
 *
 *  Created on: 2019年11月18日
 *      Author: Reflyer
 */

#include <iostream>

class A {};
class B : public A {};

int main() {
	try {
		throw B();
	} catch (A a) {
		std::cout << "A exception" << std::endl;
	}
	return 0;
}
