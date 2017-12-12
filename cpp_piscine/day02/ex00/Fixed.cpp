#include "Fixed.hpp"

int const Fixed::fbit = 8;
Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called"<< std::endl;
	return;
}

Fixed::Fixed(Fixed &other)
{
	this->value = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(Fixed &fixed)
{
	this->value = fixed.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

int const Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (int)std::bitset<8>(this->value).to_ulong();
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return ;
}
