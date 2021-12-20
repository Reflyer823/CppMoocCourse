/*
 * noexcept.cpp
 *
 *  Created on: 2019年11月18日
 *      Author: Reflyer
 */

#include <iostream>

void fun1() noexcept { throw 1; };
void fun2() {}
void fun3() noexcept(1) {}
void fun4() noexcept(1 - 1) {}

int main() {
	std::cout << std::boolalpha << "fun1() noexcept? " << noexcept(fun1()) <<
			"\nfun2() noexcept? " << noexcept(fun2()) <<
			"\nfun3() noexcept? " << noexcept(fun3()) <<
			"\nfun4() noexcept? " << noexcept(fun4()) << std::endl;
	std::cout << "Calling fun1(): " << std::endl;
	try {
		fun1();
	} catch (int e) {
		std::cout << "catch" << std::endl;
	}
	return 0;
}
