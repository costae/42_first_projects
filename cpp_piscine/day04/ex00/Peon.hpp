#ifndef PEON_H
#define PEON_H
#include "Victim.hpp"
#include <iostream>

class Peon: public Victim
{
public:
	Peon(std::string name);
	Peon(Peon &other);
	~Peon();
	virtual void getPolymorphed() const;
};
std::ostream& operator<<(std::ostream& out, const Peon& f);

#endif