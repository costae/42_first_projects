#ifndef PRESIDENTIAL_H
#define PRESIDENTIAL_H
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &other);
	~PresidentialPardonForm();
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &b);
	void beSigned(Bureaucrat &b);
private:
	std::string target;
};

#endif