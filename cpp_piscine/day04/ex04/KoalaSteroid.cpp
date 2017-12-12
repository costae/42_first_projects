#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{
	this->name = "KoalaSteroid";
	return;
}

KoalaSteroid::KoalaSteroid(KoalaSteroid &other)
{
	*this = other;
}

KoalaSteroid::~KoalaSteroid()
{
	return ; 
}

std::string KoalaSteroid::beMined(DeepCoreMiner *miner) const
{
	return "Zazium";
}

std::string KoalaSteroid::beMined(StripMiner *miner) const
{
	return "Krpite";
}

std::string KoalaSteroid::getName() const
{
	return this->name;
}
