/*
 * VectorSort.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::cin.sync_with_stdio(false);
	int val;
	std::vector<int> v;
//	while (std::cin.get() != '\n') {
//		std::cin.unget();
//		std::cin >> val;
//		v.push_back(val);
//	}
	while (std::cin >> val) {
		v.push_back(val);
	}
	std::sort(v.begin(), v.end());
	for (auto e : v) {
		std::cout << e << std::endl;
	}
	return 0;
}
