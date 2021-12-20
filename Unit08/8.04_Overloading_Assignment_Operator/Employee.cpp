/*
 * Employee.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include <string>
#include "Employee.h"

int Employee::numberOfEmployees = 0;

Employee::Employee() : Employee("Jack", Gender::male, Date()) {}

Employee::Employee(const std::string& name, const Gender& gender, const Date& birthday) :
	name{name}, gender{gender} {
		this->birthday = new Date{birthday};
		numberOfEmployees++;
//		std::cout << "Now Employees Number: " << numberOfEmployees <<
//				" " << name << std::endl;
	}

Employee::Employee(const Employee& e) :
		Employee(e.name, e.gender, *(e.birthday)) {
	std::cout << "Copy Constructor" << std::endl;
}

Employee::~Employee() {
	delete birthday;
	numberOfEmployees--;
//	std::cout << "Now Employees Number: " << numberOfEmployees <<
//			" " << name << std::endl;
}

const Date& Employee::getBirthday() const {
	return *birthday;
}

void Employee::setBirthday(const Date &birthday) {
	*(this->birthday) = birthday;
}

Gender Employee::getGender() const {
	return gender;
}

void Employee::setGender(Gender gender) {
	this->gender = gender;
}

const std::string& Employee::getName() const {
	return name;
}

void Employee::setName(const std::string &name) {
	this->name = name;
}

std::string Employee::toString() {
	return (name + " " + (gender == Gender::male ? "male" : "female") +
			" " + birthday->toString());
}

Employee& Employee::operator=(const Employee& e) {
	name = e.name;
	gender = e.gender;
	*birthday = *(e.birthday);
	std::cout << "Overloaded Assignment Operator" << std::endl;
	return (*this);
}
