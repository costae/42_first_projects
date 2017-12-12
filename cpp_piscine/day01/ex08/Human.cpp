#include "Human.hpp"

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << "I made a melee to the target :" << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "I made a ranged to the target :" << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "I will intimidate shouting on :" << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	void(Human::*arrayPtrFctn[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	const std::string arrayAttack[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++)
	{
		if (arrayAttack[i].compare(action_name) == 0)
		(this->*arrayPtrFctn[i])(target);
	}
}
