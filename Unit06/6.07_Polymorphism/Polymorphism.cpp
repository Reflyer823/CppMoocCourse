/*
 * Polymorphism.cpp
 *
 *  Created on: 2019年11月2日
 *      Author: Reflyer
 */

#include <iostream>

class A {
public:
	virtual std::string toString() { return "A"; }
};

class B : public A {
public:
	std::string toString() override { return "B"; }
};

class C : public B {
public:
	std::string toString() override { return "C"; }
};

void print(A* p) {
	std::cout << p->toString() << std::endl;
}

void print(A& o) {
	std::cout << o.toString() << std::endl;
}

//void print(B& o) {
//	std::cout << o.toString() << std::endl;
//}
//
//void print(C& o) {
//	std::cout << o.toString() << std::endl;
//}

int main() {
	A a; B b; C c;

	print(&a);
	print(&b);
	print(&c);

	print(a);
	print(b);
	print(c);

	return 0;
}
