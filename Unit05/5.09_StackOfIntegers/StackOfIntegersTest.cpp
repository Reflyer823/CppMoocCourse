/*
 * StackOfIntegersTest.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "StackOfIntegers.h"

int main() {
	Stack s;
	for (int i = 1; i <= 5; i++) {
		s.push(i * 10);
	}
	std::cout << s << std::endl;
	std::cout << "Stack size: " << s.getSize() << std::endl;
	std::cout << "Stack peek: " << s.peek() << std::endl;
	while (!s.empty()) {
		std::cout << "pop: " << s.pop() << std::endl;
		std::cout << s << std::endl;
	}
	std::cout << "Stack empty: " << s.empty() << std::endl;
	return 0;
}
