#ifndef OFFICE_H
#define OFFICE_H
#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

class OfficeBlock
{
public:
	OfficeBlock(Intern *intern, Bureaucrat *signing, Bureaucrat *executive);
	OfficeBlock();
	~OfficeBlock();
	void setIntern(Intern intern);
	void setSigner(Bureaucrat signing);
	void setExecutor(Bureaucrat executive);
	void doBureaucracy(std::string name, std::string target);

	Intern *intern;
	Bureaucrat *signing;
	Bureaucrat *executive;
};

#endif