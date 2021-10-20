/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:38:41 by bditte            #+#    #+#             */
/*   Updated: 2021/10/13 12:21:37 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{

	public:

	Fixed(void);
	Fixed(const Fixed& src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed&	operator=(Fixed rhs);
	private:

	const int	_nbBits;
	int			_value;
};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif