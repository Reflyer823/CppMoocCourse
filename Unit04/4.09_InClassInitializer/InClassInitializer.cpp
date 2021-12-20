/*
 * InClassInitializer.cpp
 *
 *  Created on: 2019年10月21日
 *      Author: Reflyer
 */

#include <iostream>

class X {
	int a = 1;
	int b = {2};
	int c{3};
//	auto d = 3.2;   // error: non-static data member declared with placeholder 'auto'
	static constexpr auto d = 3.2;

	std::string s1{'a', 'b', 'c'};
	std::string s2{"Hello"};
	std::string s3 = "World";

	int arr1[4]{1, 2, 3};
	int arr2[4] = {1, 2, 3};
};

int main() {
	return 0;
}
