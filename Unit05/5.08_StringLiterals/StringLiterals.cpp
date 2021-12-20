/*
 * StringLiterals.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>

int main() {
	using namespace std::string_literals;
	std::string s1 = "abc\0\0def";
	std::string s2 = "abc\0\0def"s;
	const char* s3 = R"(Hello
World)";
	const char* s4 = R"NoUse(Hello\
World)NoUse";
	std::cout << "s1: " << s1.size() << " \"" << s1 << "\"" << std::endl;
	std::cout << "s2: " << s2.size() << " \"" << s2 << "\"" << std::endl;
	std::cout << s3 << std::endl;
	std::cout << s4 << std::endl;
	return 0;
}
