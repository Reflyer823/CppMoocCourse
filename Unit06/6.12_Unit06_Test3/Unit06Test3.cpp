/*
 * Unit06Test3.cpp
 *
 *  Created on: 2019年11月3日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>

class Animal {
public:
	Animal() { std::cout << "Animal" << std::endl; }
	virtual ~Animal() {}
	virtual void speak() = 0;
};

class Dog : public Animal {
public:
	Dog() { std::cout << "Dog" << std::endl; }
	void speak() override { std::cout << "wang" << std::endl; }
};

class Cat : public Animal {
public:
	Cat() { std::cout << "Cat" << std::endl; }
	void speak() override { std::cout << "miao" << std::endl; }
};

int main() {
	int n = 0;
	std::vector<Animal*> v;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		v.push_back(new Dog);
		v.push_back(new Cat);
	}
	for (int i = 0; i < static_cast<int>(v.size()); i++) {
		v[i]->speak();
		delete v[i];
		v[i] = nullptr;
	}
	return 0;
}
