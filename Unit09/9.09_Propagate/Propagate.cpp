/*
 * Propagate.cpp
 *
 *  Created on: 2019年11月20日
 *      Author: Reflyer
 */

#include <iostream>

class Exception1 {};
class Exception2 {};
class Exception3 {};

void fun1();
void fun2();
void fun3();

int main() {
	try {
		fun1();
		std::cout << "main" << std::endl;
	} catch (Exception1& e) {
		std::cout << "catch fun1" << std::endl;
	}
	return 0;
}

void fun1() {
	try {
		fun2();
		std::cout << "fun1" << std::endl;
	} catch (Exception2& e) {
		std::cout << "catch fun2" << std::endl;
	}
}

void fun2() {
	try {
		fun3();
		std::cout << "fun2" << std::endl;
	} catch (Exception3& e) {
		std::cout << "catch fun3" << std::endl;
	}
}

void fun3() {
	throw Exception1();
}
