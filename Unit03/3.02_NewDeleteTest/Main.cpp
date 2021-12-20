#include <iostream>

int main() {
	int* p;
	int* q;

	p = new int(14);
	std::cout << "Before: " << *p << std::endl;
	*p = 20;
	std::cout << "After: " << *p << std::endl;

	q = new int[4];
	for(int i = 0; i < 4; i++) {
		q[i] = 10 + i;
		std::cout << q[i] << std::endl;
	}

	delete p;
	delete [] q;
	return 0;
}
