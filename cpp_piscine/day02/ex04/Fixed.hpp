#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>
#include <cstdlib>
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
	inline bool operator==(const Fixed& rhs);
	inline bool operator!=(const Fixed& rhs);
	inline bool operator< (const Fixed& rhs);
	inline bool operator> (const Fixed& rhs);
	inline bool operator<=(const Fixed& rhs);
	inline bool operator>=(const Fixed& rhs);
	Fixed operator*(Fixed const & fixed) const;
	Fixed operator+(Fixed const & fixed) const;
	Fixed operator-(Fixed const & fixed) const;
	Fixed operator/(Fixed const & fixed) const;
	Fixed& operator++();
	Fixed operator++(int n);
	static Fixed max(Fixed const &a, Fixed const &b);
	static Fixed min(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif