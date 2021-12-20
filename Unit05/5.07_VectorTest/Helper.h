/*
 * Helper.h
 *
 *  Created on: 2019年10月26日
 *      Author: Reflyer
 */

#ifndef HELPER_H_
#define HELPER_H_

#include <iostream>
#include <vector>

#define PRINT(x) std::cout << #x << ": " << x << std::endl;

template <typename T>
std::ostream& operator<<(std::ostream& s, std::vector<T> v) {
	bool first = true;
	s.put('[');
	for(const auto& e : v) {
		s << (first ? (first = false, "") : ", ") << e;
	}
	s.put(']');
	return s;
}

#endif /* HELPER_H_ */
