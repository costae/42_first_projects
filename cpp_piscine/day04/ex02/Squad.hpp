#ifndef SQUAD_HPP
# define SQUAD_HPP
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
	typedef struct	s_container {
	ISpaceMarine*	unit;
	struct s_container*	next;
	}	t_container;

	public:
	Squad();
	Squad(const Squad& src);
	~Squad();
	Squad&	operator=(const Squad& rhs);
	virtual int	getCount() const;
	virtual ISpaceMarine*	getUnit(int n) const;
	virtual int	push(ISpaceMarine* marine);
	
	private:
	void	_copyUnits(const Squad& src);
	void	_destroyUnits();
	bool	_unitAlreadyIn(ISpaceMarine* marine, t_container* squad);
	int	_n_units;
	t_container*	_squad;
};

#endif