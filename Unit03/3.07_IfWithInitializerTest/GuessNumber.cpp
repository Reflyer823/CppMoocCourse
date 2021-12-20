#include <iostream>
#include <cstdlib>

int main() {
	std::cout << "正在生成一个0到99的整数..." << std::endl;
	std::cout << "请输入你猜的数：";
	auto x{ 0 };
	std::cin >> x;
	if(auto n = rand() % 100; x > n) {
		std::cout << "你猜大了！这个数是" << n << std::endl;
	} else if(x < n) {
		std::cout << "你猜小了！这个数是" << n << std::endl;
	} else {
		std::cout << "你猜对了！" << std::endl;
	}
	return 0;
}
