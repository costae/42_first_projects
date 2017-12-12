#ifndef MININGBARGE_H
#define MININGBARGE_H
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
typedef struct s_list
{
	IMiningLaser *laser;
	struct s_list *next;
}	Inventory;

class MiningBarge
{

public:
	MiningBarge();
	MiningBarge(MiningBarge &other);
	~MiningBarge();
	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;

private:
	Inventory *head;
	Inventory *tail;
	int nrLaser;
	int maxLaser;
};

#endif