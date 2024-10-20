#pragma once
template<typename T>
inline void swap(T& a, T& b)
{
	T buf = a;
	a = b;
	b = buf;
}
