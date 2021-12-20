/*
 * CtorChain.cpp
 *
 *  Created on: 2019年10月31日
 *      Author: Reflyer
 */

#include <iostream>

class Computer {
public:
	Computer() { std::cout << "Computer()" << std::endl; }
	~Computer() { std::cout << "~Computer()" << std::endl; }
};

class PC : public Computer {
public:
	PC() { std::cout << "PC()" << std::endl; }
	~PC() { std::cout << "~PC()" << std::endl; }
};

class Desktop : public PC {
public:
	Desktop() { std::cout << "Desktop()" << std::endl; }
	~Desktop() { std::cout << "~Desktop()" << std::endl; }
};

class Camera {
public:
	Camera() { std::cout << "Embedded Camera()" << std::endl; }
	~Camera() { std::cout << "Embedded ~Camera()" << std::endl; }
};

class Laptop : public PC {
private:
	Camera c;
public:
	Laptop() { std::cout << "Laptop()" << std::endl; }
	~Laptop() { std::cout << "~Laptop()" << std::endl; }
};

int main() {
	Desktop d;
	Laptop l;
	return 0;
}
