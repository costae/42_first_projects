#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): name(name), title(title)
{
	std::cout << this->name<<", "<< this->title <<", is born !"<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer &other)
{
	*this=other;
}

Sorcerer::~Sorcerer()
{
	std::cout <<  this->name<<", "<< this->title <<", is dead. Consequences will never be the same !"<< std::endl;
}

std::ostream& operator<<(std::ostream& out, const Sorcerer& f)
{
   return out << "I am "<<f.name<<", "<<f.title<<", and I like ponies !" << std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	// std::cout << victim.name<<" has been turned into a cute little sheep !"<< std::endl;
	victim.getPolymorphed();
}

// void Sorcerer::polymorph(Peon const &peon) const
// {
// 	std::cout << peon.name << " has been turned into a pink pony !"<< std::endl;
// }
