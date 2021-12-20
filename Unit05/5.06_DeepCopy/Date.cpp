/*
 * Date.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include "Date.h"

Date::Date() : Date(2019, 1, 1) {}

Date::Date(int year, int month, int day) :
	year{year}, month{month}, day{day} {
//		std::cout << "Construct Date: " + this->toString() << std::endl;
	}

int Date::getDay() const {
	return day;
}

void Date::setDay(int day) {
	this->day = day;
}

int Date::getMonth() const {
	return month;
}

void Date::setMonth(int month) {
	this->month = month;
}

int Date::getYear() const {
	return year;
}

void Date::setYear(int year) {
	this->year = year;
}

std::string Date::toString() {
	return std::to_string(year) + "-" + std::to_string(month) +
			"-" + std::to_string(day);
}
