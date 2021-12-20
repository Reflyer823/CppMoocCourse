/*
 * StackOfIntegers.h
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#ifndef STACKOFINTEGERS_H_
#define STACKOFINTEGERS_H_

#include <iostream>

class Stack {
private:
	int elements[100];
	int size{0};
public:
	Stack();
	bool empty() const;
	int peek() const;
	int push(int value);
	int pop();
	int getSize() const;
	friend std::ostream& operator<<(std::ostream& s, const Stack& stack);
};

#endif /* STACKOFINTEGERS_H_ */
