/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:51:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/13 12:30:32 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return o;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_nbBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_nbBits));
}

Fixed::Fixed (const float value) : _nbBits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_nbBits));
	return ;
}

Fixed::Fixed (const int value) : _nbBits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << this->_nbBits);
	return ;
}

Fixed::Fixed (void) : _nbBits(8), _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const Fixed& src) :  _nbBits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = src.getRawBits();
	return ;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}