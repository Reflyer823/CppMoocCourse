/*
 * Unit06_Discuss1.cpp
 *
 *  Created on: 2019年12月6日
 *      Author: Reflyer
 */

#include <iostream>

class A {
//public:
//	A() {std::cout << "a";}
};
class B : public A {
public:
    using A::A;
    B(int i) {}
};

int main() {
    A a1;
    B b1;
    return 0;
}
