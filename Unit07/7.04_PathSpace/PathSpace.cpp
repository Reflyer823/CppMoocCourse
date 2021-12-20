/*
 * PathSpace.cpp
 *
 *  Created on: 2019年11月7日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>

int main() {
	namespace fs = std::filesystem;
	fs::path p{"C:\\"};
	auto capacity = fs::space(p).capacity;
	std::cout << "C: total space : " << capacity << '(' <<
			(capacity / 1024.0 / 1024.0 / 1024.0) << "GB)" << std::endl;
	auto free = fs::space(p).free;
	std::cout << "C: free space : " << free << '(' <<
			(free / 1024.0 / 1024.0 / 1024.0) << "GB)" << std::endl;
	return 0;
}
