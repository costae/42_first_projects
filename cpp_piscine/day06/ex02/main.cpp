#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base *generate(void)
{
	char c = rand() % 3;
	switch(c)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if(a != NULL)
		std::cout << "A Object created!" << std::endl;
	else if(b != NULL)
		std::cout << "B Object created!" << std::endl;
	else if(c != NULL)
		std::cout << "C Object created!" << std::endl;
	else
		std::cout << "Wrong pointer!" << std::endl;
}

void identify_from_reference(Base &p)
{
	A a; B b; C c;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "A Object created!" << std::endl;
	}
	catch(const std::bad_cast &e)
	{}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "B Object created!" << std::endl;
	}
	catch(const std::bad_cast &e){}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "C Object created!" << std::endl;
	}
	catch(const std::bad_cast &e){}
}

int main()
{
	srand(time(NULL));

	Base *b = generate();
	identify_from_reference(*b);
}