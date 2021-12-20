/*
 * STL_Container.cpp
 *
 *  Created on: 2019年12月2日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename T>
void print(T t) {
	cout << '[';
	bool first = true;
	for (auto e : t) {
		cout << (first ? (first = false, "") : ", ") << e;
	}
	cout << ']' << endl;
}

int main() {
	vector<int> vector1, vector2;
	list<int> list1, list2;

	cout << "Vector:" << endl;
	vector1.push_back(1);
	vector1.push_back(2);
	vector2.push_back(30);
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "maximum size of vector1: " << vector1.max_size() << endl;
	cout << "maximum size of vector2: " << vector2.max_size() << endl;
	cout << "capacity of vector1: " << vector1.capacity() << endl;
	cout << "capacity of vector2: " << vector2.capacity() << endl;
	vector1.swap(vector2);
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "capacity of vector1: " << vector1.capacity() << endl;
	cout << "capacity of vector2: " << vector2.capacity() << endl;
	cout << "vector1<vector2? " << (vector1 < vector2) << endl;
	cout << "vector1: "; print(vector1);
	cout << "vector2: "; print(vector2);
	vector2.pop_back();
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "capacity of vector1: " << vector1.capacity() << endl;
	cout << "capacity of vector2: " << vector2.capacity() << endl;
	cout << endl;

	cout << "List:" << endl;
	list1.push_back(1);
	list1.push_back(2);
	list2.push_back(30);
	cout << "size of list1: " << list1.size() << endl;
	cout << "size of list2: " << list2.size() << endl;
	cout << "maximum size of list1: " << list1.max_size() << endl;
	cout << "maximum size of list2: " << list2.max_size() << endl;
	list1.swap(list2);
	cout << "size of list1: " << list1.size() << endl;
	cout << "size of list2: " << list2.size() << endl;
	cout << "list1<list2? " << (list1 < list2) << endl;
	cout << "list1: "; print(list1);
	cout << "list2: "; print(list2);

	return 0;
}
