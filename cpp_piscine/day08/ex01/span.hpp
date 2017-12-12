#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <list>
#include <iterator>
#include <limits.h>
#include <math.h>

class Span
{
public:
	Span(int N);
	// Span(Span &other);
	~Span();

	int shortestSpan();
	void addNumber(int n);
	int longestSpan();
	int nrMax;
	int nrPush;
	std::list<int> list;
	
};

#endif