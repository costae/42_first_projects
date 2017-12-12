#include "Human.hpp"
#include <iostream>
#include <typeinfo>

int main(int argc, char **argv)
{
	Human test;
	test.action("meleeAttack", "Bob");
	test.action("rangedAttack", "Kat");
	test.action("intimidatingShout", "Corentin");
	return (0);
}