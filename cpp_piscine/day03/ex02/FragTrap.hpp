#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include <stdlib.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string const name);
	FragTrap(FragTrap &other);
	~FragTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif