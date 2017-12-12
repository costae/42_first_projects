#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->apPoints  = 40;
	this->myWeapon = NULL;
}

Character::Character(Character &other)
{
	*this = other;
}

Character::~Character()
{
	return ;
}

void Character::recoverAP()
{
	if(this->apPoints < 40)
		this->apPoints+=10;
}

void Character::equip(AWeapon *weapon)
{
	this->myWeapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if(this->myWeapon == NULL || enemy == NULL)
		return ;

	if (this->apPoints < this->myWeapon->apcost)
		return;
	else
	{
		std::cout << this->name << " attacks " << enemy->type << " with a " 
		<< this->myWeapon->name << std::endl;
		this->apPoints -= this->myWeapon->apcost;
		this->myWeapon->attack();
		if(enemy->hp <= this->myWeapon->damage)
		{
			// std::cout << "DEAD" << std::endl;
			// delete enemy;
		}
		else
			enemy->hp -= this->myWeapon->damage;
	}
}

std::ostream& operator<<(std::ostream& out, const Character& f)
{
	if(f.myWeapon == NULL)
		out << f.name << " has " << f.apPoints << " AP and is unarmed" 
		<< std::endl;
	else
		out << f.name << " has " << f.apPoints << " AP and wields a " <<
		f.myWeapon->name << std::endl;

	return out;
}