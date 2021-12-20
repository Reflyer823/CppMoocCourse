/*
 * FileOpenMode.cpp
 *
 *  Created on: 2019年11月10日
 *      Author: Reflyer
 */

#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
	using std::ios;
	std::filesystem::path p1{"cities1.txt"}, p2{"cities2.txt"};
	std::ofstream out1{p1, ios::out | ios::app}, out2{p2, ios::out};

	char c;
	while (!std::cin.get(c).eof()) {
		out1.put(c);
		out2.put(c);
	}
	out1.close();
	out2.close();

	std::fstream in1{p1, ios::in}, in2{p2, ios::in | ios::ate};
	std::cout << p1 << ':' << std::endl;
	while (!in1.get(c).eof()) {
		std::cout << c;
	}
	std::cout << p2 << ':' << std::endl;
	while (!in2.get(c).eof()) {
		std::cout << c;
	}
	in1.close();
	in2.close();

	return 0;
}
