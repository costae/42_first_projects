#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{

	{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
	ISpaceMarine* cur = vlc->getUnit(i);
	cur->battleCry();
	cur->rangedAttack();
	cur->meleeAttack();
	}
	delete vlc;
	}
	return 0;
}