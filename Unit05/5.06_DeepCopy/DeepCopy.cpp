/*
 * DeepCopy.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "Employee.h"

int main() {
	Employee e1{"Alice", Gender::female, {1992, 4, 15}};
	std::cout << e1.toString() << std::endl;
	Employee e2{e1};
	std::cout << e2.toString() << std::endl;
	std::cout << "===========================" << std::endl;
	e2.setName("Anna");
	e2.setBirthday({1994, 3, 21});
	std::cout << e1.toString() << std::endl;
	std::cout << e2.toString() << std::endl;
	return 0;
}
