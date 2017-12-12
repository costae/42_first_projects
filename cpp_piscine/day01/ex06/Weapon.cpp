#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type)
{
	return;
}

Weapon::~Weapon(){return;}

std::string& Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string str)
{
	this->type = str;
	return ;
}
