/*
 * RangeException.h
 *
 *  Created on: 2019年11月17日
 *      Author: Reflyer
 */

#ifndef RANGEEXCEPTION_H_
#define RANGEEXCEPTION_H_

#include <exception>

class RangeException : public std::out_of_range {
private:
	std::size_t dimension {3};
	int index {0};
public:
	RangeException(std::size_t dimension_, const int index_) :
		std::out_of_range{"vector index out of range"} {
			dimension = dimension_;
			index = index_;
		}

	std::size_t getDimension() const {
		return dimension;
	}

	int getIndex() const {
		return index;
	}
};

#endif /* RANGEEXCEPTION_H_ */
