#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if(grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if(grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->name = name;
	this->grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::increment()
{
	if(this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement()
{
	if(this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
	return ;
}

// Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException &other) throw()
// {
// 	return;
// }

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Grade you gave was too high!");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
	return ;
}

// Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException &other) throw()
// {
// 	return;
// }

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade you gave was too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur)
{
	os << bur.name << ", Bureaucrat grade " << bur.grade;
	return os;
}

void Bureaucrat::signForm(bool succes, std::string name)
{
	if (succes)
		std::cout << this->getName() << " signs form " << name << std::endl;
	else
		std::cout << this->getName() << " can not sign form " << name << std::endl;

}

void Bureaucrat::executeForm(Form const & form) const
{
	form.execute(*this);
}