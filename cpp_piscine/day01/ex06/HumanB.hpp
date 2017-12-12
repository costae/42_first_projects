#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
private:
	Weapon *weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
	std::string name;
};

#endif