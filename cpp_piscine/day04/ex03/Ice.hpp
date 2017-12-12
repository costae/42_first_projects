#ifndef ICE_H
#define ICE_H
#include <iostream>
#include "AMateria.hpp"
class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice &other);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif