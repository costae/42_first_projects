#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const name)
{
	this->hp = 60;
	this->max_hp = 60;
	this->enp=120;
	this->max_enp=120;
	this->lvl = 1;
	this->name = name;
	this->mel_dam=60;
	this->ran_at_dam=5;
	this->dam_red=0;
	std::cout << "NINJA { " << this->name << " } is born!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &other)
{
	*this=other;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJA { " << this->name << " } is dead!" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJA " << this->name << " attacks " << target << " at range, causing " << this->ran_at_dam << " points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJA " << this->name << " attacks " << target << " at range, causing " << this->mel_dam << " points of damage !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "FragTrap "<<frag.name << " was attacked using ninjaShoebox!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << "ScavTrap "<<scav.name << " was attacked using ninjaShoebox!" << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "NinjaTrap "<<ninja.name << " was attacked using ninjaShoebox!" << std::endl;
}