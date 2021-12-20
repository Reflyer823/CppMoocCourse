/*
 * MyComplex.cpp
 *
 *  Created on: 2019年11月23日
 *      Author: Reflyer
 */

#include <iostream>
#include <cstdlib>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

class MyComplex {
private:
	double re = 0.0, im = 0.0;
public:
	MyComplex() = default;
	MyComplex(double re_, double im_) {
		re = re_;
		im = im_;
	}
	MyComplex operator + (const MyComplex& z) {
		return MyComplex(re + z.re, im + z.im);
	}
	MyComplex operator - (const MyComplex& z) {
		return MyComplex(re - z.re, im - z.im);
	}
	MyComplex operator * (const MyComplex& z) {
		return MyComplex(re * z.re - im * z.im, im * z.re + re * z.im);
	}
	MyComplex operator / (const MyComplex& z) {
		if (z.re == 0.0 && z.im == 0.0) {
			cout << "Divisor can not be 0";
			std::exit(0);
		}
		MyComplex ret{re * z.re + im * z.im, im * z.re - re * z.im};
		double t = z.re * z.re + z.im * z.im;
		ret.re /= t; ret.im /= t;
		return ret;
	}
	friend std::istream& operator >> (std::istream& is, MyComplex& z);
	friend std::ostream& operator << (std::ostream& os, const MyComplex& z);
};

std::istream& operator >> (std::istream& is, MyComplex& z) {
	return (is >> z.re >> z.im);
}

std::ostream& operator << (std::ostream& os, const MyComplex& z) {
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
    cout << "z1 + z2 = "      << z1 + z2      << endl;
    cout << "z1 - z2 + z1 = " << z1 - z2 + z1 << endl;
    cout << "z1 * z2 - z1 = " << z1 * z2 - z1 << endl;
    cout << "z1 / z2 + z1 = " << z1 / z2 + z1 << endl;
    cout << "z2 - z1 / z1 = " << z2 - z1 / z1;
    // GCC及VC编译器在调试模式下会暂停，便于查看运行结果
#if ( defined(__DEBUG__) || defined(_DEBUG) )
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
#endif
    return 0;
}
