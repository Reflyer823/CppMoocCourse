/*
 * RandomAccess.cpp
 *
 *  Created on: 2019年11月12日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	// 在文件中存2个 long long int 和 "Hello World" 字符串
	using std::ios;
	std::filesystem::path p{"test.dat"};
	// 此处若不指定trunc模式，当文件不存在时将无法打开
	std::fstream file{p, ios::out | ios::in | ios::trunc};
	if (!file) {
		std::cout << "Can't open file " << p << '.' << std::endl;
		std::exit(0);
	}

	auto x{12LL}, y{24LL};
	char str[]{"Hello World"};
	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(long long int));
	file.write(str, sizeof(str));

	// 从文件中读取Hello字符串
	char buf[10]{0};
	std::cout << "tellg(): " << file.tellg() << std::endl;
	std::cout << "tellp(): " << file.tellp() << std::endl;
	file.seekg(2 * sizeof(long long int));
	file.read(buf, 5);
	std::cout << buf << std::endl;
	std::cout << "tellg(): " << file.tellg() << std::endl;
	std::cout << "tellp(): " << file.tellp() << std::endl;

	file.close();
	return 0;
}
