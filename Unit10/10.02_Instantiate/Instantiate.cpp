/*
 * Instantiate.cpp
 *
 *  Created on: 2019年11月24日
 *      Author: Reflyer
 */

#include <iostream>

// 函数模板定义
template <typename T>
T mymax(T x, T y) {
	return (x > y ? x : y);
}

// 显式实例化：整数
template <int> int mymax(int, int);

//template <typename T>
//void foo(T t) {
//    std::cout << t << std::endl;
//}
//
//template void foo(long);

int main() {
	// 调用显式实例化的函数
	std::cout << "mymax(2, 3) : " << mymax(2, 3) << std::endl;

	// 浮点数实例化
	std::cout << "mymax(2.6, 3.7) : " << mymax(2.6, 3.7) << std::endl;

	// 字符实例化
	std::cout << "mymax('A', 'D') : " << mymax('A', 'D') << std::endl;

	// 字符串字面量实例化
	std::cout << R"(mymax("ABC", "ABD") : )" << mymax("ABC", "ABD") << std::endl;
	std::cout << R"(mymax("AABD", "AABC") : )" << mymax("AABD", "AABC") << std::endl;

	// std::string类型实例化
	using namespace std::string_literals;
	std::cout << R"(mymax("ABC"s, "ABD"s) : )" << mymax("ABC"s, "ABD"s) << std::endl;

	// 名字空间冲突问题
//	foo(2l);
	return 0;
}
