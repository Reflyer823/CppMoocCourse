/*
 * ArrayTest.cpp
 *
 *  Created on: 2019年10月23日
 *      Author: Reflyer
 */

#include <iostream>
#include <array>
#include <algorithm> // included for std::sort

using std::cout;
using std::endl;
using std::array;

template <typename T>
void print(const T& a) {
	for(auto x: a) {
		cout << x << " ";
	}
	cout << endl;
}

//int search(const array<int, 3>& a, int val) {
//template <typename T, int length>
//int search(const array<T, length>& a, T val) {
template <typename T>
int search(const T& a, int val) {
	for(int i = 0; i < static_cast<int> (a.size()); i++) {
		if(a[i] == val)
			return i;
	}
	return -1;
}

int main() {
	// 1. 创建数组
//	std::array<int, 3> a1 {1, 2, 3};
	std::array a1 {1, 2, 3};
	print(a1);

	// 2. 为数组赋值
	a1 = {7, 8};
	print(a1);

	// 3. 交换数组
	array<int, 3> a2 {200, 100, 300};
	print(a2);
	a1.swap(a2);
	cout << "a1: "; print(a1);
	cout << "a2: "; print(a2);

	// 4. 数组赋值
	a2 = a1;
	cout << "a1: "; print(a1);
	cout << "a2: "; print(a2);
//	array<int, 4> a24 {11, 12, 13, 14};
//	a24 = a1;

	// 5. 求数组大小
	cout << a1.size() << " " << a1.max_size() << endl;

	// 6. 编写search函数，在数组中查找一个值
	cout << search(a1, 300) << " " << search(a1, 1) << endl;

	// 7. sort
	std::sort(a1.begin(), a1.end());
	print(a1);

	// 8. 二维数组
	array<array<int, 3>, 4> a3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			cout << a3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
