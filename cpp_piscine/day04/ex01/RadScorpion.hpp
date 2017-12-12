#ifndef RAD_H
#define RAD_H
#include "Enemy.hpp"
class RadScorpion: public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion &other);
	virtual ~RadScorpion();
	virtual void takeDamage(int n);
};
#endif