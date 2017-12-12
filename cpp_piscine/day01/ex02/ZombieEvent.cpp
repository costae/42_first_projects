#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(this->type, name);
	return (z);
}

void ZombieEvent::randomChump(void)
{
    const char *names[] = {"asdf", "yjhyjy", "costea", "victor", "sasa", "dana"};

    Zombie costea(this->type, names[rand() % 7]);
}
ZombieEvent::ZombieEvent()
{
    return;
}
ZombieEvent::~ZombieEvent()
{
    return ;
}