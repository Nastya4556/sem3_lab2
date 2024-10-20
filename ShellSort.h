#pragma once
#include "Sequence.h"
#include "DynamicArray.h"
#include "LinkedList.h"

template<typename T>
Sequence<T>* shellSort(Sequence<T>& sequence, int (*cmp)(const T&, const T&))
{
    int size = sequence.getLength();
    Sequence<T>* result = new DynamicArray<T>(sequence.getLength());
    for (int i = 0; i < size; i++)
    {
        (*result)[i] = sequence.get(i);
    }
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            T temp = result->get(i);
            int j;
            for (j = i; j >= gap && cmp(result->get(j - gap), temp) > 0; j -= gap)
            {
                result->set(j, result->get(j - gap));
            }
            result->set(j, temp);
        }
    }
    return result;
}



