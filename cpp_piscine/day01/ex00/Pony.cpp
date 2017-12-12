#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string str)
{
	std::cout << str << ", your god damn Pony was created. He is stupid. I hate ponies." << std::endl;
	std::cout << "Did I mention that hate ponies?" << std::endl;
	return;
}

Pony::~Pony()
{
	std::cout << "HELL YEAH! Your Pony died. Enjoy having no friends :)" << std::endl;
}

void ponyOnTheHeap(std::string str)
{
	Pony* pony = new Pony(str);
	delete pony;
}

void ponyOnTheStack(std::string str)
{
	Pony pony = Pony(str); 
}