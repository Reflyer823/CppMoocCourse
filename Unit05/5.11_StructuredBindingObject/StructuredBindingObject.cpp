/*
 * StructuredBindingObject.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>

struct S {
	double d {1.0};
	int i1 {23};
};

class C {
public:
	int a {47};
	char c[3] {'a', 'b', '\0'};
};

int main() {
	S s;
	C c;
	auto [sd, si1] {s};
	auto& [ca, cc] {c};
	std::cout << "s.d = " << sd << ", s.i1 = " << si1 << std::endl;
	std::cout << "c.a = " << ca << ", c.c = " << cc << std::endl;
	return 0;
}
