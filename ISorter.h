#pragma once
#include "Sequence.h"

template<typename T> class ISorter
{
public:
    virtual Sequence<T>* sort(const Sequence<T>& input, int (*comp)(const T&, const T&)) = 0;
};
