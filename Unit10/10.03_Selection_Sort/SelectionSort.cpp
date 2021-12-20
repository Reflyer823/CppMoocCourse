/*
 * SelectionSort.cpp
 *
 *  Created on: 2019年11月24日
 *      Author: Reflyer
 */

#include "SelectionSort.h"

void SelectionSort(double list[], std::size_t size) {
	for (std::size_t i = 0; i < size - 1; i++) {
		double min = list[i];
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
