#ifndef CENTRAL_H
#define CENTRAL_H
#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
class CentralBureaucracy
{
public:
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy &other);
	~CentralBureaucracy();
	void queueUp(std::string target);
	void feed(Bureaucrat *signing, Bureaucrat *executor);

	int nrBur;
	std::string str[100];
	int nrPeople;
	int nrBlock;
};

#endif