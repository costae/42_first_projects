#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie 
{
	public:
		std::string name;
		std::string type;
		Zombie(std::string type, std::string name);
		~Zombie();
		void announce();
};

#endif