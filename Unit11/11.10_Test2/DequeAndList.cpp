/*
 * DequeAndList.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <deque>
#include <list>

int main() {
	int val;
	std::deque<int> intDeque;
	while (std::cin >> val) {
		if (val % 2 == 0)
			intDeque.push_back(val);
		else
			intDeque.push_front(val);
	}
	std::list<int> list1(intDeque.begin(), intDeque.end());
//	std::list<int> list1;
//	for (auto e : intDeque) {
//		list1.push_back(e);
//	}
	list1.reverse();
	std::list<int> list2;
	auto p1 = intDeque.begin(); auto p2 = list1.begin();
	for (; p1 != intDeque.end(); p1++, p2++) {
		list2.push_back((*p1) * (*p2));
	}
	bool first = true;
	for (auto e : list2) {
		std::cout << (first ? (first = false, "") : " ") << e;
	}
	return 0;
}
