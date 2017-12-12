#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hp = 0;
	this->max_hp = 0;
	this->enp=0;
	this->max_enp=0;
	this->lvl = 0;
	this->name = "";
	this->mel_dam=0;
	this->ran_at_dam=0;
	this->dam_red=0;
	std::cout << "Claptrap constructor called!"<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap & other)
{
	*this = other;
	std::cout << "Copy Claptrap constructor called!"<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hp +=amount;
	if (this->hp >= this->max_hp)
		this->hp = this->max_hp;
	std::cout << "I've been repaired with " << amount << " hp" << std::endl;
}