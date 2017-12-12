#include "span.hpp"

Span::Span(int N)
{
	this->nrMax = N;
	this->nrPush = 0;
}

// Span::Span(Span &other)
// {
// 	*this = other;
// }

Span::~Span()
{
	return ;
}

void Span::addNumber(int n)
{
	if(this->nrPush <= this->nrMax)
	{
		this->list.push_back(n);
		this->list.sort();
		this->nrPush++;
	}
	else
		throw(std::exception());
}

int	Span::shortestSpan()
{
	std::list<int>::const_iterator it;

	if(this->list.size() < 2)
		throw(std::exception());

	it = this->list.begin();
	int first = *it;
	++it;
	int second = *it;

	return (second - first);
}

int Span::longestSpan()
{
	std::list<int>::const_iterator it;

	if(this->list.size() < 2)
		throw(std::exception());

	it = this->list.begin();
	int first = *it;
	std::advance(it, this->nrPush - 1);
	int second = *it;

	return (second - first);
}
