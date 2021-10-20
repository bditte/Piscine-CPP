/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:51:02 by bditte            #+#    #+#             */
/*   Updated: 2021/10/13 16:18:08 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed rhs)
{
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return o;
}

int		Fixed::operator>(Fixed const rhs) const
{
	return ((this->toFloat() > rhs.toFloat()));
}

int		Fixed::operator<(Fixed const rhs) const
{
	return ((this->toFloat() < rhs.toFloat()));
}

int		Fixed::operator>=(Fixed const rhs) const
{
	return ((this->toFloat() >= rhs.toFloat()));
}

int		Fixed::operator<=(Fixed const rhs) const
{
	return ((this->toFloat() <= rhs.toFloat()));
}

Fixed Fixed::operator+(Fixed const rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

int	Fixed::operator==(Fixed const rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

int	Fixed::operator!=(Fixed const rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++*this;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	--*this;
	return (temp);
}

Fixed const& Fixed::min (Fixed const& lhs, Fixed const& rhs)
{
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}

int& Fixed::min (Fixed& lhs, Fixed& rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs._value);
	return (rhs._value);
}

Fixed const& Fixed::max (Fixed const& lhs, Fixed const& rhs)
{
	if (lhs.toFloat() > rhs.toFloat())
		return (lhs);
	return (rhs);
}

int& Fixed::max (Fixed& lhs, Fixed& rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs._value);
	return (rhs._value);
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
	this->_value = roundf(value * (1 << this->_nbBits));
	return ;
}

Fixed::Fixed (const int value) : _nbBits(8)
{
	this->_value = value * (1 << this->_nbBits);
	return ;
}

Fixed::Fixed (void) : _nbBits(8), _value(0)
{
	return ;
}

Fixed::Fixed (const Fixed& src) :  _nbBits(8)
{
	this->_value = src.getRawBits();
	return ;
}

Fixed::~Fixed (void)
{
	return ;
}