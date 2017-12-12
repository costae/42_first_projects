#ifndef VICTIM_H
#define VICTIM_H
#include <iostream>
class Victim
{
public:
	std::string name;
	Victim(std::string name);
	Victim(Victim &other);
	~Victim();
	virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Victim& f);

#endif