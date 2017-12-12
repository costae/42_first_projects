#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	this->hp = 170;
	this->type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int n)
{
	if(n < 3)
		return ;
	if(this->hp < n - 3)
		this->hp = 0;
	else
		this->hp -= (n - 3);
}