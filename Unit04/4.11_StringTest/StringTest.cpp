/*
 * StringTest.cpp
 *
 *  Created on: 2019年10月22日
 *      Author: Reflyer
 */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
	// 创建字符串
	string s{"Hello, World!"};
	cout << s << endl;

	// clear
	cout << "empty(): " << s.empty() << endl;
	s.clear();
	cout << s << endl;
	cout << "empty(): " << s.empty() << endl;

	// 用数组给字符串赋值
	char arr[] {'H', 'e', 'l', 'l', 'o', '\0'};
	s = arr;
	cout << s << endl;
	s += arr;
	cout << s << endl;

	// assign()
	s.assign("Hello, World!");
	cout << s << endl;

	// append
	s.append("  ");
	s.append(5, ' ');
//	s.append("!");
	cout << s << endl;

	// insert 空白
	s.insert(0, "  ");
	s.insert(0, 5, ' ');
	cout << s << endl;

	// 移除字符串前面的空白
	s.erase(0, s.find_first_not_of(" \t\r\n"));
	cout << s << endl;

	// 移除字符串后面的空白
	s.erase(s.find_last_not_of(" \t\r\n") + 1);
	cout << s << endl;

	// 字符串比较
	string s1 = "Hello, Worle!";
	string s2{"Hello, World!"};
	cout << s.compare(s1) << " " << (s == s2) << endl;

	// 字符串和数据类型的转换
	string s3{"01234"};
	int x = std::stoi(s3);
	cout << x << endl;
	string s4 = std::to_string(x);
	cout << "s4: " << s4 << endl;

	return 0;
}
