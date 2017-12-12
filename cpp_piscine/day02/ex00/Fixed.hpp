#ifndef FIXED_H
#define FIXED_H
#include <iostream>
class Fixed
{
private: 
	int value;
	const static int fbit;
public:
	Fixed();
	Fixed(Fixed &other);
	~Fixed();
	Fixed& operator=(Fixed &fixed);
	int const getRawBits(void);
	void setRawBits(int const raw);
};

#endif