
#ifndef INTERN_H
# define INTERN_H
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdlib.h>
class Intern
{
public:
	Intern();
	Intern(Intern &other);
	~Intern();
	Form *makeForm(std::string name, std::string target);
};
#endif