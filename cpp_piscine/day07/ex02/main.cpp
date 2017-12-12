#include <iostream>
#include <stdexcept>
#include <string>

#include "Array.cpp"

int main()
{
	{
	Array<int> a(42);
	a[3] = 42;
	Array<int> b(a);

	for (int i = 0; i < 42; ++i) {
		std::cout << b[i] << std::endl;
	}
	try {
		std::cout << "error index start" << std::endl;
		std::cout << a[42] << std::endl;
		std::cout << "error index end" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	}

	return 0;
};