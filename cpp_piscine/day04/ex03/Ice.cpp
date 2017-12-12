#include "Ice.hpp"

Ice::Ice()
{
	this->xp = 0;
	this->type = "ice";
}

Ice::Ice(Ice &other)
{
	*this = other;
}

Ice::~Ice()
{
	return ;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.name<< " *" << std::endl;
}
