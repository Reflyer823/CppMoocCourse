/*
 * AutoParaTest.cpp
 *
 *  Created on: 2019年12月10日
 *      Author: Reflyer
 */

#include <iostream>

void print(auto x) {
	std::cout << x << std::endl;
}

int main() {
	print(2);
	print(5.8);
	return 0;
}
