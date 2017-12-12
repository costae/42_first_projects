#ifndef STRIP_H
#define STRIP_H
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"
#include <iostream>

class StripMiner : public IMiningLaser
{
public:
	StripMiner();
	StripMiner(StripMiner &other);
	~StripMiner();

	virtual void mine(IAsteroid* asteroid);
	
};


#endif