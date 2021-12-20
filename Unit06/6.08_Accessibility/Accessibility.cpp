/*
 * Accessibility.cpp
 *
 *  Created on: 2019年11月3日
 *      Author: Reflyer
 */

#include <iostream>

class A {
public:
	int i {0};
protected:
	int j {0};
private:
	int k {0};
};

class Pub : public A {
public:
	void foo() { i++; j++;/* k++;*/ }
};

class Pro : protected A {
public:
	void foo() { i++; j++;/* k++;*/ }
};

class Pri : private A {
public:
	void foo() { i++; j++;/* k++;*/ }
};

int main() {
	Pub pub; Pro pro; Pri pri;

	pub.i++;/* pub.j++; pub.k++;
	pro.i++; pro.j++; pro.k++;
	pri.i++; pri.j++; pri.k++; */

//	pri.i++;
//	static_cast<A>(pri).i++;
//	A* ptr = &pri;

	return 0;
}
