#include <iostream>

//int i{ 30 };
//
//int max(int x, int y) {
//	return x > y ? x : y;
//}
//
//int max(int x, int y, int z) {
//	return max(x, max(y, z));
//}
//
//int main() {
////	int i{ 20 };
//	for(int i = 0; i < 5; i++) {
//		std::cout << i << " " << ::i << std::endl;
//	}
//
//	std::cout << max(1, 2, 3) << std::endl;
//
//	return 0;
//}

void printNum(double num = 1);

int main() {
	printNum();
	printNum(4);
	return 0;
}

void printNum(double num) {
	std::cout << num << std::endl;
}
