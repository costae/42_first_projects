#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "CentralBureaucracy.hpp"

int main()
{
	CentralBureaucracy *cb1 = new CentralBureaucracy();
	Bureaucrat *signing = new Bureaucrat("rand", 37);
	Bureaucrat *executor = new Bureaucrat("vasiok", 25);
	cb1->feed(signing, executor);
}