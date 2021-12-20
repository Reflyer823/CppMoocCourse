/*
 * MemberPointer.cpp
 *
 *  Created on: 2019年11月14日
 *      Author: Reflyer
 */

#include <iostream>

class C {
public:
	int x;
	int y;
	C(int x_, int y_) {
		x = x_;
		y = y_;
	}
	int fun() {
		std::cout << "fun(): x = " << x << ", y = " << y << std::endl;
		return 0;
	}
};

int main() {
	C c1{2, 6}, c2{3, 9};
	int C::*p = &C::x;
	std::cout << c1.*p << std::endl;
	std::cout << c2.*p << std::endl;
	p = &C::y;
	std::cout << c1.*p << std::endl;
	std::cout << c2.*p << std::endl;
	int (C::*fp)() = &C::fun;
	(c1.*fp)();
	(c2.*fp)();
	return 0;
}
