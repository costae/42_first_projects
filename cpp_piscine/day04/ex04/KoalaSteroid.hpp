#ifndef KOALA_H
#define KOALA_H
#include "IAsteroid.hpp"


class KoalaSteroid : public IAsteroid
{
public:
	KoalaSteroid();
	KoalaSteroid(KoalaSteroid &other);
	~KoalaSteroid();
	virtual std::string beMined(DeepCoreMiner *miner) const;
	virtual std::string beMined(StripMiner *miner) const;
	virtual std::string getName() const;

};

#endif