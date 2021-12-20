/*
 * TestGenericSort.cpp
 *
 *  Created on: 2019年11月24日
 *      Author: Reflyer
 */

#include <iostream>
#include "GenericSort.h"

int main() {
	std::array<double, 8> x {3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0};

	for (auto i : x) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	SelectionSort(x);

	for (auto i : x) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	double y[] {3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0};

	for (auto i : y) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	SelectionSort(y, sizeof(y) / sizeof(y[0]));

	for (auto i : y) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
	return 0;
}
