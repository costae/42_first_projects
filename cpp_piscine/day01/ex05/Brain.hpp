#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>

class Brain 
{
	public:
		int size;
		std::string adress;		
		Brain();
		std::string identify();
};

#endif