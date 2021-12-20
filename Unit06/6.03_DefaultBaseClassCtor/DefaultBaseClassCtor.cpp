/*
 * DefaultBaseClassCtor.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include <iostream>

class A {
public:
	A() { std::cout << "A()" << std::endl; }
	A(int i) { std::cout << "A(" << i << ")" << std::endl; }
};

class B : public A {
public:
	B() { std::cout << "B()" << std::endl; }
	B(int i) : A{i} { std::cout << "B(" << i << ")" << std::endl; }
};

//class A {};
//class B : public A {
//public:
//	using A::A;
//	B(int i) {}
//};

int main() {
	A a1;
	A a2{2};
	B b1;
	B b2{3};
	return 0;
}
