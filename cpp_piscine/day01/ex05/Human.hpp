#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human 
{
	public:
		Brain brain;
		
		Brain getBrain();
		Human();
		std::string identify();
};

#endif