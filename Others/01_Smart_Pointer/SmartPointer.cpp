/*
 * SmartPointer.cpp
 *
 *  Created on: 2019年12月2日
 *      Author: Reflyer
 */

#include <iostream>
#include <memory>

class C {
public:
	C() {
		std::cout << "Constructor" << std::endl;
	}
	~C() {
		std::cout << "Destructor" << std::endl;
	}
};

int main() {
	std::shared_ptr<int> p1 = std::make_shared<int>(5);
	std::cout << *p1 << std::endl;
	std::shared_ptr<C> p2;
	{
		auto ptr = std::make_shared<C>();
		p2 = ptr;
	}
	std::cout << "exit..." << std::endl;
	return 0;
}
