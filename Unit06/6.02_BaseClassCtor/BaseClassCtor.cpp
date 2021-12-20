/*
 * BaseClassCtor.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include <iostream>

class B {
public:
	B() { std::cout << "B()" << std::endl; }
	B(int i) { std::cout << "B(" << i << ")" << std::endl; }
	B(char c) { std::cout << "B(" << c << ")" << std::endl; }
};

class E {
public:
	E() { std::cout << "E()" << std::endl; }
};

class D : public B {
private:
	double x{0.0};
	E e1, e2;
public:
	using B::B;
	D(double x) : B{static_cast<int>(x)}, x{x}, e1{}, e2{} {
		std::cout << "D(" << x << ")" << std::endl;
	}
};

int main() {
	B b;
	D d1;
	D d2{3.3};
	return 0;
}
