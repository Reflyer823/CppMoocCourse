/*
 * Unit06Test1.cpp
 *
 *  Created on: 2019年11月3日
 *      Author: Reflyer
 */

#include <iostream>

class Animal {
public:
	Animal() { std::cout << "Animal" << std::endl; }
};

class Dog : public Animal {
public:
	Dog() { std::cout << "Dog" << std::endl; }
};

int main() {
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		Animal a;
		Dog d;
	}
	return 0;
}
