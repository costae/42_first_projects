#include "Cure.hpp"

Cure::Cure()
{
	this->xp = 0;
	this->type = "cure";
}

Cure::Cure(Cure &other)
{
	*this = other;
}

Cure::~Cure()
{
	return ;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.name<< "'s wounds *" << std::endl;
}
