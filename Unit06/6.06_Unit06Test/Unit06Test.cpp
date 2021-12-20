/*
 * Unit06Test.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include <iostream>

class A {
public:
	void foo() { std::cout << "A::foo()" << std::endl; }
};

class B : public A {
public:
	using A::foo;
	void foo() { std::cout << "B::foo()" << std::endl; }
};

int main() {
	A a;
	B b;
	a.foo();
	b.foo();
	return 0;
}
