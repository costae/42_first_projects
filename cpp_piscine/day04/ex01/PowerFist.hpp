#ifndef POWERFIST_H
#define POWERFIST_H
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist &other);
	~PowerFist();

	void virtual attack() const;
	
};

#endif