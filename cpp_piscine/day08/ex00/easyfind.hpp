#ifndef EASYFIND_H
#define EASYFIND_H
#include <iterator>
#include <iostream>
template <class T>
bool easyfind(T& list, int n)
{
	typename T::iterator i;

	for (i = list.begin(); i!=list.end(); ++i)
	{
		if (*i == n)
			return true;
	}
	// std::cout << "There is no such value in this container" << std::endl;
	return false;
}

#endif
