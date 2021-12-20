/*
 * Employee.h
 *
 *  Created on: 2019年10月25日
 *      Author: Reflyer
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"
#include <string>

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
	Employee();
	Employee(const std::string& name, const Gender& gender, const Date& birthday);
	Employee(const Employee& e);
	~Employee();
	const Date& getBirthday() const;
	void setBirthday(const Date &birthday);
	Gender getGender() const;
	void setGender(Gender gender);
	const std::string& getName() const;
	void setName(const std::string &name);
	std::string toString();
};

#endif /* EMPLOYEE_H_ */
