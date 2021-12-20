/*
 * Out_Of_Range.cpp
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>

int main() {
	std::vector<char> v{'a', 'b', 'c', 'd', 'e'};
	try {
		for (int i = 0; i <= 5; i++) {
			std::cout << v[i] << v.at(i) << std::endl;
		}
	} catch (std::out_of_range& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
