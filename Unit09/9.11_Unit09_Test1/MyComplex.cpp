/*
 * MyComplex.cpp
 *
 *  Created on: 2019年11月23日
 *      Author: Reflyer
 */

#include <iostream>

using std::cin;
using std::cout;

class MyComplex {
private:
	double re = 0.0, im = 0.0;
public:
	friend std::istream& operator >> (std::istream& is, MyComplex& z);
	friend std::ostream& operator << (std::ostream& os, MyComplex& z);
};

std::istream& operator >> (std::istream& is, MyComplex& z) {
	return (is >> z.re >> z.im);
}

std::ostream& operator << (std::ostream& os, MyComplex& z) {
	os << '(' << z.re;
	os.setf(std::ios::showpos);
	os << z.im << "i)";
	os.unsetf(std::ios::showpos);
	return os;
}

int main() {
    MyComplex z1, z2;
    cin >> z1;
    cin >> z2;
    cout << z1 << " " << z2;  //z1和z2之间间隔1个空格
    return 0;
}
