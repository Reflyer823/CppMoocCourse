/*
 * GenericStack.h
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#ifndef GENERICSTACK_H_
#define GENERICSTACK_H_

template <typename T>
class Stack {
private:
	T elements[100];
	int size{0};
public:
	Stack();
	bool empty() const;
	T peek() const;
	T push(T value);
	T pop();
	int getSize() const;
};

template <typename T>
Stack<T>::Stack() {
	for (auto& e : elements) {
		e = 0;
	}
}

template <typename T>
bool Stack<T>::empty() const {
	return (size == 0);
}

template <typename T>
T Stack<T>::peek() const {
	return elements[size - 1];
}

template <typename T>
T Stack<T>::push(T value) {
	elements[size++] = value;
	return value;
}

template <typename T>
T Stack<T>::pop() {
	return elements[--size];
}

template <typename T>
int Stack<T>::getSize() const {
	return size;
}

#endif /* GENERICSTACK_H_ */
