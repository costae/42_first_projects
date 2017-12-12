#include "Human.hpp"

Human::Human(void)
{
	Brain *brain = new Brain();
	this->brain = *brain;
}

std::string Human::identify()
{
	return (this->brain.identify());
}

Brain Human::getBrain()
{
	return (this->brain);
}