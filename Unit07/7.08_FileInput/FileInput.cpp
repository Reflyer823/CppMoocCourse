/*
 * FileInput.cpp
 *
 *  Created on: 2019年11月9日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>
#include <fstream>

int main() {
	namespace fs = std::filesystem;
	fs::path p{"scores.txt"};
	std::ifstream input{p};

	if (input.fail()) {
		std::cout << "Can not open " << p << '.';
		return 0;
	}

//	std::string name{""};
//	double score{0.0};
//	int score;

//	input >> name >> score;
//	std::cout << name << ' ' << score << std::endl;
//	input >> name >> score;
//	std::cout << name << ' ' << score << std::endl;

//	char c;
//	while (!input.get(c).eof()) {
//		std::cout << c;
//	}


	std::string name{""};
	double score{0.0};
	while (input >> name >> score, !input.eof()) {
		std::cout << name << ' ' << score << std::endl;
	}

	return 0;
}
