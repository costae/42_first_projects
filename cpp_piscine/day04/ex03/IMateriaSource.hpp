#ifndef IMATERIA_H
# define IMATERIA_H
#include <iostream>
#include "AMateria.hpp"
class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif