#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute)
{
	if(gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if(gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	this->name = name;
	this->gradeSign = gradeSign;
	this->gradeExecute = gradeExecute;
	this->isSigned = false;
}

Form::Form(Form &other)
{
	*this = other;
}

Form::~Form()
{
	return ;
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << f.name <<" form: grade to sign: " << f.getGradeSign() << " grade to execute: " << f.getGradeExecute() 
	<< " | signed: "<<f.getIsSigned()<< std::endl;
	return out;
}

std::string Form::getName() const
{
	return this->name;
}

int Form::getGradeSign() const
{
	return this->gradeSign;
}
int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &b) 
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



Form::GradeTooHighException::GradeTooHighException() throw()
{
	return ;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("The Grade you gave was too high!");
}

Form::GradeTooLowException::GradeTooLowException() throw()
{
	return ;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("The Grade you gave was too low!");
}