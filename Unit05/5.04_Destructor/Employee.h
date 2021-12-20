/*
 * Employee.h
 *
 *  Created on: 2019年10月25日
 *      Author: Reflyer
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>
#include "Date.h"

enum class Gender {
	male,
	female,
};

class Employee {
private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfEmployees;
public:
	Employee() : Employee("Jack", Gender::male, Date()) {}

	Employee(const std::string& name, const Gender& gender, const Date& birthday) :
		name{name}, gender{gender} {
			this->birthday = new Date{birthday};
			numberOfEmployees++;
			std::cout << "Now Employees Number: " << numberOfEmployees <<
					" " << name << std::endl;
		}

	~Employee() {
		delete birthday;
		numberOfEmployees--;
		std::cout << "Now Employees Number: " << numberOfEmployees <<
				" " << name << std::endl;
	}

	const Date& getBirthday() const {
		return *birthday;
	}

	void setBirthday(const Date &birthday) {
		*(this->birthday) = birthday;
	}

	Gender getGender() const {
		return gender;
	}

	void setGender(Gender gender) {
		this->gender = gender;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string &name) {
		this->name = name;
	}

	std::string toString() {
		return (name + " " + (gender == Gender::male ? "male" : "female") +
				" " + birthday->toString());
	}
};

#endif /* EMPLOYEE_H_ */
