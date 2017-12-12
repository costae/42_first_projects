#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->name = "Plasma Rifle";
	this->damage = 21;
	this->apcost = 5;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &other)
{
	*this = other;
}

PlasmaRifle::~PlasmaRifle()
{
	return;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}