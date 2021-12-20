/*
 * BinaryIO.cpp
 *
 *  Created on: 2019年11月10日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	using std::ios;

	// 创建二进制输出流
	std::filesystem::path p{"array.dat"};
	std::fstream fs{p, ios::out | ios::binary};

	// 判断流是否成功打开
	if (!fs) {
		std::cout << "Can't open file " << p << '.' << std::endl;
		std::exit(0);
	}

	// 将一个整形数组的内容输出到二进制文件中
	std::array arr{21, 42, 63};
	fs.write(reinterpret_cast<char*>(&arr[0]), arr.size() * sizeof(arr[0]));
	fs.close();

	// 以读取模式重新打开二进制文件，或者将文件光标定位到文件头
	fs.open(p, ios::in);

	// 从二进制流中读入一个整数并显示到屏幕上
	int x = 0;
	fs.read(reinterpret_cast<char*>(&x), sizeof(x));
	std::cout << "x = " << x << std::endl;

	return 0;
}
