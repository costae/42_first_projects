#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "Your " << this->type << " type zombie, who's name was " << this->name << " said \"Braiiiiiiiiinnnnnzzzzz\"" << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
{
    this->name = name;
    this->type = type;
	announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Your " << this->type << " type zombie, who's name was " << this->name << "is dead" << std::endl;
	return ;
}