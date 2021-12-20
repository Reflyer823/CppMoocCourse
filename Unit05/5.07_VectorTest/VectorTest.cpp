/*
 * VectorTest.cpp
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>
#include "Helper.h"

int main() {
	// 用C++11的列表初始化创建vector对象words1
	std::vector<std::string> words1{"Hello", "World!", "Welcome", "to", "C"};
	PRINT(words1);

	// 删除words1最后一个元素
//	words1.pop_back();
	words1.erase(words1.end() - 1);
	PRINT(words1);

	// 在words1尾部追加元素
	words1.push_back("C++");
	PRINT(words1);

	// 用迭代器拷贝words1的内容以创建words2
//	std::vector words2{words1.begin() + 2, words1.end()};
	std::vector<std::string> words2{words1.begin() + 2, words1.end()};
	PRINT(words2);

	// 在words2中插入元素
	words2.insert(words2.begin(), "Hello");
	PRINT(words2);

	// 用拷贝构造创建words3
	std::vector words3{words2};
//	std::vector<std::string> words3{words2};
	PRINT(words3);

	// 用[]修改words3的元素
	words3[3] = "C Plus Plus";
	PRINT(words3);

	// 创建words4，初始化为多个相同的字符串
	std::vector<std::string> words4{4, "C++"};
	PRINT(words4);

	// words3与words4交换
	words3.swap(words4);
	PRINT(words3);PRINT(words4);

	return 0;
}
