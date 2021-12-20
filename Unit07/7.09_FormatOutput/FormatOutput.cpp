/*
 * FormatOutput.cpp
 *
 *  Created on: 2019年11月9日
 *      Author: Reflyer
 */

#include <iostream>
#include <iomanip>

int main() {
	// 展示setw和setfill
//	std::cout << std::setw(4) << 'a' << std::endl;
//	std::cout << std::setfill('#') << std::setw(4) << 'a' << std::endl;
	std::cout << std::setfill('#');
	for (int i = 0; i < 5; i++) {
		std::cout << std::setw(i + 2) << '\n';
	}

	// 展示setprecision、fixed、showpoint、left、right
	double pi = 3.1415926535898;
	std::cout << std::setprecision(6) << pi << std::endl;
	std::cout << std::setprecision(6) << std::fixed << pi << std::endl;
	std::cout << std::left << std::setw(4) << 'a' << std::endl;
	std::cout << std::right << std::setw(4) << 'a' << std::endl;

	// 展示hexfloat
	double d = 5.0;
	std::cout << std::defaultfloat << std::setprecision(7) << d << std::endl;
	std::cout << std::showpoint << d << std::endl;
	std::cout << std::hexfloat << d << std::endl;

	return 0;
}
