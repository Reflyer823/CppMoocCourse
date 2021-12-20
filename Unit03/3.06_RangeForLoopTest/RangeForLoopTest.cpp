#include <iostream>

int main() {
	int a[]{1, 2, 3, 4, 5};
	for(auto& x : a) {
		x *= 2;
	}
	for(auto y : a) {
		std::cout << y << std::endl;
	}
	return 0;
}
