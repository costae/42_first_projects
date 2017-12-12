#ifndef DEEPCORE_H
#define DEEPCORE_H
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>
class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner &other);
	~DeepCoreMiner();

	virtual void mine(IAsteroid* asteroid);
	
};

#endif