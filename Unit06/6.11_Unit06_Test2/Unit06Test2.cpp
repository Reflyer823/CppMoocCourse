/*
 * Unit06Test2.cpp
 *
 *  Created on: 2019年11月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>

class Animal {
private:
	static int num;
public:
	Animal() {
		std::cout << "Animal" << std::endl;
		num++;
	}
	~Animal() { num--; }

	static int getNum() {
		return num;
	}
};

class Dog : public Animal {
public:
	Dog() { std::cout << "Dog" << std::endl; }
};

int Animal::num = 0;

int main() {
	int n = 0;
	std::vector<Animal*> v1;
	std::vector<Dog*> v2;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		v1.push_back(new Animal);
		v2.push_back(new Dog);
		std::cout << Animal::getNum() << std::endl;
	}
	for (int i = 0; i < static_cast<int>(v1.size()); i++) {
		delete v1[i]; v1[i] = nullptr;
		delete v2[i]; v2[i] = nullptr;
		std::cout << Animal::getNum() << std::endl;
	}
	return 0;
}
