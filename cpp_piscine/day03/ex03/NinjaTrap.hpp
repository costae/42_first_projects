#ifndef NINJATRAP_H
#define NINJATRAP_H
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string const name);
	NinjaTrap(NinjaTrap &other);
	~NinjaTrap();
	
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void ninjaShoebox(FragTrap &frag);
	void ninjaShoebox(ScavTrap &scav);
	void ninjaShoebox(NinjaTrap &ninja);
};


#endif