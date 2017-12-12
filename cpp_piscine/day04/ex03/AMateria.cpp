#include "AMateria.hpp"

AMateria::AMateria()
{
	return;
}
 
AMateria::AMateria(std::string const & type)
{
	this->type=type;
	this->xp = 0;
}

AMateria::AMateria(AMateria & other)
{
	*this = other;
}

AMateria::~AMateria()
{
	return;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->xp;
}

void AMateria::use(ICharacter& target)
{
	this->xp+=10;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	return *this;
}