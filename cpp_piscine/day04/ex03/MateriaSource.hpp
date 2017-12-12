#ifndef MATSOURCE_H
# define MATSOURCE_H
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{

typedef struct s_list
{
	int index;
	AMateria *materia;
	struct s_list *next;
}	Inventory;

public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

private:
	int maxMateria;
	int nrMateria;
	Inventory *head;
	Inventory *tail;
};

#endif