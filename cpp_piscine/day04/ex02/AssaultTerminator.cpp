#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& src)
{
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& rhs)
{
	(void)rhs;
	return *this;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	return new AssaultTerminator;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}