#ifndef IMININGLASER_H
#define IMININGLASER_H
class IAsteroid;
class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid* asteroid) = 0;
};

#endif