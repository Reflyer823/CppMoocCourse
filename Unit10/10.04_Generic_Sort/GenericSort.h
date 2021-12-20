/*
 * GenericSort.h
 *
 *  Created on: 2019年11月24日
 *      Author: Reflyer
 */

#ifndef GENERICSORT_H_
#define GENERICSORT_H_

#include <iostream>
#include <array>

template <typename T>
void SelectionSort(T list[], const std::size_t size) {
	for (std::size_t i = 0; i < size - 1; i++) {
		T min = list[i];
		std::size_t min_index = i;
		for (std::size_t j = i + 1; j < size; j++) {
			if (list[j] < min) {
				min = list[j];
				min_index = j;
			}
		}
		if (min_index != i) {
			list[min_index] = list[i];
			list[i] = min;
		}
	}
}

template <typename T, std::size_t N>
void SelectionSort(std::array<T, N>& list) {
	constexpr std::size_t size = N;
	for (std::size_t i = 0; i < size - 1; i++) {
		T min = list[i];
		std::size_t min_index = i;
		for (std::size_t j = i + 1; j < size; j++) {
			if (list[j] < min) {
				min = list[j];
				min_index = j;
			}
		}
		if (min_index != i) {
			list[min_index] = list[i];
			list[i] = min;
		}
	}
}

#endif /* GENERICSORT_H_ */
