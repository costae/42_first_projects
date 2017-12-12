#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
	this->name = name;
	return;
}

AsteroKreog::AsteroKreog(AsteroKreog &other)
{
	*this = other;
}

AsteroKreog::~AsteroKreog()
{
	return;
}

std::string AsteroKreog::beMined(DeepCoreMiner *miner) const
{
	return "Thorite";
}

std::string AsteroKreog::beMined(StripMiner *miner) const
{
	return "Flavium";
}

std::string AsteroKreog::getName() const
{
	return this->name;
}