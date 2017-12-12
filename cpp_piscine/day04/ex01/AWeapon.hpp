#ifndef AWEAPON_H
#define AWEAPON_H
#include <iostream>
#include <string>
class AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon();
	AWeapon(AWeapon &other);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	~AWeapon();

	std::string name;
	int apcost;
	int damage;
	
};


#endif