#include "StripMiner.hpp"

StripMiner::StripMiner()
{
	return;
}

StripMiner::StripMiner(StripMiner &other)
{
	*this =  other;
}

StripMiner::~StripMiner()
{
	return ;
}

void StripMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* strip mining ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}