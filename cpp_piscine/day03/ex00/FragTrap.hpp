#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include <stdlib.h>

class FragTrap
{
public:
	FragTrap(std::string const name);
	FragTrap(FragTrap &other);
	~FragTrap();
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
	void vaulthunter_dot_exe(std::string const &target);
};

#endif