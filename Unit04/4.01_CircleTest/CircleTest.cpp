#include <iostream>

class Circle {
public:
	double radius;
	Circle() {
		radius = 1.0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle c1;
	Circle c2(2.0);
	std::cout << "c1: r = " << c1.radius << ", area = " << c1.getArea() << std::endl;
	std::cout << "c2: r = " << c2.radius << ", area = " << c2.getArea() << std::endl;
	c2.radius = 3.0;
	std::cout << "c3: r = " << c2.radius << ", area = " << c2.getArea() << std::endl;
	return 0;
}
