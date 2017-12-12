#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->enp=50;
	this->max_enp=50;
	this->lvl = 1;
	this->name = name;
	this->mel_dam=20;
	this->ran_at_dam=15;
	this->dam_red=3;
	std::cout << "SCAVTRAP { " << this->name << " } is born!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scav)
{
	*this=scav;
	std::cout << "COPY SCAVTRAP { " << this->name << " } is born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAVTRAP "<< this->name <<" is dead" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAVTRAP " << this->name << " attacks " << target << " at range, causing " << this->ran_at_dam << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAVTRAP " << this->name << " attacks " << target << " at range, causing " << this->mel_dam << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(this->hp < amount)
	{
		this->hp = 0;
		std::cout << "You killed me!" << std::endl;
	}
	else if (amount > this->dam_red)
	{
		this->hp -= amount;
		this->hp += this->dam_red;
		std::cout << "I took damage: -[ " << amount - this->dam_red << " ]" << std::endl;
	}
	else
		std::cout << "I took damage from a newbie, so I didn't , LOL" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hp +=amount;
	if (this->hp >= this->max_hp)
		this->hp = this->max_hp;
	std::cout << "I've been repaired with " << amount << " hp" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string str[5]={"ice_bucket", "bottle_flip", "spin_aroun_your_neck", "fatality", "magic"};
	
	std::cout << "I challenge "  << target << " to do " << str[rand() % 5] << " challenge" << std::endl;
}