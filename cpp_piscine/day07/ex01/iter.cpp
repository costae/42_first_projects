#include <cstdlib>
#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t len, void(*func)(const T&))
{
	for(size_t i = 0; i < len; ++i)
		func(arr[i]);
}

template <typename T>
void print(const T& x)
{
	std::cout << x << std::endl;
}

int main()
{
	int a[] = {0, 1, 2, 3, 4};
	std::string b[] = {"patzan", "mujik", "zveri"};

	iter(a, 5, print);
	iter(b, 3, print);
}