/*
 * GetlineDemo.cpp
 *
 *  Created on: 2019年11月10日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>
#include <fstream>
#include <array>

int main() {
	// 打开文件
	std::filesystem::path p{"greatwall.txt"};
	std::ifstream input{p};
	if (!input) {
		std::cout << "Can't open file " << p << '.' << std::endl;
		std::exit(0);
	}

	// istream::getline函数
	constexpr int SIZE = 1024;
	std::array<char, SIZE> buf;
	while (!input.eof()) {
		input.getline(&buf[0], SIZE, '#');
		std::cout << &buf[0] << std::endl;
	}

	// std::getline函数
	input.close();
	input.open(p);
	std::cout << "========================" << std::endl;
	std::string name;
	while (!input.eof()) {
		std::getline(input, name, '#');
		std::cout << name << std::endl;
	}
	input.close();

	return 0;
}
