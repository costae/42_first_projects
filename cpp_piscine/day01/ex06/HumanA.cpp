#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
	return ;
}

HumanA::~HumanA(){return ;}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
	return ;
}