#include <iostream>
//#include <typeinfo>

using std::cout;
using std::endl;

auto max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	auto x{ 2 };
	auto y{ 3 };
	x = y;
	y = x;
//	auto z;
//	z = 1;

//	auto x1{ 2 }, x2{ 3 }, x3{ 'a' };
	auto x1{ 2 }, x2{ 3 };
	x1 = x2;
	x2 = x1;

	int y1{ 42 }, &y2{ y1 };
	auto y3{ y2 };
	cout << typeid(y3).name() << endl;
	cout << &y1 << " " << &y2 << " " << &y3 << endl;

	auto& y4{ y2 };
	cout << typeid(y4).name() << endl;
	cout << &y1 << " " << &y2 << " " << &y4 << endl;

	int p[3]{1, 2, 3};
	auto p1{ p };
	cout << typeid(p1).name() << endl;

	auto& p2{ p };
	cout << typeid(p2).name() << endl;

	cout << max(x, y) << endl;

	return 0;
}
