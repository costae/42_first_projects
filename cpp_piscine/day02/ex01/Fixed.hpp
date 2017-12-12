#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>
class Fixed
{
private: 
	int value;
	const static int fbit;
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(int n);
	Fixed(float f);
	~Fixed();
	Fixed& operator=(Fixed const &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const; 
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif