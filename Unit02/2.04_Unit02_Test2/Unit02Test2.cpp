/*
 * Unit02Test2.cpp
 *
 *  Created on: 2019年10月28日
 *      Author: Reflyer
 */

#include <iostream>

namespace NS1 {
	const int x {1};
}

namespace NS2 {
	const int x {2};
}

int main() {
	std::cout << NS1::x << std::endl;
	std::cout << NS2::x << std::endl;
	return 0;
}
