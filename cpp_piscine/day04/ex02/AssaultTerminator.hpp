#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& src);
	~AssaultTerminator();
	AssaultTerminator& operator=(const AssaultTerminator& rhs);
	virtual void	battleCry() const;
	virtual ISpaceMarine*	clone() const;
	virtual void	meleeAttack() const;
	virtual void	rangedAttack() const;
	
	private:
};
#endif