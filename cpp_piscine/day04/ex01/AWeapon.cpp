#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this-> damage = damage;
	return;
}

AWeapon::AWeapon(AWeapon &other)
{
	*this = other;
}

AWeapon::AWeapon()
{
	return;
}

AWeapon::~AWeapon()
{
	return;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

std::string AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getDamage() const
{
	return this->damage;
}
