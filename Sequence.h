#pragma once
#include <iostream>

template <class T> class Sequence
{
public:
	virtual T& get(int index) const = 0;
	virtual int getLength() const = 0;
	virtual T& operator[](int index) = 0;
	virtual void set(int index, const T& value) = 0;
	virtual void append(const T& item) = 0;

};