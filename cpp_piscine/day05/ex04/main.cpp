#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("shrubbery creation", "Pigley");
	}
	catch (std::exception & e)
	{
	/* oh god, unknown error, what to do ?! */
	}
}