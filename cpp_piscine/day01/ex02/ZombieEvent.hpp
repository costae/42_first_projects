#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		std::string type;
		void setZombieType(std::string type);
		Zombie  *newZombie(std::string name);
		ZombieEvent();
		~ZombieEvent();
// 		gen_random(const int len);
		void randomChump();
};


#endif