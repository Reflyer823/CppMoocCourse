/*
 * IteratorDemo.cpp
 *
 *  Created on: 2019年12月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>
#include <set>

int main() {
	std::vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);

	std::vector<int>::iterator p1;
	for (p1 = v.begin(); p1 != v.end(); p1++) {
		std::cout << *p1 << ' ';
	}
	std::cout << std::endl;

	std::set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(20);
	s.insert(50);
	s.insert(30);

	for (auto p2 = s.begin(); p2 != s.end(); p2++) {
		std::cout << *p2 << ' ';
	}

	return 0;
}
