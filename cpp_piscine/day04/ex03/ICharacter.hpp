#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
// #include "AMateria.hpp"
#include <iostream>
class AMateria;
class ICharacter
{
	public:
		std::string name;
		virtual ~ICharacter() {}
		virtual std::string getName() = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif