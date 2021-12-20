/*
 * SetDemo.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <set>

template <typename T>
void print(const T& t) {
	for (auto p = t.begin(); p != t.end(); p++) {
		std::cout << *p << ' ';
	}
	std::cout << std::endl;
}

int main() {
	// 初始化，默认升序排列
	int values[] = {3, 5, 1, 7, 2, 2};
	std::multiset<int> set(values, values + 6);
	// 降序排列
//	std::multiset<int, std::greater<int> > set(values, values + 6);
	print(set);

	// insert插入函数
	set.insert(555);
	set.insert(1);
	print(set);

	// lower_bound和upper_bound函数
	auto p = set.lower_bound(2);
	std::cout << *p << std::endl;
	p = set.upper_bound(2);
	std::cout << *p << std::endl;

	// find查找函数、count计数函数
	p = set.find(2);
	if (p == set.end())
		std::cout << "Not found!" << std::endl;
	else
		std::cout << "count: " << set.count(2) << std::endl;

	// earse删除函数
	set.erase(2);
	print(set);

	return 0;
}
