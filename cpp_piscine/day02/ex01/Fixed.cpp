#include "Fixed.hpp"

int const Fixed::fbit =8;
Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called"<< std::endl;
	return;
}

Fixed::Fixed(Fixed const &other)
{
	// this->value = other.getRawBits();
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
	return;
}


Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->fbit;
	return;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << this->fbit));
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	this->value = fixed.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	// return (int)std::bitset<8>(this->value).to_ulong();
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return ;
}

float Fixed::toFloat( void ) const
{
	return (float)(this->value/(float)(1 << this->fbit));
}

int Fixed::toInt( void ) const
{
	return this->value >> this->fbit;
}

std::ostream& operator <<(std::ostream& os, const Fixed& obj)
{
    // write obj to stream
    os << obj.toFloat();
    return os;
}