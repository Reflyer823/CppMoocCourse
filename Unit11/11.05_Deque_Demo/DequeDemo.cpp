/*
 * DequeDemo.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <deque>

void print(const std::deque<double>& d) {
	for (decltype(d.size()) i = 0; i < d.size(); i++) {
		std::cout << d[i] << ' ';
	}
	std::cout << std::endl;
}

int main() {
	double values[] = {1, 2, 3, 4, 5, 6, 7};
	std::deque<double> doubleDeque(values, values + 7);
	print(doubleDeque);

	doubleDeque.assign(4, 11.5);
	print(doubleDeque);

	doubleDeque.at(0) = 22.4;
	print(doubleDeque);

	doubleDeque.insert(doubleDeque.begin() + 1, 555);
	doubleDeque.insert(doubleDeque.begin() + 1, 666);
	print(doubleDeque);

	doubleDeque.erase(doubleDeque.begin() + 2, doubleDeque.begin() + 4);
	print(doubleDeque);

	doubleDeque.clear();
	std::cout << "size: " << doubleDeque.size() << std::endl;
	std::cout << "empty? " << doubleDeque.empty() << std::endl;

	doubleDeque.push_front(10.11);
	doubleDeque.push_front(20.22);
	doubleDeque.push_front(30.33);
	print(doubleDeque);

	doubleDeque.pop_back();
	doubleDeque.pop_front();
	print(doubleDeque);

	return 0;
}
