#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat a("Michel", 149); // Tres tres nul.
	Bureaucrat b("Nicolas", 1); // Quelle puissance !
	Bureaucrat c("Fred", 40); // Plutot bon !

	std::cout << "-----------------------------------------------------" << std::endl;

	Form f("CERFA 666Bis", 40, 60);

	f.beSigned(a);
	std::cout << "-----------------------------------------------------" << std::endl;
	f.beSigned(b);
	std::cout << "-----------------------------------------------------" << std::endl;
	f.beSigned(c);
	std::cout << "-----------------------------------------------------" << std::endl;

	try {
		Form g("Laisser passer A 38", 0, 0);
	} catch (std::exception & e){
		std::cout << "Exception caught : " << e.what() << std::endl;
		std::cout << "Asterix : LE LAISSER-PASSER A38 !!" << std::endl;
	}
}