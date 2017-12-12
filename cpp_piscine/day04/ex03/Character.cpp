#include "Character.hpp"


Character::Character(std::string name): maxMateria(4)
{
	this->name = name;
	this->head = NULL;
	this->tail = NULL;
	this->nrMateria = 0;
}

Character::Character(Character &other): maxMateria(4)
{
	Inventory *temp = this->head;
	while(this->head)
	{
		temp = this->head;
		this->head = this->head->next;
		delete temp;
	}
	*this = other;
}

Character::~Character()
{
	Inventory *temp = this->head;
	while(this->head)
	{
		temp = this->head;
		this->head = this->head->next;
		delete temp;
	}
	return ;
}

std::string Character::getName()
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if(this->nrMateria == this->maxMateria)
		return;

	if(this->head == NULL)
	{
		this->head = new Inventory();
		this->head->materia = m;
		this->head->next = NULL;
		this->tail = this->head;
	}
	else
	{
		this->tail->next = new Inventory();
		this->tail = this->tail->next;
		this->tail->materia = m;
		this->tail->next = NULL;
	}
	this->nrMateria++;
}

void Character::unequip(int idx)
{
	Inventory *temp = this->head;
	Inventory *prev;
	if(idx >= this->nrMateria)
		return ;
	for(int i=0; i < idx; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		delete temp;
		prev->next = NULL;
	}
	else
	{
		prev->next = temp->next;
		delete temp;
	}
	this->nrMateria--;
}

void Character::use(int idx, ICharacter& target)
{
	Inventory *temp = this->head;
	if(idx >= this->nrMateria)
		return ;
	for(int i=0; i < idx; i++)
		temp = temp->next;
	temp->materia->use(target);
}