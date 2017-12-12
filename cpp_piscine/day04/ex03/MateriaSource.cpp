#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	this->head = NULL;
	this->tail = NULL;
	this->maxMateria = 4;
	this->nrMateria = 0;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &other)
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

MateriaSource::~MateriaSource()
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

void MateriaSource::learnMateria(AMateria* mat)
{
	if(this->nrMateria == this->maxMateria)
		return;

	if(this->head == NULL)
	{
		this->head = new Inventory();
		this->head->materia = mat;
		this->head->next = NULL;
		this->tail = this->head;
	}
	else
	{
		this->tail->next = new Inventory();
		this->tail = this->tail->next;
		this->tail->materia = mat;
		this->tail->next = NULL;
	}
	this->nrMateria++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	Inventory *temp = this->head;
	while(temp)
	{
		if(temp->materia->type == type)
			return temp->materia->clone();
		temp = temp->next;
	}
	return NULL;
}