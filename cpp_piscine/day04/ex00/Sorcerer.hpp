#ifndef SORCERER_H
#define SORCERER_H
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
	std::string name;
	std::string title;
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer &other);
	~Sorcerer();
	void polymorph(Victim const &victim) const;
	// void polymorph(Peon const &peon) const;
};
std::ostream& operator<<(std::ostream& out, const Sorcerer& f);
#endif
