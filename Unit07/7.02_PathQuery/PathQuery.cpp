/*
 * PathQuery.cpp
 *
 *  Created on: 2019年11月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <filesystem>

int main() {
	namespace fs = std::filesystem;
	fs::path p{R"(G:\Workspace\eclipse-cdt\CppLearningWorkspace\PathQuery\PathQuery.cpp)"};
//	fs::path p;

	// 是否为空？是否存在？
	if (p.empty()) {
		std::cout << "Path " << p << " is empty." << std::endl;
		std::exit(0);
	}
	if (fs::exists(p) == false) {
		std::cout << "Path " << p << " does not exist." << std::endl;
		std::exit(0);
	}

	// 根名？根路径？相对路径？
	// 父路径？文件名？文件名主干？扩展名？
	std::cout << "Path:" << p << '\n' <<
			"root_name():" << p.root_name() << '\n' <<
			"root_path():" << p.root_path() << '\n' <<
			"relative_path():" << p.relative_path() << '\n' <<
			"parent_path():" << p.parent_path() << '\n' <<
			"filename():" << p.filename() << '\n' <<
			"stem():" << p.stem() << '\n' <<
			"extension():" << p.extension() << std::endl;
	return 0;
}
