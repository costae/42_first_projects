#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

// class ICharacter;
class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &other);
	~AMateria();

	AMateria& operator=(const AMateria& rhs);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
	int xp;
	std::string type;
};

#endif