/*
 * ListDemo.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <list>

void print(std::list<int> l) {
	for (auto p = l.begin(); p != l.end(); p++) {
		std::cout << *p << ' ';
	}
	std::cout << std::endl;
}

int main() {
	// list初始化
	int values[] = {1, 2, 3, 4};
	std::list<int> intList(values, values + 4);
	print(intList);

	// assign赋值函数
	intList.assign(4, 11);
	print(intList);

	// insert插入函数
	auto itr = intList.begin();
	itr++;
	intList.insert(itr, 555);
	intList.insert(itr, 666);
	print(intList);

	// erase删除函数
	auto beg = intList.begin();
	itr++;
	intList.erase(beg, itr);
	print(intList);

	// clear清除函数
	intList.clear();
	std::cout << "size: " << intList.size() << std::endl;
	std::cout << "empty? " << intList.empty() << std::endl;

	// push_front函数
	intList.push_front(10);
	intList.push_front(11);
	intList.push_front(12);
	print(intList);

	// pop函数
	intList.pop_back();
	intList.pop_front();
	print(intList);

	// sort排序函数
	int values1[] = {7, 3, 1, 2};
	std::list<int> list1(values1, values1 + 4);
	list1.sort();
	print(list1);

	// merge归并函数
	std::list<int> list2(list1);
	list1.merge(list2);
	print(list1);
	std::cout << "size of list2: " << list2.size() << std::endl;

	// reverse反转函数
	list1.reverse();
	print(list1);

	list1.push_back(7);
	list1.push_back(1);
	print(list1);

	// remove移除函数
	list1.remove(7);
	print(list1);

	list2.assign(7, 2);
	print(list2);

	// splice函数插入list
	auto p = list2.begin();
	list2.splice(++p, list1);
	print(list2);
	std::cout << "size of list1: " << list1.size() << std::endl;

	return 0;
}
