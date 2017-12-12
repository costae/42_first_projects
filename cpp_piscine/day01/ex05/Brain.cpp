#include "Brain.hpp"

Brain::Brain(void) : size(1260)
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;
	std::string name = ss.str();
	this->adress = name;
	return;
}

std::string Brain::identify()
{
	return (this->adress);
}