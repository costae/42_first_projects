#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	Bureaucrat a("Michel", 149); // Tres tres nul.
	Bureaucrat b("Nicolas", 1); // Quelle puissance !
	Bureaucrat c("Fred", 40); // Plutot bon !

	std::cout << "-----------------------------------------------------" << std::endl;

	PresidentialPardonForm f1("Yasuo");
	PresidentialPardonForm f2("Marc");

	f1.beSigned(a);
	std::cout << "-----------------------------------------------------" << std::endl;
	f2.beSigned(b);
	std::cout << "-----------------------------------------------------" << std::endl;

	try
	{
	f1.execute(a);
	}
	catch(std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;

	f2.execute(b);
	std::cout << "-----------------------------------------------------" << std::endl;

	f1.execute(b);
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "-----------------------------------------------------" << std::endl;
	ShrubberyCreationForm f3("Castle of Friendship");
	f3.beSigned(b);
	f3.execute(b);
	std::cout << "-----------------------------------------------------" << std::endl;
}