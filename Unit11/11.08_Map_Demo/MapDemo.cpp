/*
 * MapDemo.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<int, std::string> map;

	// insert插入键值对
	map.insert(std::map<int, std::string>::value_type(100, "Zhang San"));
	map.insert(std::map<int, std::string>::value_type(101, "Li Si"));
	map.insert(std::map<int, std::string>::value_type(102, "Zhen Xiaosa"));
//	map.insert(std::map<int, std::string>::value_type(103, "Hao Meili"));
	map[103] = "Hao Meili";

	auto p = map.begin();
	for (; p != map.end(); p++) {
		std::cout << p->first << ' ' << p->second << std::endl;
	}

	// find查找键值函数
	std::cout << "Enter a key to search for the name: ";
	int key;
	std::cin >> key;
	p = map.find(key);

	if (p == map.end())
		std::cout << "Key " << key << " not found in the map." << std::endl;
	else
		std::cout << p->first << ' ' << p->second << std::endl;
	std::cout << std::endl;

	// erase删除函数
	map.erase(103);
	for (p = map.begin(); p != map.end(); p++) {
		std::cout << p->first << ' ' << p->second << std::endl;
	}

	return 0;
}
