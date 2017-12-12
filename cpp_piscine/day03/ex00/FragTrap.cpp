#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->enp=100;
	this->max_enp=100;
	this->lvl = 1;
	this->name = name;
	this->mel_dam=30;
	this->ran_at_dam=20;
	this->dam_red=5;
	std::cout << "TERMINATOR { " << this->name << " } is born!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other)
{
	*this=other;
	std::cout << "COPY TERMINATOR { " << this->name << " } is born!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Robot "<< this->name <<" is dead" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->ran_at_dam << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->mel_dam << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
	this->hp +=amount;
	if (this->hp >= this->max_hp)
		this->hp = this->max_hp;
	std::cout << "I've been repaired with " << amount << " hp" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string str[5]={"simple_attack", "sword_attack", "gun_attack", "fatality", "magic_fire"};
	if (this->enp < 25)
		std::cout << "I'm exhausted!" << std::endl;
	else
	{
		this->enp -=25;
		std::cout << "I used " << str[rand() % 5] << " against " << target << std::endl;
	}
}