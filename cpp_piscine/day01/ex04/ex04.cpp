#include <iostream>

int main()
{
    const char *str = "HI THIS IS BRAIN";
    const char *ptr = str;
    const char &ref = *str;
    std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	return (0);
}