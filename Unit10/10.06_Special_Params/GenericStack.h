/*
 * GenericStack.h
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#ifndef GENERICSTACK_H_
#define GENERICSTACK_H_

template <typename T = char, int N = 100>
class Stack {
private:
	T elements[ N ];
	int size{0};
public:
	Stack();
	bool empty() const;
	T peek() const;
	T push(T value);
	T pop();
	int getSize() const;
};

template <typename T, int N>
Stack<T, N>::Stack() {
	for (auto& e : elements) {
		e = 0;
	}
}

template <typename T, int N>
bool Stack<T, N>::empty() const {
	return (size == 0);
}

template <typename T, int N>
T Stack<T, N>::peek() const {
	return elements[size - 1];
}

template <typename T, int N>
T Stack<T, N>::push(T value) {
	elements[size++] = value;
	return value;
}

template <typename T, int N>
T Stack<T, N>::pop() {
	return elements[--size];
}

template <typename T, int N>
int Stack<T, N>::getSize() const {
	return size;
}

#endif /* GENERICSTACK_H_ */
