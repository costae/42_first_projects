#include "Victim.hpp"

Victim::Victim(std::string name): name(name)
{
	std::cout << "Some random victim called "<<this->name<<" just popped !"<<std::endl;
}

Victim::Victim(Victim &other)
{
	*this = other;
}

Victim::~Victim()
{
	std::cout << "Victim "<<this->name<<" just died for no apparent reason !"<< std::endl;
}

std::ostream& operator<<(std::ostream& out, const Victim& f)
{
   return out << "I am "<<f.name<<" and I like otters !" << std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << this->name <<" has been turned into a cute little sheep !" << std::endl;
}