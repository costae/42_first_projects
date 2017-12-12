#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->n = N;
	const char *names[] = {"asdf", "yjhyjy", "costea", "victor", "sasa", "dana"};
	int i = 0;
	
	this->zombie = new Zombie*[this->n];
	for (int i = 0; i < this->n; i++)
		this->zombie[i] = new Zombie("petrosean", names[rand() % 7]);
		return ;
}
void ZombieHorde::announce(void)
{
	int i = 0;
	while (i < this->n)
	{
		this->zombie[i]->announce();
		i++;
	}
}
ZombieHorde::~ZombieHorde(void)
{
	for (int i= 0; i< this->n; i++)
		delete  this->zombie[i];
	delete this->zombie;
	return ;
}