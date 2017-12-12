#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{
	this->intern = NULL;
	this->signing = NULL;
	this->executive = NULL;
	return;
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signing, Bureaucrat *executive)
{
	this->intern = intern;
	this->signing = signing;
	this->executive = executive;
}

OfficeBlock::~OfficeBlock()
{
	return;
}

void OfficeBlock::setIntern(Intern intern)
{
	this->intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat signing)
{
	this->signing = &signing;
}

void OfficeBlock::setExecutor(Bureaucrat executive)
{
	this->executive = &executive;
}

void OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	Form *form = this->intern->makeForm(name, target);
	form->beSigned(*(this->signing));
	form->execute(*(this->executive));
}