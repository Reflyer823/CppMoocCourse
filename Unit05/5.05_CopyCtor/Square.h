/*
 * Square.h
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>

class Square {
private:
	double side;
	static int numberOfObjects;
public:
	Square() : Square(1.0) {}

	Square(double side) : side{side} {
		numberOfObjects++;
	}

	Square(const Square& s) : Square(s.side) {
		std::cout << "Square(const Square& s) is invoked." << std::endl;
	}

	~Square() {
		numberOfObjects--;
	}

	static int getNumberOfObjects() {
		return numberOfObjects;
	}

	double getSide() const {
		return side;
	}

	void setSide(double side) {
		this->side = side;
	}

	double getArea() {
		return side * side;
	}
};

#endif /* SQUARE_H_ */
