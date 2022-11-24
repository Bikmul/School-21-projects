#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called for: " << this << std::endl;
	this->value = 5;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called for: " << this << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called for: " << this << std::endl;
	this->value = other.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called for: " << this << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called for: " << this << std::endl;
}
