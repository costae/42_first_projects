#include <iostream>
#include <vector>

#include "easyfind.hpp"

int	main()
{
	std::vector<int> myIntVector;
	myIntVector.push_back(1);
	myIntVector.push_back(4);
	myIntVector.push_back(8);

	std::cout << easyfind(myIntVector, 42) << std::endl;
	std::cout << easyfind(myIntVector, 4) << std::endl;

	return 0;
}