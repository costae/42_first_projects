#ifndef SHRUBBERY_H
#define SHRUBBERY_H
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &b) const;
	void beSigned(Bureaucrat &b);
private:
	std::string target;
};

#endif