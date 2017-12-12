#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

class ScavTrap
{
public:
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap &scav);
	~ScavTrap();
	int hp;
	int max_hp;
	int enp;
	int max_enp;
	int lvl;
	std::string name;
	int mel_dam;
	int ran_at_dam;
	int dam_red;

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);
	
};

#endif