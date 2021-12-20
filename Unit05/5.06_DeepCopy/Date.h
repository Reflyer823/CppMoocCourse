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
	int year, month, day;
public:
	Date();
	Date(int year, int month, int day);
	int getDay() const;
	void setDay(int day = 1);
	int getMonth() const;
	void setMonth(int month = 1);
	int getYear() const;
	void setYear(int year = 2019);
	std::string toString();
};

#endif /* DATE_H_ */
