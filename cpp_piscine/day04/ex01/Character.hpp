#ifndef CHARACTER_H
# define CHARACTER_H
# include <cstdlib>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character
{
public:
	Character(std::string name);
	Character(Character &other);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;

	std::string name;
	int apPoints;
	AWeapon *myWeapon;
};

std::ostream& operator<<(std::ostream& out, const Character& f);

#endif