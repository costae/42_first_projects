#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	this->name = name;
	// std::cout << "Some random victim called "<<this->name<<" just popped !"<<std::endl;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon &other): Victim("default")
{
	*this=other;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	// std::cout << "Victim "<<this->name<<" just died for no apparent reason !"<< std::endl;
}

std::ostream& operator<<(std::ostream& out, const Peon& f)
{
   return out <<"I'm "<<f.name<<" and I like otters !"<< std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}