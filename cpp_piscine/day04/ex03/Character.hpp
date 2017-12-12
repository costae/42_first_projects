#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <stdlib.h>

typedef struct s_list
{
	int index;
	AMateria *materia;
	struct s_list *next;
}	Inventory;

class Character:	public ICharacter
{

public:
	std::string name;

	Character(std::string name);
	Character(Character &other);
	~Character();

	virtual std::string getName();
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
 
private:
	int maxMateria;
	int nrMateria;
	Inventory *head;
	Inventory *tail;
};

#endif