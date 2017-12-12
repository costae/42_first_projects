#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& src);
	~TacticalMarine();
	TacticalMarine& operator=(const TacticalMarine& rhs);
	virtual void	battleCry() const;
	virtual ISpaceMarine*	clone() const;
	virtual void	meleeAttack() const;
	virtual void	rangedAttack() const;
	
	private:
};
#endif 