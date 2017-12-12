#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern &other)
{
	*this = other;
}

Intern::~Intern()
{
	return ;
}

Form * Intern::makeForm(std::string name, std::string target)
{
	if(name == "robotomy request")
		return new RobotomyRequestForm(target);
	else if(name == "shrubbery creation")
		return new ShrubberyCreationForm(target);
	else if(name == "presidential pardon")
		return new PresidentialPardonForm(target);
	else
		std::cout << "Wrong name!" << std::endl;
	return NULL;
}