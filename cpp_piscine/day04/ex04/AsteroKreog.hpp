#ifndef KREOG_H
#define KREOG_H
#include <iostream>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
class AsteroKreog : public IAsteroid
{
public:
	AsteroKreog();
	AsteroKreog(AsteroKreog &other);
	~AsteroKreog();
	virtual std::string beMined(DeepCoreMiner *miner) const;
	virtual std::string beMined(StripMiner *miner) const;
	virtual std::string getName() const;

};

#endif