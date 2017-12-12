#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->name = "Shrubbery Creation Form";
	this->gradeSign = 145;
	this->gradeExecute = 137;
	this->target= target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){return;}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}
void ShrubberyCreationForm::beSigned(Bureaucrat &b) 
{
	std::cout << "Shrubbery is signed by " << b.getName() << std::endl;
	if(b.getGrade() > this->getGradeSign())
	{
		b.signForm(false, this->name);
		return;
		// throw Form::GradeTooLowException();
	}
	this->isSigned = true;
	b.signForm(true, this->name);
}
void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	std::cout << "Shrubbery is executed by " << b.getName() << std::endl;
	if(b.getGrade() > this->gradeExecute )
		throw(Form::GradeTooLowException());
	std:: cout << b.getName() << " executes " << this->getName() << std::endl;std:: cout << b.getName() << " executes " << this->getName() << std::endl;
	std::ofstream ofs;
	ofs.open(this->target+"_shrubbery", std::ofstream::out | std::ofstream::app);

	ofs << " HAPPY HOLIDAYS!""\n"  << std::endl;

	for(int i=0; i < 15;i++)
	{
		for(int j=15; j>i; j--)
		{
			ofs << " ";
		}
		for(int j=0; j < i*2+1; j++)
		{
			ofs << "*";
		}
		ofs << std::endl;
	}

	ofs.close();
}