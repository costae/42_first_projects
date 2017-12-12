#ifndef PLASMA_H
#define PLASMA_H
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle &other);
	~PlasmaRifle();

	void virtual attack() const;
	
};

#endif