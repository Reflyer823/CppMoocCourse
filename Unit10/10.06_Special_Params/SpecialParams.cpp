/*
 * SpecialParams.cpp
 *
 *  Created on: 2019年12月1日
 *      Author: Reflyer
 */

#include <iostream>
#include "GenericStack.h"

int main() {
	Stack<> s;
	std::string str{"Hello, World!"};
	for (auto c : str) {
		s.push(c);
	}
	while (!s.empty()) {
		std::cout << s.pop();
	}
	return 0;
}
