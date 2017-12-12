#ifndef ROBOTOMY_H
#define ROBOTOMY_H
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &other);
	~RobotomyRequestForm();
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &b);
	void beSigned(Bureaucrat &b); 
private:
	std::string target;
};

#endif