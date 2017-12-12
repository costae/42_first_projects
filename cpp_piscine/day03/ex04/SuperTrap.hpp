#ifndef SUPERTRAP_H
#define SUPERTRAP_H
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string const name);
	SuperTrap(SuperTrap &other);
	~SuperTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif