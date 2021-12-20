/*
 * Destructor.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "Employee.h"

int Employee::numberOfEmployees = 0;

int main() {
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* e2 = new Employee{"John", Gender::male, Date{1999, 9, 1}};
	std::cout << e2->toString() << std::endl;
	{
		Employee e3{"Alice", Gender::female, Date{1992, 4, 15}};
		std::cout << e3.toString() << std::endl;
	}
	delete e2;
	return 0;
}
