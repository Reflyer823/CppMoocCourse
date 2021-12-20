/*
 * IteratorOperatorDemo.cpp
 *
 *  Created on: 2019年12月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	auto p = v.begin();
	for (; p != v.end(); p++) {
		std::cout << *p << ' ';
	}
	std::cout << std::endl;

	std::cout << *(--p) << std::endl;
	std::cout << *(p - 3) << std::endl;
	std::cout << p[-3] << std::endl;
	*p = 1234;
	std::cout << *p << std::endl;

	for (p = v.begin(); p != v.end(); p++) {
		std::cout << *p << ' ';
	}

	return 0;
}
