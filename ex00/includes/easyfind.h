#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator  easyfind(T t, int nb)
{
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), nb);
	if (it == t.end())
		throw std::runtime_error("Couldn't find number");
	return it;
}

#endif
