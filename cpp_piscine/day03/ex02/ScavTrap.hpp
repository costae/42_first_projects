#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap &scav);
	~ScavTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void challengeNewcomer(std::string const &target);
	
};

#endif