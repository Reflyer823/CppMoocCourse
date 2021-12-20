/*
 * FileOutput.cpp
 *
 *  Created on: 2019年11月8日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	namespace fs = std::filesystem;
	fs::path p{"scores.txt"};
	std::ofstream output{p};

	double lileiScore{86.7};
	int hanmeimeiScore{91};

	output << "LiLei" << ' ' << lileiScore << std::endl;
	output << "HanMeimei" << ' ' << hanmeimeiScore << std::endl;
	output.close();

	std::cout << "size of " << p << " is " << fs::file_size(p) << '.' << std::endl;

	return 0;
}
