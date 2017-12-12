#include "ZombieEvent.hpp"

int main(void)
{
	Zombie zombie("fdsffdd", "fasfasdfadsdf");
	ZombieEvent *zombieEvent = new ZombieEvent();
	zombieEvent->setZombieType("safa");
	Zombie *test = zombieEvent->newZombie("adsfd");
	zombieEvent->randomChump();
	delete zombieEvent;
	delete test;
	return (0);
}