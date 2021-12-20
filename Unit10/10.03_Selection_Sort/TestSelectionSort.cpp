/*
 * TestSelectionSort.cpp
 *
 *  Created on: 2019年11月24日
 *      Author: Reflyer
 */

#include <iostream>
#include "SelectionSort.h"

int main() {
//	double x[] {3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0};
	std::array<double, 8> x {3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0};

	for (auto i : x) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

//	SelectionSort(x, sizeof(x) / sizeof(x[0]));
	SelectionSort(x);

	for (auto i : x) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
	return 0;
}
