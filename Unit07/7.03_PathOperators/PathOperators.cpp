/*
 * PathOperators.cpp
 *
 *  Created on: 2019年11月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
	// append和/=
	fs::path p1{"C:\\temp"};
	p1.append("Users");
	p1 /= "Reflyer";
	std::cout << p1 << std::endl;

	// concat和+=
	fs::path p2{"C:\\temp"};
	p2.concat("Users");
	p2 += "Reflyer";
	std::cout << p2 << std::endl;

	// 用运算符 / 拼凑一个新路径
	fs::path p3{""};
	p3 = p3 / "C:\\temp" / "Users" / "Reflyer";
	std::cout << p3 << std::endl;

	return 0;
}
