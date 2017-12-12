#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const name): FragTrap(name), NinjaTrap(name)
{
	this->name = name;
	// FragTrap temp1 = FragTrap("temp1");
	// NinjaTrap temp2 = NinjaTrap("temp2");
	this->hp = FragTrap::hp;
	this->max_hp = FragTrap::max_hp;
	this->enp=NinjaTrap::enp;
	this->max_enp=NinjaTrap::max_enp;
	this->lvl = 1;
	this->mel_dam=NinjaTrap::mel_dam;
	this->ran_at_dam=FragTrap::ran_at_dam;
	this->dam_red=FragTrap::dam_red;
	std::cout<< "Constructor of Supertrap called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &other): FragTrap(other), NinjaTrap(other)
{
	*this=other;
	std::cout<< "COPY Constructor of Supertrap called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout<< "Destructor of Supertrap called" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}