#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	this->hp = 80;
	this->type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int n)
{
	if (this->hp < n)
		this->hp = 0;
	else
		this->hp-=n;
}
