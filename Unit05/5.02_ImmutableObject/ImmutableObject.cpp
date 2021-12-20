/*
 * ImmutableObject.cpp
 *
 *  Created on: 2019年10月25日
 *      Author: Reflyer
 */

#include <iostream>
#include "Employee.h"

int main() {
	Employee e;
	std::cout << e.toString() << std::endl;
	e.getBirthday()->setYear(1999);
	std::cout << e.toString() << std::endl;
	e.setBirthday(Date(1998, 8, 23));
	std::cout << e.toString() << std::endl;
	return 0;
}
