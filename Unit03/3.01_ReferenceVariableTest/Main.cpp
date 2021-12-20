#include <iostream>

using std::cout;
using std::endl;

void swap(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;
}

int main() {
	int x = 0;
	int& rx = x;
	rx = 5;
	cout << x << endl;

	int a = 1, b {2};
	swap(a, b);
	cout << a << "," << b << endl;

	const char* s = "Aloha";
	const char* t = "World";
	const char*& r = s;
	r = t;
	cout << r << endl;
	cout << s << endl;

	return 0;
}
