/*
 * StackOfIntegers.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include "StackOfIntegers.h"
#include <string>
#include <iostream>

Stack::Stack() {
	for (auto& e : elements) {
		e = 0;
	}
}

bool Stack::empty() const {
	return (size == 0);
}

int Stack::peek() const {
	return elements[size - 1];
}

int Stack::push(int value) {
	elements[size++] = value;
	return value;
}

int Stack::pop() {
	return elements[--size];
}

int Stack::getSize() const {
	return size;
}

std::ostream& operator<<(std::ostream& s, const Stack& stack) {
	s.put('[');
	for (int i = 0; i < stack.size; i++) {
		s << (i == 0 ? "" : ", ") << stack.elements[i];
	}
	s.put(']');
	return s;
}
