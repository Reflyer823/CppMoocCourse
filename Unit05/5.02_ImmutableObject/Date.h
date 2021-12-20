/*
 * Date.h
 *
 *  Created on: 2019年10月25日
 *      Author: Reflyer
 */

#ifndef DATE_H_
#define DATE_H_

#include <string>

class Date {
private:
	int year = 2019, month = 1, day = 1;
public:
	Date() = default;

	Date(int year, int month, int day) :
		year{year}, month{month}, day{day} {}

	int getDay() const {
		return day;
	}

	void setDay(int day = 1) {
		this->day = day;
	}

	int getMonth() const {
		return month;
	}

	void setMonth(int month = 1) {
		this->month = month;
	}

	int getYear() const {
		return year;
	}

	void setYear(int year = 2019) {
		this->year = year;
	}

	std::string toString() {
		return std::to_string(year) + "-" + std::to_string(month) +
				"-" + std::to_string(day);
	}
};

#endif /* DATE_H_ */
