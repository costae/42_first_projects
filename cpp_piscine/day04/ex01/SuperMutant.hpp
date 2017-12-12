#ifndef SUPER_H
#define SUPER_H
#include "Enemy.hpp"
class SuperMutant: public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant &other);
	~SuperMutant();
	virtual void takeDamage(int n);
};
#endif