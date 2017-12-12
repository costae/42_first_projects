#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->name = "Robotomy Request Form";
	this->gradeSign = 72;
	this->gradeExecute = 45;
	this->target= target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(){return;}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}
void RobotomyRequestForm::beSigned(Bureaucrat &b) 
{
	std::cout << "Robotomy is signed by " << b.getName() << std::endl;
	if(b.getGrade() > this->getGradeSign())
	{
		b.signForm(false, this->name);
		return;
		// throw Form::GradeTooLowException();
	}
	this->isSigned = true;
	b.signForm(true, this->name);
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	std::cout << "Robotomy is executed by " << b.getName() << std::endl;
	if(b.getGrade() > this->gradeExecute )
		throw(Form::GradeTooLowException());
	std:: cout << b.getName() << " executes " << this->getName() << std::endl;
	std::cout << "* drill drill drill drill *" << std::endl;
	if (rand()% 2 == 0)
		std::cout << this->target <<" has been Robotomized successfully" << std::endl;
	else
		std::cout << "It's a failure!" << std::endl;
}