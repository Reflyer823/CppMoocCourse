#include <iostream>

class Square {
private:
	double side = 1.0;
public:
//	Square() = default;
	Square(double s) {
		this->side = s;
	}
	double getArea() {
		return side * side;
	}
	void setSide(double side) {
		this->side = side;
	}
};

int main() {
//	Square s1, s2{ 4.0 };
	Square s2{ 4.0 };
	Square s1 = s2;

	std::cout << "s1: " << s1.getArea() << std::endl;
	std::cout << "s2: " << s2.getArea() << std::endl;

//	s1 = s2;
	s1.setSide(1.0);

	std::cout << "s1: " << s1.getArea() << std::endl;
	std::cout << "s2: " << s2.getArea() << std::endl;
	return 0;
}
