#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(ClapTrap & other);
	~ClapTrap();

	int hp;
	int max_hp;
	int enp;
	int max_enp;
	int lvl;
	std::string name;
	int mel_dam;
	int ran_at_dam;
	int dam_red;

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif