#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
	return;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner &other)
{
	*this =  other;
}

DeepCoreMiner::~DeepCoreMiner()
{
	return ;
}

void DeepCoreMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
}