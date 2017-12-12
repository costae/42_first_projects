#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(NULL));
	FragTrap unu("terminator");
	FragTrap doi(unu);
	FragTrap trei("exterminator");

	doi.vaulthunter_dot_exe(trei.name);
	trei.takeDamage(30);
	trei.beRepaired(15);
	unu.rangedAttack(trei.name);
	doi.meleeAttack(trei.name);

	ScavTrap one("scavarodka");
	ScavTrap two(one);
	ScavTrap three("Exscavator");

	two.challengeNewcomer(one.name);
	three.takeDamage(24);
	three.beRepaired(12);
	one.rangedAttack(three.name);
	one.meleeAttack(three.name);

	return 0;
}