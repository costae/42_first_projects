#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	return ;
}

HumanB::~HumanB(){return ;}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->type << std::endl;
	return ;
}