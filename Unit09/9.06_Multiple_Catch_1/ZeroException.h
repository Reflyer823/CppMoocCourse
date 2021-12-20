/*
 * ZeroException.h
 *
 *  Created on: 2019年11月18日
 *      Author: Reflyer
 */

#ifndef ZEROEXCEPTION_H_
#define ZEROEXCEPTION_H_

#include <exception>

class ZeroException : public std::runtime_error {
public:
	ZeroException() : std::runtime_error("Divided by 0.0") {}
	ZeroException(const char* msg) : std::runtime_error(msg) {}
};

#endif /* ZEROEXCEPTION_H_ */
