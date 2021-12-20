/*
 * Unit05Test2.cpp
 *
 *  Created on: 2019年10月27日
 *      Author: Reflyer
 */

#include <iostream>

class C {
private:
	int x {0};
public:
	C(int x) : x{x} {
		std::cout << "C(" << x << ")" << std::endl;
	}
	C(double d) : C(static_cast<int> (d)) {
		std::cout << "C(" << d << ")" << std::endl;
	}
	C() : C(3.8) {
		std::cout << "C()" << std::endl;
	}
};

int main() {
	C c1;
	C c2 {2.2};
	C c3 {1};
	return 0;
}
