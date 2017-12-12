#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include <iostream>
#include "Zombie.hpp"
#include <stdlib.h>

class ZombieHorde
{
	public:
		Zombie **zombie;
		int n;
		void announce();
		ZombieHorde(int N);
		~ZombieHorde();
};

#endif