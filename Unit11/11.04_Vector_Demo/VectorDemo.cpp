/*
 * VectorDemo.cpp
 *
 *  Created on: 2019年12月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>

void print(const std::vector<double>& v) {
	for (decltype(v.size()) i = 0; i < v.size(); i++) {
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
}

int main() {
	double values[] = {1, 2, 3, 4, 5, 6, 7};
	std::vector<double> doubleVector(values, values + 7);
	print(doubleVector);

	doubleVector.assign(4, 11.5);
	print(doubleVector);

	doubleVector.at(0) = 22.4;
	print(doubleVector);

	doubleVector.insert(doubleVector.begin() + 1, 555);
	doubleVector.insert(doubleVector.begin() + 1, 666);
	print(doubleVector);

	doubleVector.erase(doubleVector.begin() + 2, doubleVector.begin() + 4);
	print(doubleVector);

	doubleVector.clear();
	std::cout << "size: " << doubleVector.size() << std::endl;
	std::cout << "empty? " << doubleVector.empty() << std::endl;

	return 0;
}
