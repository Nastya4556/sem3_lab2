#pragma once
#include "Sequence.h"
#include "DynamicArray.h"
#include "LinkedList.h"
#include "Swap.h"

template <typename T>
Sequence<T>* shakerSort(const Sequence<T>& input, int (*comp)(const T&, const T&)) {
    int left = 0;
    int right = input.getLength() - 1;

    Sequence<T>* result = new DynamicArray<T>(input.getLength());
    for (int i = 0; i < input.getLength(); i++) {
        (*result)[i] = input.get(i);
    }

    while (left <= right) {
        for (int i = left; i < right; i++) {
            if (comp((*result)[i], (*result)[i + 1]) > 0) {
                swap((*result)[i], (*result)[i + 1]);
            }
        }
        right--;

        for (int i = right; i > left; i--) {
            if (comp((*result)[i - 1], (*result)[i]) > 0) {
                swap((*result)[i - 1], (*result)[i]);
            }
        }
        left++;
    }

    return result;
}





