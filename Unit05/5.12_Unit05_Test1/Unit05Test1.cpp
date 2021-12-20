/*
 * Unit05Test1.cpp
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
	C() : C(42) {
		std::cout << "C()" << std::endl;
	}
};

int main() {
	C c1;
	C c2 {18};
	return 0;
}
