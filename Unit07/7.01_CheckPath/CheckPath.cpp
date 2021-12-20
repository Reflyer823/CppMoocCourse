/*
 * CheckPath.cpp
 *
 *  Created on: 2019年11月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>

int main() {
	namespace fs = std::filesystem;

	// 定义路径，使用原生字符串、转义字符串、正斜杠字符串
	fs::path p1{"G:\\Workspace\\eclipse-cdt\\CppLearningWorkspace\\CheckPath\\Hello.txt"};
	fs::path p2{R"(G:\Workspace\eclipse-cdt\CppLearningWorkspace\CheckPath)"};
	fs::path p3{"G:/Workspace/eclipse-cdt/CppLearningWorkspace/CheckPath/Hello.txt"};
	fs::path p{p2};

	// 输出默认文件分隔符
	std::cout << "Preferred separator : " <<
			static_cast<char>(fs::path::preferred_separator) << std::endl;

	// 判断是否是常规文件，如果是，输出文件的大小
	// 判断是否是目录，如果是，列出其子目录
	// 判断路径是否存在
	std::cout << "Path : " << p << std::endl;
	if (fs::is_regular_file(p)) {
		std::cout << "Regular file size : " << fs::file_size(p) << std::endl;
	} else if (fs::is_directory(p)) {
		std::cout << "Content of the directory : " << std::endl;
		for (auto& pe : fs::directory_iterator(p)) {
			std::cout << pe << std::endl;
		}
	} else if (fs::exists(p)) {
		std::cout << "Special file !" << std::endl;
	} else {
		std::cout << "Does not exist !" << std::endl;
	}

	return 0;
}
