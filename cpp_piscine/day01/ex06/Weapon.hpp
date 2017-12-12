#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
class Weapon
{
public:
	std::string type;
	Weapon(std::string type);
	~Weapon();
	std::string& getType();
	void setType(std::string str);
};

#endif