/*
 * BufferedIO.cpp
 *
 *  Created on: 2019年11月7日
 *      Author: Reflyer
 */

#include <iostream>

int main() {
	std::cin.sync_with_stdio(false);

	// 拿到cin对象的缓冲区指针
	auto p = std::cin.rdbuf();

	// 从键盘读入字符到缓冲区，保留所有字符在缓冲区
	auto x = std::cin.peek();
	std::cout << "x = " << x << std::endl;

	// 显示缓冲区中的字符数量
	std::cout << "There are " << p->in_avail() << " characters in the buffer." << std::endl;

	// 把缓冲区的字符都取出来并显示
	int i = 0;
	while (p->in_avail() > 0) {
		std::cout << ++i << " : " << std::cin.get() << std::endl;
	}

	return 0;
}
