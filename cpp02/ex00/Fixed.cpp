/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:51:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/13 11:54:15 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	(void)this->_nbBits;
	this->_value = raw;
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