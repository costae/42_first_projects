#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "Form.hpp"
class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	// Bureaucrat(Bureaucrat &other);
	~Bureaucrat();

	std::string name;
	int grade;

	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(bool succes, std::string name);
	void executeForm(Form const & form) const;

public:	
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw();
		// 	return ("The Grade you gave was too high!")
		GradeTooHighException() throw();
		// GradeTooHighException(GradeTooHighException &other);
		~GradeTooHighException() throw();
	} ;


	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw();
		GradeTooLowException() throw();
		// GradeTooLowException(GradeTooLowException &other) throw();
		~GradeTooLowException() throw();

		// {
		// 	return ("The Grade you gave was too low!")
		// }
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& f);

#endif