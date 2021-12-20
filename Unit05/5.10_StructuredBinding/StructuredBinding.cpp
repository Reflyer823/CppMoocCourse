/*
 * StructuredBinding.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include <array>

int main() {
	int arr1[] {1, 2, 3};
	auto [e1, e2, e3] = arr1;
	auto& [f1, f2, f3] {arr1};
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;
	f1 = 10;
	std::cout << f1 << " " << f2 << " " << f3 << std::endl;
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;
	std::cout << arr1[0] << " " << arr1[1] << " " << arr1[2] << std::endl;
	std::cout << "=============================" << std::endl;
	std::array<int, 3> arr2 {11, 12, 13};
	auto [g1, g2, g3] = arr2;
	auto& [h1, h2, h3] {arr2};
	std::cout << g1 << " " << g2 << " " << g3 << std::endl;
	h1 = 40;
	std::cout << h1 << " " << h2 << " " << h3 << std::endl;
	std::cout << g1 << " " << g2 << " " << g3 << std::endl;
	std::cout << arr2[0] << " " << arr2[1] << " " << arr2[2] << std::endl;
	return 0;
}

