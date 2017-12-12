#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	this->name = "Power Fist";
	this->damage = 50;
	this->apcost = 8;
	return ;
}

PowerFist::PowerFist(PowerFist &other)
{
	*this = other;
}

PowerFist::~PowerFist()
{
	std::cout << "MAMAMIA" << std::endl;
	return;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}