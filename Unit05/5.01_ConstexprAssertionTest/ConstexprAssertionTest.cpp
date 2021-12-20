/*
 * ConstexprAssertionTest.cpp
 *
 *  Created on: 2019年10月23日
 *      Author: Reflyer
 */

#include <iostream>
#include <array>
#include <cassert> // included for assert()

constexpr int factorial(int n) {
	if(n == 0) {
		return 1; // error
	} else {
		return n * factorial(n - 1);
	}
}

/**
 * 任务1：用递归计算factorial，用assert检查3的阶乘
 * 任务2：将factorial变成常量表达式，用static_assert检查3的阶乘
 * 任务3：创建factorial(4)大小的数组
 */
int main() {
	int n = 3;
	auto f = factorial(n);
	static_assert(factorial(3) == 6, "3! should be 6");
	assert(f == 6);
	std::cout << "3! = " << f << std::endl;
	std::array<int, factorial(4)> arr;
	std::cout << "size: " << arr.size() << std::endl;
	return 0;
}
