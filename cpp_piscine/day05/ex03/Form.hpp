#ifndef FORM_H
#define FORM_H
// #include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;
class Form
{
public:
	Form();
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form &other);
	~Form();

	std::string name;
	int gradeExecute;
	int gradeSign;
	bool isSigned;

	std::string getName() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	void beSigned(Bureaucrat &b) ;
	// void signForm(bool succes, Bureaucrat &b);
	bool getIsSigned() const;
	virtual void execute(Bureaucrat const &b) const;

public:	
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw();
		GradeTooHighException() throw();
		~GradeTooHighException() throw();
	} ;


	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw();
		GradeTooLowException() throw();
		~GradeTooLowException() throw();
	};
	
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif