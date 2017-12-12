#ifndef PONY_CLASS_H
# define PONY_CLASS_H
#include <iostream>


class Pony
{
	public:
		Pony(std::string);
		~Pony();
};

void ponyOnTheHeap(std::string str);
void ponyOnTheStack(std::string str);
#endif