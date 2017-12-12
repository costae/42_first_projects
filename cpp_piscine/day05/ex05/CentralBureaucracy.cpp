#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	this->nrBur = 0;
	this->nrPeople = 0;
	this->nrBlock = 0;
	return;
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &other)
{
	*this = other;
}

CentralBureaucracy::~CentralBureaucracy()
{
	return ;
}

void CentralBureaucracy::queueUp(std::string target)
{
	str[this->nrPeople] = target;
	this->nrPeople++;
}

void CentralBureaucracy::feed(Bureaucrat *signing, Bureaucrat *executor)
{
	if(this->nrPeople == 0)
	{
		str[0] = "default"; this->nrPeople++;
	}
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	if(this->nrBlock == 20)
		return ;
	Intern *intern = new Intern();
	OfficeBlock *officeBlock = new OfficeBlock(intern, signing, executor);
	officeBlock->doBureaucracy(names[rand()%3], str[rand() % nrPeople]);
	this->nrBlock++;
}

