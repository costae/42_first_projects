#include "Bureaucrat.hpp"

int main() {
	Bureaucrat a("Tim", 149);
	Bureaucrat b("Bob", 2);

	try {
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.decrement();
	} catch (std::exception & e) {
		std::cout << "ERROR ! CAUGHT AN EXCEPTION : e: [" << e.what() << "]" << std::endl;
		std::cout << "a: " <<  a << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;

	try {
		std::cout << b << std::endl;
		b.increment();
		std::cout << b << std::endl;
		b.increment();
	} catch (std::exception & e) {
		std::cout << "ERROR ! CAUGHT AN EXCEPTION : e: [" << e.what() << "]" << std::endl;
		std::cout << "b: " <<  b << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;

	try {
		Bureaucrat c ("Jean Marie", 200);
	} catch (std::exception & e) {
		std::cout << "ERROR ! CAUGHT AN EXCEPTION WHEN TRYING TO CREATE c: e: [" << e.what() << "]" << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;

	try {
		Bureaucrat d ("Jean Yves", 0);
	} catch (std::exception & e) {
		std::cout << "ERROR ! CAUGHT AN EXCEPTION WHEN TRYING TO CREATE d: e: [" << e.what() << "]" << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;
}