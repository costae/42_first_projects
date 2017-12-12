#include <iostream>
#include "Pony.hpp"

 int main()
 {
 	std::string Name;

 	std::cout << "Enter the name of your god damn Pony: " << std::endl;
 	std::cin >> Name;
 	ponyOnTheHeap(Name);
 	ponyOnTheStack(Name);
 	return (0);
 }