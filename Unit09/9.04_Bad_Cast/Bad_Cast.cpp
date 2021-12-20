/*
 * Bad_Cast.cpp
 *
 *  Created on: 2019年11月16日
 *      Author: Reflyer
 */

#include <iostream>

class Student {
	virtual void foo() {};
};
class Undergraduate : public Student {};
class Graduate : public Student {};

int main() {
	Undergraduate u;
	Graduate g;
	Student* s1 = &u;
	Student* s2 = &g;

	Graduate* p1 = dynamic_cast<Graduate*>(s2);
	std::cout << reinterpret_cast<long long>(p1) << std::endl;
	Graduate* p2 = dynamic_cast<Graduate*>(s1);
	std::cout << reinterpret_cast<long long>(p2) << std::endl;
	if (p2 == nullptr) {
		std::cout << "dynamic_cast failed!" << std::endl;
	} else {
		std::cout << "dynamic_cast succeeded!" << std::endl;
	}

	try {
		Student& r1 = u;
		Graduate& r2 = dynamic_cast<Graduate&>(r1);
	} catch (std::bad_cast& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
