#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	this->name = "Presidential Pardon Form";
	this->gradeSign = 25;
	this->gradeExecute = 5;
	this->target= target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
	*this = other;
}
void PresidentialPardonForm::beSigned(Bureaucrat &b) 
{
	if(b.getGrade() > this->getGradeSign())
	{
		b.signForm(false, this->name);
		return;
		// throw Form::GradeTooLowException();
	}
	this->isSigned = true;
	b.signForm(true, this->name);
}
PresidentialPardonForm::~PresidentialPardonForm(){return;}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &b)
{
	if(b.getGrade() > this->gradeExecute )
		throw(Form::GradeTooLowException());
	std:: cout << b.getName() << " executes " << this->getName() << std::endl;
	std::cout << this->target<<" has been pardoned by Zafod Beeblebrox." << std::endl;
}