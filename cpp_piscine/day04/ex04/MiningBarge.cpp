#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	this->nrLaser = 0;
	this->maxLaser = 4;
	this->head = NULL;
	this->tail = NULL;
	return ;
}

MiningBarge::MiningBarge(MiningBarge &other)
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

MiningBarge::~MiningBarge()
{
	return ;
}

void MiningBarge::equip(IMiningLaser *las)
{
	if(this->nrLaser >= this->maxLaser)
		return ;
	if(this->head == NULL)
	{
		this->head = new Inventory();
		this->head->laser = las;
		this->head->next = NULL;
		this->tail = this->head;
	}
	else
	{
		this->tail->next = new Inventory();
		this->tail = this->tail->next;
		this->tail->laser = las;
		this->tail->next = NULL;
	}
	this->nrLaser++;
}

void MiningBarge::mine(IAsteroid *ast) const
{
	Inventory *temp = this->head;

	while(temp)
	{
		temp->laser->mine(ast);
		temp = temp -> next;
	}
}